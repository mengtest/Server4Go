// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#ifndef PROTOBUF_protocol_2eproto__INCLUDED
#define PROTOBUF_protocol_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protocol_2eproto();
void protobuf_AssignDesc_protocol_2eproto();
void protobuf_ShutdownFile_protocol_2eproto();

class S2SSystem;
class S2SSystem_Helloworld;
class S2SSystem_QueryOrder;

// ===================================================================

class S2SSystem_Helloworld : public ::google::protobuf::Message {
 public:
  S2SSystem_Helloworld();
  virtual ~S2SSystem_Helloworld();

  S2SSystem_Helloworld(const S2SSystem_Helloworld& from);

  inline S2SSystem_Helloworld& operator=(const S2SSystem_Helloworld& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2SSystem_Helloworld& default_instance();

  void Swap(S2SSystem_Helloworld* other);

  // implements Message ----------------------------------------------

  S2SSystem_Helloworld* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2SSystem_Helloworld& from);
  void MergeFrom(const S2SSystem_Helloworld& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string str = 2;
  inline bool has_str() const;
  inline void clear_str();
  static const int kStrFieldNumber = 2;
  inline const ::std::string& str() const;
  inline void set_str(const ::std::string& value);
  inline void set_str(const char* value);
  inline void set_str(const char* value, size_t size);
  inline ::std::string* mutable_str();
  inline ::std::string* release_str();
  inline void set_allocated_str(::std::string* str);

  // required int32 opt = 3;
  inline bool has_opt() const;
  inline void clear_opt();
  static const int kOptFieldNumber = 3;
  inline ::google::protobuf::int32 opt() const;
  inline void set_opt(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protocol.S2SSystem.Helloworld)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_str();
  inline void clear_has_str();
  inline void set_has_opt();
  inline void clear_has_opt();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* str_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 opt_;
  friend void  protobuf_AddDesc_protocol_2eproto();
  friend void protobuf_AssignDesc_protocol_2eproto();
  friend void protobuf_ShutdownFile_protocol_2eproto();

  void InitAsDefaultInstance();
  static S2SSystem_Helloworld* default_instance_;
};
// -------------------------------------------------------------------

class S2SSystem_QueryOrder : public ::google::protobuf::Message {
 public:
  S2SSystem_QueryOrder();
  virtual ~S2SSystem_QueryOrder();

  S2SSystem_QueryOrder(const S2SSystem_QueryOrder& from);

  inline S2SSystem_QueryOrder& operator=(const S2SSystem_QueryOrder& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2SSystem_QueryOrder& default_instance();

  void Swap(S2SSystem_QueryOrder* other);

  // implements Message ----------------------------------------------

  S2SSystem_QueryOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2SSystem_QueryOrder& from);
  void MergeFrom(const S2SSystem_QueryOrder& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string begin_time = 2;
  inline bool has_begin_time() const;
  inline void clear_begin_time();
  static const int kBeginTimeFieldNumber = 2;
  inline const ::std::string& begin_time() const;
  inline void set_begin_time(const ::std::string& value);
  inline void set_begin_time(const char* value);
  inline void set_begin_time(const char* value, size_t size);
  inline ::std::string* mutable_begin_time();
  inline ::std::string* release_begin_time();
  inline void set_allocated_begin_time(::std::string* begin_time);

  // optional string end_time = 3;
  inline bool has_end_time() const;
  inline void clear_end_time();
  static const int kEndTimeFieldNumber = 3;
  inline const ::std::string& end_time() const;
  inline void set_end_time(const ::std::string& value);
  inline void set_end_time(const char* value);
  inline void set_end_time(const char* value, size_t size);
  inline ::std::string* mutable_end_time();
  inline ::std::string* release_end_time();
  inline void set_allocated_end_time(::std::string* end_time);

  // @@protoc_insertion_point(class_scope:protocol.S2SSystem.QueryOrder)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_begin_time();
  inline void clear_has_begin_time();
  inline void set_has_end_time();
  inline void clear_has_end_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* begin_time_;
  ::std::string* end_time_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_protocol_2eproto();
  friend void protobuf_AssignDesc_protocol_2eproto();
  friend void protobuf_ShutdownFile_protocol_2eproto();

  void InitAsDefaultInstance();
  static S2SSystem_QueryOrder* default_instance_;
};
// -------------------------------------------------------------------

class S2SSystem : public ::google::protobuf::Message {
 public:
  S2SSystem();
  virtual ~S2SSystem();

  S2SSystem(const S2SSystem& from);

  inline S2SSystem& operator=(const S2SSystem& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2SSystem& default_instance();

  void Swap(S2SSystem* other);

  // implements Message ----------------------------------------------

  S2SSystem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2SSystem& from);
  void MergeFrom(const S2SSystem& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef S2SSystem_Helloworld Helloworld;
  typedef S2SSystem_QueryOrder QueryOrder;

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:protocol.S2SSystem)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protocol_2eproto();
  friend void protobuf_AssignDesc_protocol_2eproto();
  friend void protobuf_ShutdownFile_protocol_2eproto();

  void InitAsDefaultInstance();
  static S2SSystem* default_instance_;
};
// ===================================================================


// ===================================================================

// S2SSystem_Helloworld

// optional int32 id = 1;
inline bool S2SSystem_Helloworld::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2SSystem_Helloworld::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2SSystem_Helloworld::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2SSystem_Helloworld::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 S2SSystem_Helloworld::id() const {
  // @@protoc_insertion_point(field_get:protocol.S2SSystem.Helloworld.id)
  return id_;
}
inline void S2SSystem_Helloworld::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:protocol.S2SSystem.Helloworld.id)
}

// required string str = 2;
inline bool S2SSystem_Helloworld::has_str() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S2SSystem_Helloworld::set_has_str() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S2SSystem_Helloworld::clear_has_str() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S2SSystem_Helloworld::clear_str() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_->clear();
  }
  clear_has_str();
}
inline const ::std::string& S2SSystem_Helloworld::str() const {
  // @@protoc_insertion_point(field_get:protocol.S2SSystem.Helloworld.str)
  return *str_;
}
inline void S2SSystem_Helloworld::set_str(const ::std::string& value) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.S2SSystem.Helloworld.str)
}
inline void S2SSystem_Helloworld::set_str(const char* value) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.S2SSystem.Helloworld.str)
}
inline void S2SSystem_Helloworld::set_str(const char* value, size_t size) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.S2SSystem.Helloworld.str)
}
inline ::std::string* S2SSystem_Helloworld::mutable_str() {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.S2SSystem.Helloworld.str)
  return str_;
}
inline ::std::string* S2SSystem_Helloworld::release_str() {
  clear_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = str_;
    str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void S2SSystem_Helloworld::set_allocated_str(::std::string* str) {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (str) {
    set_has_str();
    str_ = str;
  } else {
    clear_has_str();
    str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.S2SSystem.Helloworld.str)
}

// required int32 opt = 3;
inline bool S2SSystem_Helloworld::has_opt() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void S2SSystem_Helloworld::set_has_opt() {
  _has_bits_[0] |= 0x00000004u;
}
inline void S2SSystem_Helloworld::clear_has_opt() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void S2SSystem_Helloworld::clear_opt() {
  opt_ = 0;
  clear_has_opt();
}
inline ::google::protobuf::int32 S2SSystem_Helloworld::opt() const {
  // @@protoc_insertion_point(field_get:protocol.S2SSystem.Helloworld.opt)
  return opt_;
}
inline void S2SSystem_Helloworld::set_opt(::google::protobuf::int32 value) {
  set_has_opt();
  opt_ = value;
  // @@protoc_insertion_point(field_set:protocol.S2SSystem.Helloworld.opt)
}

// -------------------------------------------------------------------

// S2SSystem_QueryOrder

// optional int32 id = 1;
inline bool S2SSystem_QueryOrder::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2SSystem_QueryOrder::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2SSystem_QueryOrder::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2SSystem_QueryOrder::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 S2SSystem_QueryOrder::id() const {
  // @@protoc_insertion_point(field_get:protocol.S2SSystem.QueryOrder.id)
  return id_;
}
inline void S2SSystem_QueryOrder::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:protocol.S2SSystem.QueryOrder.id)
}

// optional string begin_time = 2;
inline bool S2SSystem_QueryOrder::has_begin_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S2SSystem_QueryOrder::set_has_begin_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S2SSystem_QueryOrder::clear_has_begin_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S2SSystem_QueryOrder::clear_begin_time() {
  if (begin_time_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    begin_time_->clear();
  }
  clear_has_begin_time();
}
inline const ::std::string& S2SSystem_QueryOrder::begin_time() const {
  // @@protoc_insertion_point(field_get:protocol.S2SSystem.QueryOrder.begin_time)
  return *begin_time_;
}
inline void S2SSystem_QueryOrder::set_begin_time(const ::std::string& value) {
  set_has_begin_time();
  if (begin_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    begin_time_ = new ::std::string;
  }
  begin_time_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.S2SSystem.QueryOrder.begin_time)
}
inline void S2SSystem_QueryOrder::set_begin_time(const char* value) {
  set_has_begin_time();
  if (begin_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    begin_time_ = new ::std::string;
  }
  begin_time_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.S2SSystem.QueryOrder.begin_time)
}
inline void S2SSystem_QueryOrder::set_begin_time(const char* value, size_t size) {
  set_has_begin_time();
  if (begin_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    begin_time_ = new ::std::string;
  }
  begin_time_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.S2SSystem.QueryOrder.begin_time)
}
inline ::std::string* S2SSystem_QueryOrder::mutable_begin_time() {
  set_has_begin_time();
  if (begin_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    begin_time_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.S2SSystem.QueryOrder.begin_time)
  return begin_time_;
}
inline ::std::string* S2SSystem_QueryOrder::release_begin_time() {
  clear_has_begin_time();
  if (begin_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = begin_time_;
    begin_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void S2SSystem_QueryOrder::set_allocated_begin_time(::std::string* begin_time) {
  if (begin_time_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete begin_time_;
  }
  if (begin_time) {
    set_has_begin_time();
    begin_time_ = begin_time;
  } else {
    clear_has_begin_time();
    begin_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.S2SSystem.QueryOrder.begin_time)
}

// optional string end_time = 3;
inline bool S2SSystem_QueryOrder::has_end_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void S2SSystem_QueryOrder::set_has_end_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void S2SSystem_QueryOrder::clear_has_end_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void S2SSystem_QueryOrder::clear_end_time() {
  if (end_time_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    end_time_->clear();
  }
  clear_has_end_time();
}
inline const ::std::string& S2SSystem_QueryOrder::end_time() const {
  // @@protoc_insertion_point(field_get:protocol.S2SSystem.QueryOrder.end_time)
  return *end_time_;
}
inline void S2SSystem_QueryOrder::set_end_time(const ::std::string& value) {
  set_has_end_time();
  if (end_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    end_time_ = new ::std::string;
  }
  end_time_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.S2SSystem.QueryOrder.end_time)
}
inline void S2SSystem_QueryOrder::set_end_time(const char* value) {
  set_has_end_time();
  if (end_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    end_time_ = new ::std::string;
  }
  end_time_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.S2SSystem.QueryOrder.end_time)
}
inline void S2SSystem_QueryOrder::set_end_time(const char* value, size_t size) {
  set_has_end_time();
  if (end_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    end_time_ = new ::std::string;
  }
  end_time_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.S2SSystem.QueryOrder.end_time)
}
inline ::std::string* S2SSystem_QueryOrder::mutable_end_time() {
  set_has_end_time();
  if (end_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    end_time_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.S2SSystem.QueryOrder.end_time)
  return end_time_;
}
inline ::std::string* S2SSystem_QueryOrder::release_end_time() {
  clear_has_end_time();
  if (end_time_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = end_time_;
    end_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void S2SSystem_QueryOrder::set_allocated_end_time(::std::string* end_time) {
  if (end_time_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete end_time_;
  }
  if (end_time) {
    set_has_end_time();
    end_time_ = end_time;
  } else {
    clear_has_end_time();
    end_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.S2SSystem.QueryOrder.end_time)
}

// -------------------------------------------------------------------

// S2SSystem


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocol_2eproto__INCLUDED