/*
 * Raspberry Pi GPIO utility
 *
 * Copyright (C) 2014 Tetsuya Kimata <kimata@green-rabbit.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2.
 *
 * original: http://www.myu.ac.jp/~xkozima/lab/resource/raspberry/IOKit/raspGPIO.h
 */

#ifndef SC2004C_CTRL_H
#define SC2004C_CTRL_H

#include <stdint.h>

void sc2004c_init();
void sc2004c_print(const char *str);
void sc2004c_set_line(uint8_t line);
void sc2004c_set_pos(uint8_t line, uint8_t offset);

#endif

// Local Variables:
// mode: c
// c-basic-offset: 4
// tab-width: 4
// indent-tabs-mode: nil
// End:
