/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <folly/Executor.h>

namespace facebook {
namespace ReactABI33_0_0 {

class MainQueueExecutor : public folly::Executor {
 public:
  static MainQueueExecutor &instance();

  void add(folly::Func function) override;
};

} // namespace ReactABI33_0_0
} // namespace facebook
