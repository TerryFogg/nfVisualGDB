//
// Copyright (c) 2017 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//

//////////////////////////////////////////////////////////////////////////////
// This file was automatically generated by a tool.                         //
// Any changes you make here will be overwritten when it's generated again. //
//////////////////////////////////////////////////////////////////////////////

#ifndef _TARGET_COMMON_H_
#define _TARGET_COMMON_H_

#include <target_os.h>

/////////////////////////////////////////////////////////////////////////////////////////
// The following addresses and sizes should be filled in according to the SoC data-sheet
// they also must be coherent with what's in the linker file for nanoBooter and nanoCLR

// RAM base address 
#define RAM1_MEMORY_StartAddress        ((uint32_t)0xC0000000)
// RAM size 
#define RAM1_MEMORY_Size                ((uint32_t)0x01000000)

// FLASH base address
#define FLASH1_MEMORY_StartAddress      ((uint32_t)0x08000000)
// FLASH size
#define FLASH1_MEMORY_Size              ((uint32_t)0x00200000)

/////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////
#define TARGETNAMESTRING "ST_STM32F769I_DISCOVERY"
#define PLATFORMNAMESTRING "STM32F7"
//////////////////////////////////////////////

/////////////////////////////////////
#define PLATFORM_HAS_RNG       TRUE
/////////////////////////////////////

/////////////////////////////////////
//#define EVENTS_HEART_BEAT       palToggleLine(LINE_LED2_GREEN)
/////////////////////////////////////

#endif /* _TARGET_COMMON_H_ */
