/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2025 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "env_validate.h"

#define BOARD_INFO_NAME "Pi Pico DIY"
#define DEFAULT_MACHINE_NAME "DIY Printer"

#ifndef MARLIN_EEPROM_SIZE
  #define MARLIN_EEPROM_SIZE             0x1000U  // 4K
  #define FLASH_EEPROM_EMULATION
#endif

//
// Limit Switches
//
#define X_STOP_PIN                             3  // GP3
#define Y_STOP_PIN                             4  // GP4
#define Z_STOP_PIN                             5  // GP5

//
// Steppers
// Driver EN pins are physically wired to GND (drivers always enabled).
// Marlin requires an enable pin to exist, so a spare, UNCONNECTED GPIO (GP22)
// is used as a dummy shared enable pin. Leave GP22 unwired.
//
#define X_STEP_PIN                            17  // GP17
#define X_DIR_PIN                             16  // GP16
#define X_ENABLE_PIN                          22  // GP22 (dummy, not connected)

#define Y_STEP_PIN                            18  // GP18
#define Y_DIR_PIN                             19  // GP19
#define Y_ENABLE_PIN                X_ENABLE_PIN

#define Z_STEP_PIN                            20  // GP20
#define Z_DIR_PIN                             21  // GP21
#define Z_ENABLE_PIN                X_ENABLE_PIN

#define E0_STEP_PIN                           15  // GP15
#define E0_DIR_PIN                            14  // GP14
#define E0_ENABLE_PIN               X_ENABLE_PIN

//
// Heaters / Fans
//
#define HEATER_0_PIN                           6  // GP6 - MOSFET gate (hotend)
#define HEATER_BED_PIN                        -1  // No heated bed

//
// Temperature Sensors
//
#define TEMP_0_PIN                            A0  // GP26 - Analog Input
#define TEMP_BED_PIN                          -1  // No heated bed

//
// Misc. Functions
//
#define LED_PIN                               25  // GP25 - on-board LED