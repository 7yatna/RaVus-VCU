/*
 * This file is part of the ZombieVeter project.
 *
 * Copyright (C) 2020 Johannes Huebner <dev@johanneshuebner.com>
 *               2021-2022 Damien Maguire <info@evbmw.com>
 * Yes I'm really writing software now........run.....run away.......
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

#include "spiadc.h"
#include "utils.h"


void SpiADC::Read6Channels() 
{
	
	uint16_t Raw[6];
	uint16_t Val[6];
	
	DigIo::ADC_CS.Set();
	for (volatile int i = 0; i < 3; i++)
    {
        __asm__("nop");
    }
	
	DigIo::ADC_CS.Clear();
	
	for (int i = 0; i < 6; i++) 
	{	
		Raw[i] = spi_xfer(SPI3, 0x0000);
		Val[i] = Raw[i] & 0x3FFF;
    }
	
	Param::SetInt(Param::CH1, Val[0]);
	Param::SetInt(Param::CH2, Val[1]);
	Param::SetInt(Param::CH3, Val[2]);
	Param::SetInt(Param::CH4, Val[3]);
	Param::SetInt(Param::CH5, Val[4]);
	Param::SetInt(Param::CH6, Val[5]);
}
