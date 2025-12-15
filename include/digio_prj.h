/*
 * This file is part of the RaVus-VCU project.
 *
 * Copyright (C) 2011-2019 Johannes Huebner <dev@johanneshuebner.com>
 * Copyright (C) 2019-2022 Damien Maguire <info@evbmw.com>
 * Copyright (C) 2026 Karim Omara <info@ravusev.com>
 *
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
 */

#ifndef PinMode_PRJ_H_INCLUDED
#define PinMode_PRJ_H_INCLUDED

#include "hwdefs.h"

#define DIG_IO_LIST \
	DIG_IO_ENTRY(IGN_in,  	GPIOD, GPIO6,  PinMode::INPUT_FLT)\
	DIG_IO_ENTRY(Start_in,  GPIOD, GPIO7,  PinMode::INPUT_FLT)\
    DIG_IO_ENTRY(Brake_in,  GPIOA, GPIO15, PinMode::INPUT_FLT)\
	DIG_IO_ENTRY(FOR_in,    GPIOB, GPIO4,  PinMode::INPUT_FLT)\
    DIG_IO_ENTRY(REV_in,    GPIOB, GPIO3,  PinMode::INPUT_FLT)\
    DIG_IO_ENTRY(GP1_in, 	GPIOD, GPIO13, PinMode::INPUT_FLT)\
    DIG_IO_ENTRY(GP2_in, 	GPIOD, GPIO14, PinMode::INPUT_FLT)\
	DIG_IO_ENTRY(GP3_in, 	GPIOD, GPIO15, PinMode::INPUT_FLT)\
	DIG_IO_ENTRY(GP4_in, 	GPIOE, GPIO0,  PinMode::INPUT_FLT)\
	DIG_IO_ENTRY(GP5_in, 	GPIOE, GPIO1,  PinMode::INPUT_FLT)\
    DIG_IO_ENTRY(ACT_LED,   GPIOE, GPIO2,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(VIN_PWR,   GPIOE, GPIO3,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(POS_CON,   GPIOC, GPIO7,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(PRE_CON,   GPIOC, GPIO6,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(NEG_CON,   GPIOC, GPIO5,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(GP1_PWR,   GPIOD, GPIO0,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(GP2_PWR,   GPIOD, GPIO1,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(GP3_PWR,   GPIOE, GPIO5,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(GP4_PWR,   GPIOD, GPIO5,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(GP5_PWR,   GPIOD, GPIO4,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(INV_PWR,   GPIOA, GPIO8,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(CHRGR_PWR, GPIOE, GPIO7,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(CPMP_PWR,  GPIOD, GPIO8,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(BPMP_PWR,  GPIOE, GPIO4,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(HPMP_PWR,  GPIOB, GPIO7,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(LSPD_PWR,  GPIOD, GPIO2,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(HSPD_PWR,  GPIOD, GPIO3,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(AC_PWR,    GPIOE, GPIO14, PinMode::OUTPUT)   \
	DIG_IO_ENTRY(WiFi_ON,   GPIOC, GPIO13, PinMode::OUTPUT)   \
	DIG_IO_ENTRY(SP_PWR,    GPIOD, GPIO12, PinMode::OUTPUT)   \
	DIG_IO_ENTRY(SL1_PWR,   GPIOC, GPIO9,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(SL2_PWR,   GPIOC, GPIO8,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(POT1_CS,   GPIOE, GPIO10, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(POT2_CS,   GPIOE, GPIO11, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(POT3_CS,   GPIOE, GPIO12, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(POT4_CS,   GPIOE, GPIO13, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(ADC_CS,    GPIOD, GPIO10, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(BAT_EN,  	GPIOD, GPIO9,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(LIN_NSLP,  GPIOD, GPIO11, PinMode::OUTPUT)   \
	DIG_IO_ENTRY(USART2_REQ,GPIOE, GPIO6,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(Main_PWM1, GPIOA, GPIO6,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(Main_PWM2, GPIOA, GPIO7,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(Main_PWM3, GPIOB, GPIO0,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(Main_PWM4, GPIOB, GPIO1,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(OILPMP_PWM,GPIOE, GPIO9,  PinMode::OUTPUT)   \
	DIG_IO_ENTRY(dummypin,  GPIOC, GPIO15, PinMode::INPUT_FLT)\

//dummypin is used by IOMatrix class for unused functions. Must be set to a pin that has no effect

#endif // PinMode_PRJ_H_INCLUDED
