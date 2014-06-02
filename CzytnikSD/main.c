#include "usbd_msc_core.h"
#include "usbd_usr.h"
#include "usbd_desc.h"
#include "usb_conf.h"


/*
 * WYKORZYSTYWANE PINY:
 *
 * PC8	->	D0
 * PC9	->	D1
 * PC10	->	D2
 * PC11	->	D3
 * PC12	->	CLK
 * PD2	->	CMD
 * PH1	->	CD
 *
 */

USB_OTG_CORE_HANDLE     USB_OTG_dev;

void Leds_Init(void);


int main(void)
{
	 SystemInit();
	 Leds_Init();


	 USBD_Init(&USB_OTG_dev,
			  	USB_OTG_FS_CORE_ID,
	            &USR_desc,
	            &USBD_MSC_cb,
	            &USR_cb);

    while(1)
    {

    }
}


void Leds_Init(void)
{
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);

	GPIO_InitTypeDef  GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13| GPIO_Pin_14| GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOD, &GPIO_InitStructure);
}
