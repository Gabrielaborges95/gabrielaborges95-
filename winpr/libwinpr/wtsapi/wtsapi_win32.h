/**
 * WinPR: Windows Portable Runtime
 * Windows Terminal Services API
 *
 * Copyright 2013-2014 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WINPR_WTSAPI_WIN32_PRIVATE_H
#define WINPR_WTSAPI_WIN32_PRIVATE_H

#include <winpr/wtsapi.h>

BOOL Win32_InitializeWinSta(PWtsApiFunctionTable pWtsApi);

#endif /* WINPR_WTSAPI_WIN32_PRIVATE_H */
