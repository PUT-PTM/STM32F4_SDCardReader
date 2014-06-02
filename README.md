STM32F4_SDCardReader
=================

Projekt czytnika kart microSD. 
Projekt ten oparty jest o płytke STM32F4Discovery. Wykorzystuje zewnętrzny czytnik kart podpięty pod port SDIO. Transfer danych odbywa się przy wykorzystaniu DMA. 
USB pracuje w standardzie Full Speed.
Po podłączeniu mikrokontrolera przez port USB, czytnik kart traktowany jest jako urządzenie SCSI.
Operacja zapisu sygnalizowana jest przez migotanie diody czerwonej, natomiast odcyztu zielonej.


Prędkości
----------------------

This project builds with the [CooCox IDE](http://www.coocox.org/index.html) - A great IDE for embedded ARM development - and the [GNU Tools for Arm](https://launchpad.net/gcc-arm-embedded).  Install the IDE and the GNU Tools, point the IDE to the GNU Tools bin directory, and start working on your ARMs!


Środowisko
---------------------------------------

Projekt został stworzony w środowisku CoIDE.

Możliwe przyszłe zmiany
-------------------

Wykorzystanie zewnetrznęgo PHY w celu zmiany standardu USB na High Speed

