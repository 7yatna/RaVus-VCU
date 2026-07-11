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

#include "digipot.h"
#include "utils.h"

void DigiPot::SetPot1AStep()
	{	
		int wip1A = 0;
		wip1A = utils::change((Param::GetInt(Param::POT1A)), 0, 255, 0, 100);
		DigIo::POT1_CS.Clear();
		spi_xfer(SPI3, 0);
		spi_xfer(SPI3, (Param::GetInt(Param::POT1A)));
		DigIo::POT1_CS.Set();
		DigIo::POT1_CS.Clear();
		spi_xfer(SPI3, 1);
		spi_xfer(SPI3, (Param::GetInt(Param::POT1A)));
		DigIo::POT1_CS.Set();
		Param::SetInt(Param::DigiPot1A, wip1A);	
	}

void DigiPot::SetPot1BStep()
	{	
		int wip1B = 0;
		wip1B = utils::change((Param::GetInt(Param::POT1B)), 0, 255, 0, 100);
		DigIo::POT1_CS.Clear();
		spi_xfer(SPI3, 2);
		spi_xfer(SPI3, (Param::GetInt(Param::POT1B)));
		DigIo::POT1_CS.Set();
		DigIo::POT1_CS.Clear();
		spi_xfer(SPI3, 3);
		spi_xfer(SPI3, (Param::GetInt(Param::POT1B)));
		DigIo::POT1_CS.Set();
		Param::SetInt(Param::DigiPot1B, wip1B);	
	}

void DigiPot::SetPot2AStep()
	{	
		int wip2A = 0;
		wip2A = utils::change((Param::GetInt(Param::POT2A)), 0, 255, 0, 100);
		DigIo::POT2_CS.Clear();
		spi_xfer(SPI3, 0);
		spi_xfer(SPI3, (Param::GetInt(Param::POT2A)));
		DigIo::POT2_CS.Set();
		DigIo::POT2_CS.Clear();
		spi_xfer(SPI3, 1);
		spi_xfer(SPI3, (Param::GetInt(Param::POT2A)));
		DigIo::POT2_CS.Set();
		Param::SetInt(Param::DigiPot2A, wip2A);	
	}

void DigiPot::SetPot2BStep()
	{	
		int wip2B = 0;
		wip2B = utils::change((Param::GetInt(Param::POT2B)), 0, 255, 0, 100);
		DigIo::POT2_CS.Clear();
		spi_xfer(SPI3, 2);
		spi_xfer(SPI3, (Param::GetInt(Param::POT2B)));
		DigIo::POT2_CS.Set();
		DigIo::POT2_CS.Clear();
		spi_xfer(SPI3, 3);
		spi_xfer(SPI3, (Param::GetInt(Param::POT2B)));
		DigIo::POT2_CS.Set();
		Param::SetInt(Param::DigiPot2B, wip2B);	
	}
	
void DigiPot::SetPot3AStep()
	{	
		int wip3A = 0;
		wip3A = utils::change((Param::GetInt(Param::POT3A)), 0, 255, 0, 100);
		DigIo::POT3_CS.Clear();
		spi_xfer(SPI3, 0);
		spi_xfer(SPI3, (Param::GetInt(Param::POT3A)));
		DigIo::POT3_CS.Set();
		DigIo::POT3_CS.Clear();
		spi_xfer(SPI3, 1);
		spi_xfer(SPI3, (Param::GetInt(Param::POT3A)));
		DigIo::POT3_CS.Set();
		Param::SetInt(Param::DigiPot3A, wip3A);	
	}

void DigiPot::SetPot3BStep()
	{	
		int wip3B = 0;
		wip3B = utils::change((Param::GetInt(Param::POT3B)), 0, 255, 0, 100);
		DigIo::POT3_CS.Clear();
		spi_xfer(SPI3, 2);
		spi_xfer(SPI3, (Param::GetInt(Param::POT3B)));
		DigIo::POT3_CS.Set();
		DigIo::POT3_CS.Clear();
		spi_xfer(SPI3, 3);
		spi_xfer(SPI3, (Param::GetInt(Param::POT3B)));
		DigIo::POT3_CS.Set();
		Param::SetInt(Param::DigiPot3B, wip3B);	
	}

void DigiPot::SetPot4AStep()
	{	
		int wip4A = 0;
		wip4A = utils::change((Param::GetInt(Param::POT4A)), 0, 255, 0, 100);
		DigIo::POT4_CS.Clear();
		spi_xfer(SPI3, 0);
		spi_xfer(SPI3, (Param::GetInt(Param::POT4A)));
		DigIo::POT4_CS.Set();
		DigIo::POT4_CS.Clear();
		spi_xfer(SPI3, 1);
		spi_xfer(SPI3, (Param::GetInt(Param::POT4A)));
		DigIo::POT4_CS.Set();
		Param::SetInt(Param::DigiPot4A, wip4A);	
	}

void DigiPot::SetPot4BStep()
	{	
		int wip4B = 0;
		wip4B = utils::change((Param::GetInt(Param::POT4B)), 0, 255, 0, 100);
		DigIo::POT4_CS.Clear();
		spi_xfer(SPI3, 2);
		spi_xfer(SPI3, (Param::GetInt(Param::POT4B)));
		DigIo::POT4_CS.Set();
		DigIo::POT4_CS.Clear();
		spi_xfer(SPI3, 3);
		spi_xfer(SPI3, (Param::GetInt(Param::POT4B)));
		DigIo::POT4_CS.Set();
		Param::SetInt(Param::DigiPot4B, wip4B);	
	}