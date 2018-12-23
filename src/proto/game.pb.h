// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#ifndef PROTOBUF_INCLUDED_game_2eproto
#define PROTOBUF_INCLUDED_game_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_game_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_game_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_game_2eproto();
class LoginReq;
class LoginReqDefaultTypeInternal;
extern LoginReqDefaultTypeInternal _LoginReq_default_instance_;
class LoginRes;
class LoginResDefaultTypeInternal;
extern LoginResDefaultTypeInternal _LoginRes_default_instance_;
namespace google {
namespace protobuf {
template<> ::LoginReq* Arena::CreateMaybeMessage<::LoginReq>(Arena*);
template<> ::LoginRes* Arena::CreateMaybeMessage<::LoginRes>(Arena*);
}  // namespace protobuf
}  // namespace google

enum Cmd {
  eLoginReq = 0,
  eLoginRes = 1,
  Cmd_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Cmd_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Cmd_IsValid(int value);
const Cmd Cmd_MIN = eLoginReq;
const Cmd Cmd_MAX = eLoginRes;
const int Cmd_ARRAYSIZE = Cmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* Cmd_descriptor();
inline const ::std::string& Cmd_Name(Cmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    Cmd_descriptor(), value);
}
inline bool Cmd_Parse(
    const ::std::string& name, Cmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Cmd>(
    Cmd_descriptor(), name, value);
}
// ===================================================================

class LoginReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:LoginReq) */ {
 public:
  LoginReq();
  virtual ~LoginReq();

  LoginReq(const LoginReq& from);

  inline LoginReq& operator=(const LoginReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LoginReq(LoginReq&& from) noexcept
    : LoginReq() {
    *this = ::std::move(from);
  }

  inline LoginReq& operator=(LoginReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const LoginReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoginReq* internal_default_instance() {
    return reinterpret_cast<const LoginReq*>(
               &_LoginReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LoginReq* other);
  friend void swap(LoginReq& a, LoginReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LoginReq* New() const final {
    return CreateMaybeMessage<LoginReq>(nullptr);
  }

  LoginReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LoginReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LoginReq& from);
  void MergeFrom(const LoginReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LoginReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string email = 3;
  void clear_email();
  static const int kEmailFieldNumber = 3;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  #if LANG_CXX11
  void set_email(::std::string&& value);
  #endif
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // int32 age = 2;
  void clear_age();
  static const int kAgeFieldNumber = 2;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // int32 int_set = 4;
  void clear_int_set();
  static const int kIntSetFieldNumber = 4;
  ::google::protobuf::int32 int_set() const;
  void set_int_set(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:LoginReq)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::int32 age_;
  ::google::protobuf::int32 int_set_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_game_2eproto;
};
// -------------------------------------------------------------------

class LoginRes : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:LoginRes) */ {
 public:
  LoginRes();
  virtual ~LoginRes();

  LoginRes(const LoginRes& from);

  inline LoginRes& operator=(const LoginRes& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LoginRes(LoginRes&& from) noexcept
    : LoginRes() {
    *this = ::std::move(from);
  }

  inline LoginRes& operator=(LoginRes&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const LoginRes& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoginRes* internal_default_instance() {
    return reinterpret_cast<const LoginRes*>(
               &_LoginRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(LoginRes* other);
  friend void swap(LoginRes& a, LoginRes& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LoginRes* New() const final {
    return CreateMaybeMessage<LoginRes>(nullptr);
  }

  LoginRes* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LoginRes>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LoginRes& from);
  void MergeFrom(const LoginRes& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LoginRes* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:LoginRes)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_game_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LoginReq

// string name = 1;
inline void LoginReq::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LoginReq::name() const {
  // @@protoc_insertion_point(field_get:LoginReq.name)
  return name_.GetNoArena();
}
inline void LoginReq::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LoginReq.name)
}
#if LANG_CXX11
inline void LoginReq::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LoginReq.name)
}
#endif
inline void LoginReq::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LoginReq.name)
}
inline void LoginReq::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LoginReq.name)
}
inline ::std::string* LoginReq::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:LoginReq.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_name() {
  // @@protoc_insertion_point(field_release:LoginReq.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:LoginReq.name)
}

// int32 age = 2;
inline void LoginReq::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 LoginReq::age() const {
  // @@protoc_insertion_point(field_get:LoginReq.age)
  return age_;
}
inline void LoginReq::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:LoginReq.age)
}

// string email = 3;
inline void LoginReq::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LoginReq::email() const {
  // @@protoc_insertion_point(field_get:LoginReq.email)
  return email_.GetNoArena();
}
inline void LoginReq::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LoginReq.email)
}
#if LANG_CXX11
inline void LoginReq::set_email(::std::string&& value) {
  
  email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LoginReq.email)
}
#endif
inline void LoginReq::set_email(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LoginReq.email)
}
inline void LoginReq::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LoginReq.email)
}
inline ::std::string* LoginReq::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:LoginReq.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_email() {
  // @@protoc_insertion_point(field_release:LoginReq.email)
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_email(::std::string* email) {
  if (email != nullptr) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:LoginReq.email)
}

// int32 int_set = 4;
inline void LoginReq::clear_int_set() {
  int_set_ = 0;
}
inline ::google::protobuf::int32 LoginReq::int_set() const {
  // @@protoc_insertion_point(field_get:LoginReq.int_set)
  return int_set_;
}
inline void LoginReq::set_int_set(::google::protobuf::int32 value) {
  
  int_set_ = value;
  // @@protoc_insertion_point(field_set:LoginReq.int_set)
}

// -------------------------------------------------------------------

// LoginRes

// int32 status = 1;
inline void LoginRes::clear_status() {
  status_ = 0;
}
inline ::google::protobuf::int32 LoginRes::status() const {
  // @@protoc_insertion_point(field_get:LoginRes.status)
  return status_;
}
inline void LoginRes::set_status(::google::protobuf::int32 value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:LoginRes.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Cmd> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Cmd>() {
  return ::Cmd_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_game_2eproto
