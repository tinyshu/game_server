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

class GuestLoginReqDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GuestLoginReq> _instance;
} _GuestLoginReq_default_instance_;
class GuestLoginResDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GuestLoginRes> _instance;
} _GuestLoginRes_default_instance_;
static void InitDefaultsGuestLoginReq_game_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_GuestLoginReq_default_instance_;
    new (ptr) ::GuestLoginReq();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::GuestLoginReq::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GuestLoginReq_game_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGuestLoginReq_game_2eproto}, {}};

static void InitDefaultsGuestLoginRes_game_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_GuestLoginRes_default_instance_;
    new (ptr) ::GuestLoginRes();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::GuestLoginRes::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GuestLoginRes_game_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGuestLoginRes_game_2eproto}, {}};

void InitDefaults_game_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_GuestLoginReq_game_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GuestLoginRes_game_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_game_2eproto[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_game_2eproto[2];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_game_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_game_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GuestLoginReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::GuestLoginReq, guest_key_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::GuestLoginRes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::GuestLoginRes, result_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::GuestLoginReq)},
  { 6, -1, sizeof(::GuestLoginRes)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_GuestLoginReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_GuestLoginRes_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_game_2eproto = {
  {}, AddDescriptors_game_2eproto, "game.proto", schemas,
  file_default_instances, TableStruct_game_2eproto::offsets,
  file_level_metadata_game_2eproto, 2, file_level_enum_descriptors_game_2eproto, file_level_service_descriptors_game_2eproto,
};

const char descriptor_table_protodef_game_2eproto[] =
  "\n\ngame.proto\"\"\n\rGuestLoginReq\022\021\n\tguest_k"
  "ey\030\001 \001(\t\"\037\n\rGuestLoginRes\022\016\n\006result\030\001 \001("
  "\005*N\n\005Stype\022\022\n\016INVALIDI_STYPE\020\000\022\016\n\nAUTH_S"
  "TYPE\020\001\022\020\n\014SYSTEM_STYPE\020\002\022\017\n\013LOGIC_STYPE\020"
  "\003**\n\003Cmd\022\017\n\013INVALID_CMD\020\000\022\022\n\016eGuestLogin"
  "Req\020\001b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_game_2eproto = {
  false, InitDefaults_game_2eproto, 
  descriptor_table_protodef_game_2eproto,
  "game.proto", &assign_descriptors_table_game_2eproto, 213,
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

void GuestLoginReq::InitAsDefaultInstance() {
}
class GuestLoginReq::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GuestLoginReq::kGuestKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GuestLoginReq::GuestLoginReq()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:GuestLoginReq)
}
GuestLoginReq::GuestLoginReq(const GuestLoginReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  guest_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.guest_key().size() > 0) {
    guest_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.guest_key_);
  }
  // @@protoc_insertion_point(copy_constructor:GuestLoginReq)
}

void GuestLoginReq::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_GuestLoginReq_game_2eproto.base);
  guest_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

GuestLoginReq::~GuestLoginReq() {
  // @@protoc_insertion_point(destructor:GuestLoginReq)
  SharedDtor();
}

void GuestLoginReq::SharedDtor() {
  guest_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GuestLoginReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GuestLoginReq& GuestLoginReq::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_GuestLoginReq_game_2eproto.base);
  return *internal_default_instance();
}


void GuestLoginReq::Clear() {
// @@protoc_insertion_point(message_clear_start:GuestLoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  guest_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GuestLoginReq::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<GuestLoginReq*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string guest_key = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("GuestLoginReq.guest_key");
        auto str = msg->mutable_guest_key();
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
bool GuestLoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GuestLoginReq)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string guest_key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_guest_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->guest_key().data(), static_cast<int>(this->guest_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "GuestLoginReq.guest_key"));
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
  // @@protoc_insertion_point(parse_success:GuestLoginReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GuestLoginReq)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GuestLoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GuestLoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string guest_key = 1;
  if (this->guest_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->guest_key().data(), static_cast<int>(this->guest_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "GuestLoginReq.guest_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->guest_key(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GuestLoginReq)
}

::google::protobuf::uint8* GuestLoginReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:GuestLoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string guest_key = 1;
  if (this->guest_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->guest_key().data(), static_cast<int>(this->guest_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "GuestLoginReq.guest_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->guest_key(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GuestLoginReq)
  return target;
}

size_t GuestLoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GuestLoginReq)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string guest_key = 1;
  if (this->guest_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->guest_key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GuestLoginReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GuestLoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  const GuestLoginReq* source =
      ::google::protobuf::DynamicCastToGenerated<GuestLoginReq>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GuestLoginReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GuestLoginReq)
    MergeFrom(*source);
  }
}

void GuestLoginReq::MergeFrom(const GuestLoginReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GuestLoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.guest_key().size() > 0) {

    guest_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.guest_key_);
  }
}

void GuestLoginReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GuestLoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GuestLoginReq::CopyFrom(const GuestLoginReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GuestLoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GuestLoginReq::IsInitialized() const {
  return true;
}

void GuestLoginReq::Swap(GuestLoginReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GuestLoginReq::InternalSwap(GuestLoginReq* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  guest_key_.Swap(&other->guest_key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata GuestLoginReq::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_game_2eproto);
  return ::file_level_metadata_game_2eproto[kIndexInFileMessages];
}


// ===================================================================

void GuestLoginRes::InitAsDefaultInstance() {
}
class GuestLoginRes::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GuestLoginRes::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GuestLoginRes::GuestLoginRes()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:GuestLoginRes)
}
GuestLoginRes::GuestLoginRes(const GuestLoginRes& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:GuestLoginRes)
}

void GuestLoginRes::SharedCtor() {
  result_ = 0;
}

GuestLoginRes::~GuestLoginRes() {
  // @@protoc_insertion_point(destructor:GuestLoginRes)
  SharedDtor();
}

void GuestLoginRes::SharedDtor() {
}

void GuestLoginRes::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GuestLoginRes& GuestLoginRes::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_GuestLoginRes_game_2eproto.base);
  return *internal_default_instance();
}


void GuestLoginRes::Clear() {
// @@protoc_insertion_point(message_clear_start:GuestLoginRes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GuestLoginRes::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<GuestLoginRes*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = Varint::Parse32Inline(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 result = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = Varint::Parse64(ptr, &val);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ::google::protobuf::int32 value = val;
        msg->set_result(value);
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
bool GuestLoginRes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GuestLoginRes)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
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
  // @@protoc_insertion_point(parse_success:GuestLoginRes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GuestLoginRes)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GuestLoginRes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GuestLoginRes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GuestLoginRes)
}

::google::protobuf::uint8* GuestLoginRes::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:GuestLoginRes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GuestLoginRes)
  return target;
}

size_t GuestLoginRes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GuestLoginRes)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GuestLoginRes::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GuestLoginRes)
  GOOGLE_DCHECK_NE(&from, this);
  const GuestLoginRes* source =
      ::google::protobuf::DynamicCastToGenerated<GuestLoginRes>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GuestLoginRes)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GuestLoginRes)
    MergeFrom(*source);
  }
}

void GuestLoginRes::MergeFrom(const GuestLoginRes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GuestLoginRes)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result() != 0) {
    set_result(from.result());
  }
}

void GuestLoginRes::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GuestLoginRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GuestLoginRes::CopyFrom(const GuestLoginRes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GuestLoginRes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GuestLoginRes::IsInitialized() const {
  return true;
}

void GuestLoginRes::Swap(GuestLoginRes* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GuestLoginRes::InternalSwap(GuestLoginRes* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(result_, other->result_);
}

::google::protobuf::Metadata GuestLoginRes::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_game_2eproto);
  return ::file_level_metadata_game_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::GuestLoginReq* Arena::CreateMaybeMessage< ::GuestLoginReq >(Arena* arena) {
  return Arena::CreateInternal< ::GuestLoginReq >(arena);
}
template<> PROTOBUF_NOINLINE ::GuestLoginRes* Arena::CreateMaybeMessage< ::GuestLoginRes >(Arena* arena) {
  return Arena::CreateInternal< ::GuestLoginRes >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
