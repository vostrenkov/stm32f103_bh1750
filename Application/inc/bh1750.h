#ifndef _BH1750_H
#define _BH1750_H

#include "defines.h"

#define BH1750_ADDR							0x46

#define BH1750_POWER_DOWN				0x00
#define BH1750_POWER_ON					0x01
#define BH1750_RESET						0x07
#define BH1750_CONT_H_MODE			0x10
#define BH1750_CONT_H_MODE2			0x11
#define BH1750_CONT_L_MODE			0x13
#define	BH1750_ONE_H_MODE				0x20
#define BH1750_ONE_H_MODE2			0x21
#define BH1750_ONE_L_MODE				0x23
#define BH1750_CHG_MEAS_TIME_H	0x40
#define BH1750_CHG_MEAS_TIME_L	0x60

#define I2C_TIMEOUT 						100000

void BH1750_Init(void);
float BH1750_ReadLux (void);

#endif
