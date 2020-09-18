/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIRESTORE_CORE_SRC_UTIL_FIREBASE_PLATFORM_LOGGING_NOOP_H_
#define FIRESTORE_CORE_SRC_UTIL_FIREBASE_PLATFORM_LOGGING_NOOP_H_

#include <memory>
#include <string>

#include "Firestore/core/src/util/firebase_platform_logging.h"

namespace firebase {
namespace firestore {
namespace util {

class FirebasePlatformLoggingNoOp : public FirebasePlatformLogging {
 public:
   bool IsLoggingAvailable() const override { return false; }
   std::string GetUserAgent() const override { return ""; }
   std::string GetHeartbeat() const override { return ""; }

   bool IsGmpAppIdAvailable() const override { return false; }
   std::string GetGmpAppId() const override { return ""; }
};

std::unique_ptr<FirebasePlatformLoggingNoOp> CreateNoOpFirebasePlatformLogging();

}  // namespace util
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_SRC_UTIL_FIREBASE_PLATFORM_LOGGING_NOOP_H_