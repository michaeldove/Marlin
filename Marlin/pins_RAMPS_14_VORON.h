/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 pin assignments
 *
 *  RAMPS_14_VORON (VORON pin config for RAMPs 1.4)
 */

// Include the base configuration for RAMPs 1.4
#include "pins_RAMPS.h"

#define CONTROLLER_FAN_PIN  4 // Changed to -1 since hooked to always on.
 							 // LED strip can be attached to the same output. This way LEDs are only on during printing, and shortly afteR
//#define USE_CONTROLLER_FAN true

// Fan Expansion board pins
#define E0_AUTO_FAN_PIN 6 // Servo pin 6 for E3D Fan
#define E1_AUTO_FAN_PIN 6 // Servo pin 6 for E3D Fan (same pin for both extruders since it's the same fan)

#define FAN_PIN            		5 // Using the pin for the controller fan since controller fan is always on.

// Extruders
#define HEATER_0_PIN     10   // D10 on RAMPs. Extruder 1
#define HEATER_1_PIN     9    // D9 on RAMPs.  Extruder 2

#define TEMP_0_PIN       13   // T0 on RAMPs
#define TEMP_1_PIN       15   // T2 on RAMPs

// Bed
#define HEATER_BED_PIN   11  // Servo pin 11 to drive the SSR
#define TEMP_BED_PIN     14   // T1 on RAMPs

// LCD
#define BEEPER_PIN 		 -1   // Disable Beeper Pin

#define CASE_LIGHT_PIN 1

// Software SPI
//#define TMC_SW_MOSI       63
//#define TMC_SW_MISO       59
//#define TMC_SW_SCK        40

#define X_CS_PIN	  44
#define Y_CS_PIN	  64
