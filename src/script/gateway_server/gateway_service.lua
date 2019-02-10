local config = require("conf")
--stype���������ӵ�session��sessionӳ��
local session_map = {}
--����������ӻ�δ�ɹ���session
local session_connecting = {}

local g_ukey = 1;
--��ʱutagӳ��session�����key��lua����
local client_session_utag = {}
--uidӳ��session
local client_session_uid = {}

function connect_to_server(stype,server_ip,server_port)
	netbus_wrapper.tcp_connect(server_ip,server_port,function(err,session)
		--����ʧ��
		if err ~= nil then
	       session_connecting[stype] = false
		   print("connect error server["..config.servers[stype].desic.."]".."error:"..err)
		   return
	    end
		--���ӳɹ�
		session_map[stype] = session
		print("connect sucess server["..config.servers[stype].desic.."]")
end
)
end

function check_session_connect()
	--����������Ҫ���ӵķ�����
	for k,v in pairs(config.servers) do
		if session_map[v.stype] == nil and session_connecting[v.stype] == false then
			session_connecting[v.stype] = true
			print("connecting server["..v.desic.."]"..v.ip..":"..v.port)
			connect_to_server(v.stype,v.ip,v.port)
		end
	end
end

function server_session_init()
	for k,v in pairs(config.servers) do
		session_map[v.stype] = nil
		session_connecting[v.stype] = false
	end
	--�������Ӷ�ʱ��
	timer_wrapper.create_timer(check_session_connect,-1,1000,1000)
end


function send_to_server(client_session,raw_data)
	local stype,cmd,utag = proto_mgr_wrapper.read_msg_head(raw_data)
	print(stype,cmd,utag)
	local uid = session_wrapper.get_uid(client_session)
	
	local server_session = session_map[stype]
	if server_session == nil then
	print("not found session stype:"..stype)
	   return	
	end
	if uid ==0 then 
		--��δ��¼
	   utag = session_wrapper.get_utag(client_session)
	   if utag ==0 then
		  --��û����ʱ��utag
		  utag = g_ukey
		  g_ukey = g_ukey + 1
		  --��ʱ��key�Ϳͻ���session��һ����ʱ�Ĺ�ϵӳ��
		  client_session_utag[utag] = client_session
		  --����session��utagֵ
		  session_wrapper.set_utag(client_session,utag)
	   end
	else
		--�Ѿ���¼
		utag = uid
		client_session_uid[utag] = client_session
	end
	 
	 --�ȸ����ݰ�д��utag,���������ݷ��ط���client_session����ӳ���ϵ
	 proto_mgr_wrapper.set_raw_utag(raw_data,utag)
	 --�������ݸ�stype��Ӧ�ķ�����
	 session_wrapper.send_raw_msg(server_session,raw_data)
end

--����������������Ϣ��ת����Ӧ�Ŀͻ���
function send_to_client(server_session,raw_data)
	local stype, ctype, utag = proto_mgr_wrapper.read_msg_head(raw_data)
	print(utag)
	local client_session = nil
	--���ݵ�¼ǰ�����ǵ�½���ȡclient_session
	if client_session_utag[utag] ~= nil then
		print("client_session_utag")
		client_session = client_session_utag[utag]
	elseif client_session_uid[utag] ~= nil then
	    print("client_session_uid")
		client_session = client_session_uid[utag]
	else 
	    print("not fonud client session")
	end

	--��Э�����utag����Ϊ0 
	proto_mgr_wrapper.set_raw_utag(raw_data,0)
	if client_session ~= nil then
	   --ת�����ݸ��ͻ���
	   --print("send_raw_msg client session")
	   session_wrapper.send_raw_msg(client_session,raw_data)
	else
		print("send_to_client: not found clcient session")
	end
end

-- raw_data��C++���Ǹ����͵��������ݰ�
--���ؿ����յ�2��session��������
--���Կͻ��ˣ���Ҫ����stypeת������Ӧ��session
--���Է�����������utag����uidת�����ͻ��˶�Ӧ��session
function on_gw_recv_raw_cmd(s, raw_data)
	print("on_gw_recv_raw_cmd")
	is_client_session = session_wrapper.is_client_session(s)
	if is_client_session==0 then 
	   --���Կͻ�������
	   --print("send_to_server")
	   send_to_server(s,raw_data)
	else
	   --���Է�����
	  --print("send_to_client")
	   send_to_client(s,raw_data)
	end
end

--session�Ͽ��ص�����
function on_gw_session_disconnect(s) 
	print("on_gw_session_disconnect!!")
    --�������������������������session
	if session_wrapper.is_client_session(s)==1 then
	--�������ӵ�session�Ͽ��ص�����
		--print(s)
		for k,v in pairs(session_map) do
			--print(v)
			if v == s then
				--print("disconnect server["..config.servers[k].desic.."]")
				session_map[k] = nil
				session_connecting[k] = false
				return
			end
		end
		return
	end
	--print("on_gw_session_disconnect BBB!!")
	--�ͻ������ӵ����ص�session,������Ϊ��¼ǰ
	local utag = session_wrapper.get_utag(s)
	--print("on_gw_session_disconnect BBB!!"..utag)
	if client_session_utag[utag] ~= nil then
	   print("client_session_utag[utag] remove!!")
	   client_session_utag[utag] = nil
	   session_wrapper.set_utag(s,0)
	   table.remove(client_session_utag,utag)	
	end

	--�ͻ������ӵ����أ��Ѿ��ǵ�¼��
	local uid = session_wrapper.get_uid(s)
	if client_session_uid[uid] ~= nil then
	   print("client_session_uid[uid] remove!!")
	   client_session_uid[uid] = nil
	   table.remove(client_session_uid,uid)
	end
end

local gw_service = {
	on_session_recv_raw_cmd = on_gw_recv_raw_cmd,
	on_session_disconnect = on_gw_session_disconnect,
}

server_session_init()

return gw_service