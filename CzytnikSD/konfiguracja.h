#ifndef KONFIGURACJA_H
#define KONFIGURACJA_H

#include "stm32f4xx.h"
#include "include.h"

void SD_LowLevel_DeInit(void);
void SD_LowLevel_Init(void);
void SD_LowLevel_DMA_TxConfig(uint32_t*, uint32_t);
void SD_LowLevel_DMA_RxConfig(uint32_t*, uint32_t);

#endif
