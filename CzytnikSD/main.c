#include "usbd_msc_core.h"
#include "usbd_usr.h"
#include "usbd_desc.h"
#include "usb_conf.h"

#ifdef USB_OTG_HS_INTERNAL_DMA_ENABLED
  #if defined ( __ICCARM__ ) /*!< IAR Compiler */
    #pragma data_alignment=4
  #endif
#endif /* USB_OTG_HS_INTERNAL_DMA_ENABLED */

__ALIGN_BEGIN USB_OTG_CORE_HANDLE     USB_OTG_dev __ALIGN_END ;

int main(void)
{

	  USBD_Init(&USB_OTG_dev,
	#ifdef USE_USB_OTG_HS
	            USB_OTG_HS_CORE_ID,
	#else
	            USB_OTG_FS_CORE_ID,
	#endif
	            &USR_desc,
	            &USBD_MSC_cb,
	            &USR_cb);
    while(1)
    {
    }
}
