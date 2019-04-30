/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */

namespace hellogoodbye {

template <class Writer>
void HelloRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, shardId());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void HelloRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
  if (!v.visitField(2, "shardId", this->shardId())) {
    return;
  }
}

template <class V>
void HelloRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
  if (!v.visitField(2, "shardId", this->shardId())) {
    return;
  }
}

template <class Writer>
void HelloReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void HelloReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
  if (!v.visitField(2, "message", this->message())) {
    return;
  }
}

template <class V>
void HelloReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
  if (!v.visitField(2, "message", this->message())) {
    return;
  }
}

template <class Writer>
void GoodbyeRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, shardId());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void GoodbyeRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
  if (!v.visitField(2, "shardId", this->shardId())) {
    return;
  }
}

template <class V>
void GoodbyeRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
  if (!v.visitField(2, "shardId", this->shardId())) {
    return;
  }
}

template <class Writer>
void GoodbyeReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void GoodbyeReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
  if (!v.visitField(2, "message", this->message())) {
    return;
  }
}

template <class V>
void GoodbyeReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
  if (!v.visitField(2, "message", this->message())) {
    return;
  }
}
} // namespace hellogoodbye

namespace apache {
namespace thrift {
template <>
class Cpp2Ops<hellogoodbye::HelloRequest> {
 public:
  typedef hellogoodbye::HelloRequest Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->readNoXfer(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<hellogoodbye::HelloReply> {
 public:
  typedef hellogoodbye::HelloReply Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->readNoXfer(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<hellogoodbye::GoodbyeRequest> {
 public:
  typedef hellogoodbye::GoodbyeRequest Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->readNoXfer(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};

template <>
class Cpp2Ops<hellogoodbye::GoodbyeReply> {
 public:
  typedef hellogoodbye::GoodbyeReply Type;
  static constexpr protocol::TType thriftType() {
    return protocol::T_STRUCT;
  }
  static void clear(Type* value) {
    value->__clear();
  }
  template <class Protocol>
  static uint32_t write(Protocol* prot, const Type* value) {
    return value->write(prot);
  }
  template <class Protocol>
  static void read(Protocol* prot, Type* value) {
    value->readNoXfer(prot);
  }
  template <class Protocol>
  static uint32_t serializedSize(Protocol* prot, const Type* value) {
    return value->serializedSize(prot);
  }
  template <class Protocol>
  static uint32_t serializedSizeZC(Protocol* prot, const Type* value) {
    return value->serializedSizeZC(prot);
  }
};
} // namespace thrift
} // namespace apache
