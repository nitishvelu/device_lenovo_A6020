/*
 * Copyright (C) 2015 The CyanogenMod Project
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
#include <limits.h>
void RIL_register_socket(void *Init, int socketType, int argc, char **argv)  {
}

/* status_t Parcel::writeString16 */
#if ( __WORDSIZE == 64 )
int _ZN7android6Parcel13writeString16EPKDsm(void *addr, unsigned int size);
int _ZN7android6Parcel13writeString16EPKtm(void *addr, unsigned int size) {
    return _ZN7android6Parcel13writeString16EPKDsm(addr, size);
}
#else
int _ZN7android6Parcel13writeString16EPKDsj(void *addr, unsigned int size);
int _ZN7android6Parcel13writeString16EPKtj(void *addr, unsigned int size) {
    return _ZN7android6Parcel13writeString16EPKDsj(addr, size);
}
#endif
