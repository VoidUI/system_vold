/*
 * Copyright (C) 2008 The Android Open Source Project
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

#ifndef _PROCESS_H
#define _PROCESS_H

namespace android {
namespace vold {

int KillProcessesWithOpenFiles(const std::string& path, int signal, bool killFuseDaemon = true);
int KillProcessesWithTmpfsMounts(const std::string& path, int signal);

}  // namespace vold
}  // namespace android

#endif
