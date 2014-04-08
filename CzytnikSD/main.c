
#include "main.h"


/*
	CARDDETECT = PC2 (Retargetable)
	CLK = PC12
	CMD = PD2
	D0 = PC8
	D1 = PC9
	D2 = PC10
	D3 = PC11
	VDD = 3V
	VSS = GND

	!! DETECT = PC13
 */

int main(void)
{
	SD_Error Status;
	SystemInit();
	Status = SD_Init();



  }

