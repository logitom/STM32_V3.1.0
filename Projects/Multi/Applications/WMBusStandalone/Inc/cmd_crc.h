/**
 * @file    crc.h
 * @author  Lyle Bainbridge
 *
 * @section LICENSE
 *
 * COPYRIGHT 2014 STMicroelectronics
 *
 * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *        http://www.st.com/software_license_agreement_liberty_v2
 *
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @section DESCRIPTION
 *
 * Cyclic redundancy check functions.
 */

#ifndef __CMD_CRC_H__
#define __CMD_CRC_H__

/*******************************************************************************
 * Include Files
 */
#include <stdint.h>

/*******************************************************************************
 * Functions
 */
uint16_t crc16(const void* p_buffer, uint32_t length);

#endif // __CMD_CRC_H__
