// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#include "game.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

class LoginReqDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LoginReq> _instance;
} _LoginReq_default_instance_;
class LoginResDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LoginRes> _instance;
} _LoginRes_default_instance_;
static void InitDefaultsLoginReq_game_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_LoginReq_default_instance_;
    new (ptr) ::LoginReq();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::LoginReq::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LoginReq_game_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLoginReq_game_2eproto}, {}};

static void InitDefaultsLoginRes_game_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_LoginRes_default_instance_;
    new (ptr) ::LoginRes();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::LoginRes::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LoginRes_game_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLoginRes_game_2eproto}, {}};

void InitDefaults_game_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_LoginReq_game_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_LoginRes_game_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_game_2eproto[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_game_2eproto[2];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_game_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_game_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LoginReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::LoginReq, name_),
  PROTOBUF_FIELD_OFFSET(::LoginReq, age_),
  PROTOBUF_FIELD_OFFSET(::LoginReq, email_),
  PROTOBUF_FIELD_OFFSET(::LoginReq, int_set_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::LoginRes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::LoginRes, status_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::LoginReq)},
  { 9, -1, sizeof(::LoginRes)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_LoginReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_LoginRes_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_game_2eproto = {
  {}, AddDescriptors_game_2eproto, "game.proto", schemas,
  file_default_instances, TableStruct_game_2eproto::offsets,
  file_level_metadata_game_2eproto, 2, file_level_enum_descriptors_game_2eproto, file_level_service_descriptors_game_2eproto,
};

const char descriptor_table_protodef_game_2eproto[] =
  "\n\ngame.proto\"E\n\010LoginReq\022\014\n\004name\030\001 \001(\t\022\013"
  "\n\003age\030\002 \001(\005\022\r\n\005email\030\003 \001(\t\022\017\n\007int_set\030\004 "
  "\001(\005\"\032\n\010LoginRes\022\016\n\006status\030\001 \001(\005*N\n\005Stype"
  "\022\022\n\016INVALIDI_STYPE\020\000\022\016\n\nAUTH_STYPE\020\001\022\020\n\014"
  "SYSTEM_STYPE\020\002\022\017\n\013LOGIC_STYPE\020\003*#\n\003Cmd\022\r"
  "\n\teLoginReq\020\000\022\r\n\teLoginRes\020\001b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_game_2eproto = {
  false, InitDefaults_game_2eproto, 
  descriptor_table_protodef_game_2eproto,
  "game.proto", &assign_descriptors_table_game_2eproto, 236,
};

void AddDescriptors_game_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_game_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_game_2eproto = []() { AddDescriptors_game_2eproto(); return true; }();
const ::google::protobuf::EnumDescriptor* Stype_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_game_2eproto);
  return file_level_enum_descriptors_game_2eproto[0];
}
bool Stype_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* Cmd_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_game_2eproto);
  return file_level_enum_descriptors_game_2eproto[1];
}
bool Cmd_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void LoginReq::InitAsDefaultInstance() {
}
class LoginReq::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginReq::kNameFieldNumber;
const int LoginReq::kAgeFieldNumber;
const int LoginReq::kEmailFieldNumber;
const int LoginReq::kIntSetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginReq::LoginReq()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LoginReq)
}
LoginReq::LoginReq(const LoginReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.email().size() > 0) {
    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  ::memcpy(&age_, &from.age_,
    static_cast<size_t>(reinterpret_cast<char*>(&int_set_) -
    reinterpret_cast<char*>(&age_)) + sizeof(int_set_));
  // @@protoc_insertion_point(copy_constructor:LoginReq)
}

void LoginReq::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_LoginReq_game_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&int_set_) -
      reinterpret_cast<char*>(&age_)) + sizeof(int_set_));
}

LoginReq::~LoginReq() {
  // @@protoc_insertion_point(destructor:LoginReq)
  SharedDtor();
}

void LoginReq::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LoginReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LoginReq& LoginReq::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_LoginReq_game_2eproto.base);
  return *internal_default_instance();
}


void LoginReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&age_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&int_set_) -
      reinterpret_cast<char*>(&age_)) + sizeof(int_set_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* LoginReq::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<LoginReq*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("LoginReq.name");
        auto str = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      // int32 age = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = Varint::Parse64(ptr, &val);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ::google::protobuf::int32 value = val;
        msg->set_age(value);
        break;
      }
      // string email = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("LoginReq.email");
        auto str = msg->mutable_email();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          object = str;
          str->clear();
          str->reserve(size);
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto len_delim_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(str, ptr, size, ctx);
        ptr += size;
        break;
      }
      // int32 int_set = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 32) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = Varint::Parse64(ptr, &val);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ::google::protobuf::int32 value = val;
        msg->set_int_set(value);
        break;
      }
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth, tag));
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool LoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LoginReq)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LoginReq.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 age = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string email = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->email().data(), static_cast<int>(this->email().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LoginReq.email"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 int_set = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (32 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int_set_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LoginReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LoginReq)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void LoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LoginReq.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // int32 age = 2;
  if (this->age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->age(), output);
  }

  // string email = 3;
  if (this->email().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LoginReq.email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->email(), output);
  }

  // int32 int_set = 4;
  if (this->int_set() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->int_set(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LoginReq)
}

::google::protobuf::uint8* LoginReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LoginReq.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // int32 age = 2;
  if (this->age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->age(), target);
  }

  // string email = 3;
  if (this->email().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LoginReq.email");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }

  // int32 int_set = 4;
  if (this->int_set() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->int_set(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoginReq)
  return target;
}

size_t LoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LoginReq)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string email = 3;
  if (this->email().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());
  }

  // int32 age = 2;
  if (this->age() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->age());
  }

  // int32 int_set = 4;
  if (this->int_set() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->int_set());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginReq* source =
      ::google::protobuf::DynamicCastToGenerated<LoginReq>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LoginReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LoginReq)
    MergeFrom(*source);
  }
}

void LoginReq::MergeFrom(const LoginReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.email().size() > 0) {

    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  if (from.age() != 0) {
    set_age(from.age());
  }
  if (from.int_set() != 0) {
    set_int_set(from.int_set());
  }
}

void LoginReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginReq::CopyFrom(const LoginReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginReq::IsInitialized() const {
  return true;
}

void LoginReq::Swap(LoginReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginReq::InternalSwap(LoginReq* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  email_.Swap(&other->email_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(age_, other->age_);
  swap(int_set_, other->int_set_);
}

::google::protobuf::Metadata LoginReq::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_game_2eproto);
  return ::file_level_metadata_game_2eproto[kIndexInFileMessages];
}


// ===================================================================

void LoginRes::InitAsDefaultInstance() {
}
class LoginRes::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginRes::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginRes::LoginRes()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LoginRes)
}
LoginRes::LoginRes(const LoginRes& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:LoginRes)
}

void LoginRes::SharedCtor() {
  status_ = 0;
}

LoginRes::~LoginRes() {
  // @@protoc_insertion_point(destructor:LoginRes)
  SharedDtor();
}

void LoginRes::SharedDtor() {
}

void LoginRes::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LoginRes& LoginRes::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_LoginRes_game_2eproto.base);
  return *internal_default_instance();
}


void LoginRes::Clear() {
// @@protoc_insertion_point(message_clear_start:LoginRes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* LoginRes::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<LoginRes*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 status = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = Varint::Parse64(ptr, &val);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ::google::protobuf::int32 value = val;
        msg->set_status(value);
        break;
      }
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth, tag));
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool LoginRes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LoginRes)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LoginRes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LoginRes)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void LoginRes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LoginRes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LoginRes)
}

::google::protobuf::uint8* LoginRes::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LoginRes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoginRes)
  return target;
}

size_t LoginRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LoginRes)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 status = 1;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginRes::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LoginRes)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginRes* source =
      ::google::protobuf::DynamicCastToGenerated<LoginRes>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LoginRes)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LoginRes)
    MergeFrom(*source);
  }
}

void LoginRes::MergeFrom(const LoginRes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LoginRes)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.status() != 0) {
    set_status(from.status());
  }
}

void LoginRes::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LoginRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginRes::CopyFrom(const LoginRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LoginRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRes::IsInitialized() const {
  return true;
}

void LoginRes::Swap(LoginRes* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginRes::InternalSwap(LoginRes* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(status_, other->status_);
}

::google::protobuf::Metadata LoginRes::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_game_2eproto);
  return ::file_level_metadata_game_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::LoginReq* Arena::CreateMaybeMessage< ::LoginReq >(Arena* arena) {
  return Arena::CreateInternal< ::LoginReq >(arena);
}
template<> PROTOBUF_NOINLINE ::LoginRes* Arena::CreateMaybeMessage< ::LoginRes >(Arena* arena) {
  return Arena::CreateInternal< ::LoginRes >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
