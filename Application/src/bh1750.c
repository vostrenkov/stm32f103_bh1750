
#include "bh1750.h"


void BH1750_Init (void)
{
	
	I2C1_config();
	I2C1_write(BH1750_ADDR, 0xFF, BH1750_POWER_ON);
	
}

float BH1750_ReadLux (void)
{
	uint8_t tmp8[2];
	float ret;
	
	I2C1_read_buf(BH1750_ADDR,BH1750_ONE_H_MODE, tmp8, 2);
	
	ret = (float)(tmp8[0]<<8 | tmp8[1])/1.2;
	 
	return ret;
}



