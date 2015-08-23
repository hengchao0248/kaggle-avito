// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#ifndef PROTOBUF_model_2eproto__INCLUDED
#define PROTOBUF_model_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_model_2eproto();
void protobuf_AssignDesc_model_2eproto();
void protobuf_ShutdownFile_model_2eproto();

class MetaPar;
class FTRLProxiamlPar;
class Instance;
class MetaProb;

// ===================================================================

class MetaPar : public ::google::protobuf::Message {
 public:
  MetaPar();
  virtual ~MetaPar();

  MetaPar(const MetaPar& from);

  inline MetaPar& operator=(const MetaPar& from) {
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
  static const MetaPar& default_instance();

  void Swap(MetaPar* other);

  // implements Message ----------------------------------------------

  MetaPar* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MetaPar& from);
  void MergeFrom(const MetaPar& from);
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

  // required float l1 = 1;
  inline bool has_l1() const;
  inline void clear_l1();
  static const int kL1FieldNumber = 1;
  inline float l1() const;
  inline void set_l1(float value);

  // required float l2 = 2;
  inline bool has_l2() const;
  inline void clear_l2();
  static const int kL2FieldNumber = 2;
  inline float l2() const;
  inline void set_l2(float value);

  // required float alpha = 3;
  inline bool has_alpha() const;
  inline void clear_alpha();
  static const int kAlphaFieldNumber = 3;
  inline float alpha() const;
  inline void set_alpha(float value);

  // required float beta = 4;
  inline bool has_beta() const;
  inline void clear_beta();
  static const int kBetaFieldNumber = 4;
  inline float beta() const;
  inline void set_beta(float value);

  // required uint32 D = 5;
  inline bool has_d() const;
  inline void clear_d();
  static const int kDFieldNumber = 5;
  inline ::google::protobuf::uint32 d() const;
  inline void set_d(::google::protobuf::uint32 value);

  // required int32 multi_cls = 6;
  inline bool has_multi_cls() const;
  inline void clear_multi_cls();
  static const int kMultiClsFieldNumber = 6;
  inline ::google::protobuf::int32 multi_cls() const;
  inline void set_multi_cls(::google::protobuf::int32 value);

  // repeated uint32 quad = 7 [packed = true];
  inline int quad_size() const;
  inline void clear_quad();
  static const int kQuadFieldNumber = 7;
  inline ::google::protobuf::uint32 quad(int index) const;
  inline void set_quad(int index, ::google::protobuf::uint32 value);
  inline void add_quad(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      quad() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_quad();

  // repeated uint32 cubic = 8 [packed = true];
  inline int cubic_size() const;
  inline void clear_cubic();
  static const int kCubicFieldNumber = 8;
  inline ::google::protobuf::uint32 cubic(int index) const;
  inline void set_cubic(int index, ::google::protobuf::uint32 value);
  inline void add_cubic(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      cubic() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_cubic();

  // @@protoc_insertion_point(class_scope:MetaPar)
 private:
  inline void set_has_l1();
  inline void clear_has_l1();
  inline void set_has_l2();
  inline void clear_has_l2();
  inline void set_has_alpha();
  inline void clear_has_alpha();
  inline void set_has_beta();
  inline void clear_has_beta();
  inline void set_has_d();
  inline void clear_has_d();
  inline void set_has_multi_cls();
  inline void clear_has_multi_cls();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  float l1_;
  float l2_;
  float alpha_;
  float beta_;
  ::google::protobuf::uint32 d_;
  ::google::protobuf::int32 multi_cls_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > quad_;
  mutable int _quad_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > cubic_;
  mutable int _cubic_cached_byte_size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_model_2eproto();
  friend void protobuf_AssignDesc_model_2eproto();
  friend void protobuf_ShutdownFile_model_2eproto();

  void InitAsDefaultInstance();
  static MetaPar* default_instance_;
};
// -------------------------------------------------------------------

class FTRLProxiamlPar : public ::google::protobuf::Message {
 public:
  FTRLProxiamlPar();
  virtual ~FTRLProxiamlPar();

  FTRLProxiamlPar(const FTRLProxiamlPar& from);

  inline FTRLProxiamlPar& operator=(const FTRLProxiamlPar& from) {
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
  static const FTRLProxiamlPar& default_instance();

  void Swap(FTRLProxiamlPar* other);

  // implements Message ----------------------------------------------

  FTRLProxiamlPar* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FTRLProxiamlPar& from);
  void MergeFrom(const FTRLProxiamlPar& from);
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

  // required float z = 1;
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 1;
  inline float z() const;
  inline void set_z(float value);

  // required float n = 2;
  inline bool has_n() const;
  inline void clear_n();
  static const int kNFieldNumber = 2;
  inline float n() const;
  inline void set_n(float value);

  // required uint32 x = 3;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 3;
  inline ::google::protobuf::uint32 x() const;
  inline void set_x(::google::protobuf::uint32 value);

  // required int32 index = 4;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 4;
  inline ::google::protobuf::int32 index() const;
  inline void set_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:FTRLProxiamlPar)
 private:
  inline void set_has_z();
  inline void clear_has_z();
  inline void set_has_n();
  inline void clear_has_n();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_index();
  inline void clear_has_index();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  float z_;
  float n_;
  ::google::protobuf::uint32 x_;
  ::google::protobuf::int32 index_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_model_2eproto();
  friend void protobuf_AssignDesc_model_2eproto();
  friend void protobuf_ShutdownFile_model_2eproto();

  void InitAsDefaultInstance();
  static FTRLProxiamlPar* default_instance_;
};
// -------------------------------------------------------------------

class Instance : public ::google::protobuf::Message {
 public:
  Instance();
  virtual ~Instance();

  Instance(const Instance& from);

  inline Instance& operator=(const Instance& from) {
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
  static const Instance& default_instance();

  void Swap(Instance* other);

  // implements Message ----------------------------------------------

  Instance* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Instance& from);
  void MergeFrom(const Instance& from);
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

  // required float y = 1;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 1;
  inline float y() const;
  inline void set_y(float value);

  // repeated uint32 x = 2 [packed = true];
  inline int x_size() const;
  inline void clear_x();
  static const int kXFieldNumber = 2;
  inline ::google::protobuf::uint32 x(int index) const;
  inline void set_x(int index, ::google::protobuf::uint32 value);
  inline void add_x(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      x() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_x();

  // @@protoc_insertion_point(class_scope:Instance)
 private:
  inline void set_has_y();
  inline void clear_has_y();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > x_;
  mutable int _x_cached_byte_size_;
  float y_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_model_2eproto();
  friend void protobuf_AssignDesc_model_2eproto();
  friend void protobuf_ShutdownFile_model_2eproto();

  void InitAsDefaultInstance();
  static Instance* default_instance_;
};
// -------------------------------------------------------------------

class MetaProb : public ::google::protobuf::Message {
 public:
  MetaProb();
  virtual ~MetaProb();

  MetaProb(const MetaProb& from);

  inline MetaProb& operator=(const MetaProb& from) {
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
  static const MetaProb& default_instance();

  void Swap(MetaProb* other);

  // implements Message ----------------------------------------------

  MetaProb* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MetaProb& from);
  void MergeFrom(const MetaProb& from);
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

  // required uint32 prob_size = 1;
  inline bool has_prob_size() const;
  inline void clear_prob_size();
  static const int kProbSizeFieldNumber = 1;
  inline ::google::protobuf::uint32 prob_size() const;
  inline void set_prob_size(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MetaProb)
 private:
  inline void set_has_prob_size();
  inline void clear_has_prob_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 prob_size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_model_2eproto();
  friend void protobuf_AssignDesc_model_2eproto();
  friend void protobuf_ShutdownFile_model_2eproto();

  void InitAsDefaultInstance();
  static MetaProb* default_instance_;
};
// ===================================================================


// ===================================================================

// MetaPar

// required float l1 = 1;
inline bool MetaPar::has_l1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MetaPar::set_has_l1() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MetaPar::clear_has_l1() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MetaPar::clear_l1() {
  l1_ = 0;
  clear_has_l1();
}
inline float MetaPar::l1() const {
  return l1_;
}
inline void MetaPar::set_l1(float value) {
  set_has_l1();
  l1_ = value;
}

// required float l2 = 2;
inline bool MetaPar::has_l2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MetaPar::set_has_l2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MetaPar::clear_has_l2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MetaPar::clear_l2() {
  l2_ = 0;
  clear_has_l2();
}
inline float MetaPar::l2() const {
  return l2_;
}
inline void MetaPar::set_l2(float value) {
  set_has_l2();
  l2_ = value;
}

// required float alpha = 3;
inline bool MetaPar::has_alpha() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MetaPar::set_has_alpha() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MetaPar::clear_has_alpha() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MetaPar::clear_alpha() {
  alpha_ = 0;
  clear_has_alpha();
}
inline float MetaPar::alpha() const {
  return alpha_;
}
inline void MetaPar::set_alpha(float value) {
  set_has_alpha();
  alpha_ = value;
}

// required float beta = 4;
inline bool MetaPar::has_beta() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MetaPar::set_has_beta() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MetaPar::clear_has_beta() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MetaPar::clear_beta() {
  beta_ = 0;
  clear_has_beta();
}
inline float MetaPar::beta() const {
  return beta_;
}
inline void MetaPar::set_beta(float value) {
  set_has_beta();
  beta_ = value;
}

// required uint32 D = 5;
inline bool MetaPar::has_d() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MetaPar::set_has_d() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MetaPar::clear_has_d() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MetaPar::clear_d() {
  d_ = 0u;
  clear_has_d();
}
inline ::google::protobuf::uint32 MetaPar::d() const {
  return d_;
}
inline void MetaPar::set_d(::google::protobuf::uint32 value) {
  set_has_d();
  d_ = value;
}

// required int32 multi_cls = 6;
inline bool MetaPar::has_multi_cls() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MetaPar::set_has_multi_cls() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MetaPar::clear_has_multi_cls() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MetaPar::clear_multi_cls() {
  multi_cls_ = 0;
  clear_has_multi_cls();
}
inline ::google::protobuf::int32 MetaPar::multi_cls() const {
  return multi_cls_;
}
inline void MetaPar::set_multi_cls(::google::protobuf::int32 value) {
  set_has_multi_cls();
  multi_cls_ = value;
}

// repeated uint32 quad = 7 [packed = true];
inline int MetaPar::quad_size() const {
  return quad_.size();
}
inline void MetaPar::clear_quad() {
  quad_.Clear();
}
inline ::google::protobuf::uint32 MetaPar::quad(int index) const {
  return quad_.Get(index);
}
inline void MetaPar::set_quad(int index, ::google::protobuf::uint32 value) {
  quad_.Set(index, value);
}
inline void MetaPar::add_quad(::google::protobuf::uint32 value) {
  quad_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MetaPar::quad() const {
  return quad_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MetaPar::mutable_quad() {
  return &quad_;
}

// repeated uint32 cubic = 8 [packed = true];
inline int MetaPar::cubic_size() const {
  return cubic_.size();
}
inline void MetaPar::clear_cubic() {
  cubic_.Clear();
}
inline ::google::protobuf::uint32 MetaPar::cubic(int index) const {
  return cubic_.Get(index);
}
inline void MetaPar::set_cubic(int index, ::google::protobuf::uint32 value) {
  cubic_.Set(index, value);
}
inline void MetaPar::add_cubic(::google::protobuf::uint32 value) {
  cubic_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MetaPar::cubic() const {
  return cubic_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MetaPar::mutable_cubic() {
  return &cubic_;
}

// -------------------------------------------------------------------

// FTRLProxiamlPar

// required float z = 1;
inline bool FTRLProxiamlPar::has_z() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FTRLProxiamlPar::set_has_z() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FTRLProxiamlPar::clear_has_z() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FTRLProxiamlPar::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float FTRLProxiamlPar::z() const {
  return z_;
}
inline void FTRLProxiamlPar::set_z(float value) {
  set_has_z();
  z_ = value;
}

// required float n = 2;
inline bool FTRLProxiamlPar::has_n() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FTRLProxiamlPar::set_has_n() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FTRLProxiamlPar::clear_has_n() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FTRLProxiamlPar::clear_n() {
  n_ = 0;
  clear_has_n();
}
inline float FTRLProxiamlPar::n() const {
  return n_;
}
inline void FTRLProxiamlPar::set_n(float value) {
  set_has_n();
  n_ = value;
}

// required uint32 x = 3;
inline bool FTRLProxiamlPar::has_x() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FTRLProxiamlPar::set_has_x() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FTRLProxiamlPar::clear_has_x() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FTRLProxiamlPar::clear_x() {
  x_ = 0u;
  clear_has_x();
}
inline ::google::protobuf::uint32 FTRLProxiamlPar::x() const {
  return x_;
}
inline void FTRLProxiamlPar::set_x(::google::protobuf::uint32 value) {
  set_has_x();
  x_ = value;
}

// required int32 index = 4;
inline bool FTRLProxiamlPar::has_index() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FTRLProxiamlPar::set_has_index() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FTRLProxiamlPar::clear_has_index() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FTRLProxiamlPar::clear_index() {
  index_ = 0;
  clear_has_index();
}
inline ::google::protobuf::int32 FTRLProxiamlPar::index() const {
  return index_;
}
inline void FTRLProxiamlPar::set_index(::google::protobuf::int32 value) {
  set_has_index();
  index_ = value;
}

// -------------------------------------------------------------------

// Instance

// required float y = 1;
inline bool Instance::has_y() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Instance::set_has_y() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Instance::clear_has_y() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Instance::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Instance::y() const {
  return y_;
}
inline void Instance::set_y(float value) {
  set_has_y();
  y_ = value;
}

// repeated uint32 x = 2 [packed = true];
inline int Instance::x_size() const {
  return x_.size();
}
inline void Instance::clear_x() {
  x_.Clear();
}
inline ::google::protobuf::uint32 Instance::x(int index) const {
  return x_.Get(index);
}
inline void Instance::set_x(int index, ::google::protobuf::uint32 value) {
  x_.Set(index, value);
}
inline void Instance::add_x(::google::protobuf::uint32 value) {
  x_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Instance::x() const {
  return x_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Instance::mutable_x() {
  return &x_;
}

// -------------------------------------------------------------------

// MetaProb

// required uint32 prob_size = 1;
inline bool MetaProb::has_prob_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MetaProb::set_has_prob_size() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MetaProb::clear_has_prob_size() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MetaProb::clear_prob_size() {
  prob_size_ = 0u;
  clear_has_prob_size();
}
inline ::google::protobuf::uint32 MetaProb::prob_size() const {
  return prob_size_;
}
inline void MetaProb::set_prob_size(::google::protobuf::uint32 value) {
  set_has_prob_size();
  prob_size_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_model_2eproto__INCLUDED