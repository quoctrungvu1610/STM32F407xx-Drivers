/*
 * stm32f407xx_rcc_driver.h
 *
 *  Created on: Jul 11, 2024
 *      Author: ADMIN
 */

#ifndef INC_STM32F407XX_RCC_DRIVER_H_
#define INC_STM32F407XX_RCC_DRIVER_H_

#include "stm32f407xx.h"

uint32_t RCC_GetPCLK1Value(void);
uint32_t RCC_GetPCLK2Value(void);

#endif /* INC_STM32F407XX_RCC_DRIVER_H_ */