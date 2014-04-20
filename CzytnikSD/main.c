#include "usbd_msc_core.h"
#include "usbd_usr.h"
#include "usbd_desc.h"
#include "usb_conf.h"


/*PC8 -> D0
PC9 -> D1
PC10 -> D2
PC11 -> D3
PC12 -> CLK
PD2-> CMD */
int zmienna;
USB_OTG_CORE_HANDLE     USB_OTG_dev;

int main(void)
{

	 USBD_Init(&USB_OTG_dev,
			  	USB_OTG_FS_CORE_ID,
	            &USR_desc,
	            &USBD_MSC_cb,
	            &USR_cb);
    while(1)
    {
    }
}
