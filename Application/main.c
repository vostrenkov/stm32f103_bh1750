
#include "defines.h"

RCC_ClocksTypeDef RCC_Clock;

float lux;

int main(void)
{
	
	RCC_GetClocksFreq(&RCC_Clock);	
	
	BH1750_Init();
	
	for(;;)
	{
		lux = BH1750_ReadLux();
		
		// delay
		for(int i = 0; i< 1000000; i++);
	}
}

