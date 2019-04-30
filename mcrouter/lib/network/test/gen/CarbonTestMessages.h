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
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>
#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/carbon/Variant.h>

namespace facebook {
namespace memcache {
namespace test {

class ManyFields {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  ManyFields() = default;
  ManyFields(const ManyFields&) = default;
  ManyFields& operator=(const ManyFields&) = default;
  ManyFields(ManyFields&&) = default;
  ManyFields& operator=(ManyFields&&) = default;

  const folly::IOBuf& buf1() const {
    return buf1_;
  }
  folly::IOBuf& buf1() {
    return buf1_;
  }
  const folly::IOBuf& buf2() const {
    return buf2_;
  }
  folly::IOBuf& buf2() {
    return buf2_;
  }
  const folly::IOBuf& buf3() const {
    return buf3_;
  }
  folly::IOBuf& buf3() {
    return buf3_;
  }
  const folly::IOBuf& buf4() const {
    return buf4_;
  }
  folly::IOBuf& buf4() {
    return buf4_;
  }
  const folly::IOBuf& buf5() const {
    return buf5_;
  }
  folly::IOBuf& buf5() {
    return buf5_;
  }
  const folly::IOBuf& buf6() const {
    return buf6_;
  }
  folly::IOBuf& buf6() {
    return buf6_;
  }
  const folly::IOBuf& buf7() const {
    return buf7_;
  }
  folly::IOBuf& buf7() {
    return buf7_;
  }
  const folly::IOBuf& buf8() const {
    return buf8_;
  }
  folly::IOBuf& buf8() {
    return buf8_;
  }
  const folly::IOBuf& buf9() const {
    return buf9_;
  }
  folly::IOBuf& buf9() {
    return buf9_;
  }
  const folly::IOBuf& buf10() const {
    return buf10_;
  }
  folly::IOBuf& buf10() {
    return buf10_;
  }
  const folly::IOBuf& buf11() const {
    return buf11_;
  }
  folly::IOBuf& buf11() {
    return buf11_;
  }
  const folly::IOBuf& buf12() const {
    return buf12_;
  }
  folly::IOBuf& buf12() {
    return buf12_;
  }
  const folly::IOBuf& buf13() const {
    return buf13_;
  }
  folly::IOBuf& buf13() {
    return buf13_;
  }
  const folly::IOBuf& buf14() const {
    return buf14_;
  }
  folly::IOBuf& buf14() {
    return buf14_;
  }
  const folly::IOBuf& buf15() const {
    return buf15_;
  }
  folly::IOBuf& buf15() {
    return buf15_;
  }
  const folly::IOBuf& buf16() const {
    return buf16_;
  }
  folly::IOBuf& buf16() {
    return buf16_;
  }
  const folly::IOBuf& buf17() const {
    return buf17_;
  }
  folly::IOBuf& buf17() {
    return buf17_;
  }
  const folly::IOBuf& buf18() const {
    return buf18_;
  }
  folly::IOBuf& buf18() {
    return buf18_;
  }
  const folly::IOBuf& buf19() const {
    return buf19_;
  }
  folly::IOBuf& buf19() {
    return buf19_;
  }
  const folly::IOBuf& buf20() const {
    return buf20_;
  }
  folly::IOBuf& buf20() {
    return buf20_;
  }
  const folly::IOBuf& buf21() const {
    return buf21_;
  }
  folly::IOBuf& buf21() {
    return buf21_;
  }
  const folly::IOBuf& buf22() const {
    return buf22_;
  }
  folly::IOBuf& buf22() {
    return buf22_;
  }
  const folly::IOBuf& buf23() const {
    return buf23_;
  }
  folly::IOBuf& buf23() {
    return buf23_;
  }
  const folly::IOBuf& buf24() const {
    return buf24_;
  }
  folly::IOBuf& buf24() {
    return buf24_;
  }
  const folly::IOBuf& buf25() const {
    return buf25_;
  }
  folly::IOBuf& buf25() {
    return buf25_;
  }
  const folly::IOBuf& buf26() const {
    return buf26_;
  }
  folly::IOBuf& buf26() {
    return buf26_;
  }
  const folly::IOBuf& buf27() const {
    return buf27_;
  }
  folly::IOBuf& buf27() {
    return buf27_;
  }
  const folly::IOBuf& buf28() const {
    return buf28_;
  }
  folly::IOBuf& buf28() {
    return buf28_;
  }
  const folly::IOBuf& buf29() const {
    return buf29_;
  }
  folly::IOBuf& buf29() {
    return buf29_;
  }
  const folly::IOBuf& buf30() const {
    return buf30_;
  }
  folly::IOBuf& buf30() {
    return buf30_;
  }
  const folly::IOBuf& buf31() const {
    return buf31_;
  }
  folly::IOBuf& buf31() {
    return buf31_;
  }
  const folly::IOBuf& buf32() const {
    return buf32_;
  }
  folly::IOBuf& buf32() {
    return buf32_;
  }
  const folly::IOBuf& buf33() const {
    return buf33_;
  }
  folly::IOBuf& buf33() {
    return buf33_;
  }
  const folly::IOBuf& buf34() const {
    return buf34_;
  }
  folly::IOBuf& buf34() {
    return buf34_;
  }
  const folly::IOBuf& buf35() const {
    return buf35_;
  }
  folly::IOBuf& buf35() {
    return buf35_;
  }
  const folly::IOBuf& buf36() const {
    return buf36_;
  }
  folly::IOBuf& buf36() {
    return buf36_;
  }
  const folly::IOBuf& buf37() const {
    return buf37_;
  }
  folly::IOBuf& buf37() {
    return buf37_;
  }
  const folly::IOBuf& buf38() const {
    return buf38_;
  }
  folly::IOBuf& buf38() {
    return buf38_;
  }
  const folly::IOBuf& buf39() const {
    return buf39_;
  }
  folly::IOBuf& buf39() {
    return buf39_;
  }
  const folly::IOBuf& buf40() const {
    return buf40_;
  }
  folly::IOBuf& buf40() {
    return buf40_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  template <class Writer>
  void serialize(Writer&& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  folly::IOBuf buf1_;
  folly::IOBuf buf2_;
  folly::IOBuf buf3_;
  folly::IOBuf buf4_;
  folly::IOBuf buf5_;
  folly::IOBuf buf6_;
  folly::IOBuf buf7_;
  folly::IOBuf buf8_;
  folly::IOBuf buf9_;
  folly::IOBuf buf10_;
  folly::IOBuf buf11_;
  folly::IOBuf buf12_;
  folly::IOBuf buf13_;
  folly::IOBuf buf14_;
  folly::IOBuf buf15_;
  folly::IOBuf buf16_;
  folly::IOBuf buf17_;
  folly::IOBuf buf18_;
  folly::IOBuf buf19_;
  folly::IOBuf buf20_;
  folly::IOBuf buf21_;
  folly::IOBuf buf22_;
  folly::IOBuf buf23_;
  folly::IOBuf buf24_;
  folly::IOBuf buf25_;
  folly::IOBuf buf26_;
  folly::IOBuf buf27_;
  folly::IOBuf buf28_;
  folly::IOBuf buf29_;
  folly::IOBuf buf30_;
  folly::IOBuf buf31_;
  folly::IOBuf buf32_;
  folly::IOBuf buf33_;
  folly::IOBuf buf34_;
  folly::IOBuf buf35_;
  folly::IOBuf buf36_;
  folly::IOBuf buf37_;
  folly::IOBuf buf38_;
  folly::IOBuf buf39_;
  folly::IOBuf buf40_;
};
} // namespace test
} // namespace memcache
} // namespace facebook

#include "CarbonTestMessages-inl.h"
