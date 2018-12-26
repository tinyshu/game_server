#ifndef SESSION_H__
#define SESSION_H__

struct recv_msg;
struct session;
class export_session {
public:
	virtual void close()=0;
	virtual void send_data(unsigned char* pkg,int pkg_len) = 0;
	virtual void send_msg(recv_msg* msg) = 0;

	virtual session* get_inner_session() = 0;
};

#endif