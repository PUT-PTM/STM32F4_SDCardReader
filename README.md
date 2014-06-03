STM32F4_SDCardReader
=================

Projekt czytnika kart microSD. 
Projekt ten oparty jest o płytkę STM32F4Discovery. Wykorzystuje zewnętrzny czytnik kart podpięty pod port SDIO. Transfer danych odbywa się przy wykorzystaniu DMA. 
USB pracuje w najwyższym możliwym standardzie dla naszego STM32F4DISCOVERY bez zewnętrzych urządzeń czyli w Full Speed.
Po podłączeniu mikrokontrolera przez port USB, czytnik kart traktowany jest jako urządzenie SCSI co umożliwia odczytanie czytnika przez system operacyjny bez implementowania obsługi FAT. Mikrokontroler za pomocą funkcji SCSI_ProcessCmd komunikuje się z komputerem przesyłając informacje o samej karcie, a także o zawartości danych na niej.
Operacja zapisu sygnalizowana jest przez migotanie diody czerwonej, natomiast odczytu zielonej.


Przepustowość
----------------------

Początkowo maksymalną prędkość jaką uzyskaliśmy było niecałe 400B/s korzystając z DMA i SDIO. Ostatecznie przepustowość prezentuje się następująco:
  - Zapis 0,77 MB/s
  - Odczyt 0,92 MB/s

W teorii można byłoby wykorzystać tryb High Speed, lecz wymagany do tego jest zewnętrzny PHY, który umożliwiłby obsługę znacznie wyższej prędkości.

Środowisko
---------------------------------------

Projekt został stworzony w środowisku CoIDE.

Możliwe przyszłe zmiany
-------------------

Wykorzystanie zewnętrznęgo PHY w celu zmiany standardu USB na High Speed

