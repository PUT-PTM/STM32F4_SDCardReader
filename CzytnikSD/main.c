#include "include.h"
#include "sdcard.h"


SD_CardInfo kartaSD;
uint8_t cardType = 314;
int cardCap = 314;
int cardBlock = 314;

int main(void)
{
	SystemInit();


	SD_PowerON();
	SD_GetCardInfo(&kartaSD);
	SD_SelectDeselect(kartaSD.RCA << 16);
	SD_EnableWideBusOperation(SDIO_BusWide_4b);

	cardType = kartaSD.CardType;
	cardCap = kartaSD.CardCapacity;
	cardBlock = kartaSD.CardBlockSize;



    while(1)
    {
    }
}
