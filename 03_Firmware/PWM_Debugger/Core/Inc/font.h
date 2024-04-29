/*
 * font.h
 *
 *  Created on: Apr 14, 2024
 *      Author: linggan
 */

#include "stdint.h"
#include "string.h"

#ifndef INC_FONT_H_
#define INC_FONT_H_


extern const unsigned char ascii_12x6[][12];
extern const unsigned char ascii_16x8[][16];
extern const unsigned char ascii_24x12[][48];
extern const unsigned char ascii_32x16[][64];


typedef struct
{
	unsigned char Index[2];
	unsigned char Msk[24];
}typFNT_GB12;
extern const typFNT_GB12 tfont12[];
extern font12_count;

typedef struct
{
	unsigned char Index[2];
	unsigned char Msk[32];
}typFNT_GB16;
extern const typFNT_GB16 tfont16[];
extern font16_count;

typedef struct
{
	unsigned char Index[2];
	unsigned char Msk[72];
}typFNT_GB24;
extern const typFNT_GB24 tfont24[];
extern font24_count;

typedef struct
{
	unsigned char Index[2];
	unsigned char Msk[128];
}typFNT_GB32;
extern const typFNT_GB32 tfont32[];
extern font32_count;

#endif /* INC_FONT_H_ */
