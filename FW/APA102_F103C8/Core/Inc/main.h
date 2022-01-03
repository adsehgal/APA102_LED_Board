/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

#include "stm32f1xx_ll_adc.h"
#include "stm32f1xx_ll_dma.h"
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_spi.h"
#include "stm32f1xx_ll_usart.h"
#include "stm32f1xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VERSION_Pin LL_GPIO_PIN_14
#define VERSION_GPIO_Port GPIOC
#define N5V_EN_Pin LL_GPIO_PIN_15
#define N5V_EN_GPIO_Port GPIOC
#define I_5V_SNS_Pin LL_GPIO_PIN_0
#define I_5V_SNS_GPIO_Port GPIOA
#define V_5V_SNS_Pin LL_GPIO_PIN_1
#define V_5V_SNS_GPIO_Port GPIOA
#define V_DC_SNS_Pin LL_GPIO_PIN_2
#define V_DC_SNS_GPIO_Port GPIOA
#define SPI1_FLASH_CS_Pin LL_GPIO_PIN_3
#define SPI1_FLASH_CS_GPIO_Port GPIOA
#define SPI1_APA_CS_Pin LL_GPIO_PIN_4
#define SPI1_APA_CS_GPIO_Port GPIOA
#define SPI1_SCK_Pin LL_GPIO_PIN_5
#define SPI1_SCK_GPIO_Port GPIOA
#define SPI1_MISO_Pin LL_GPIO_PIN_6
#define SPI1_MISO_GPIO_Port GPIOA
#define SPI1_MOSI_Pin LL_GPIO_PIN_7
#define SPI1_MOSI_GPIO_Port GPIOA
#define USART1_DBG_TX_Pin LL_GPIO_PIN_9
#define USART1_DBG_TX_GPIO_Port GPIOA
#define USART1_DBG_RX_Pin LL_GPIO_PIN_10
#define USART1_DBG_RX_GPIO_Port GPIOA
#define SWD_IO_Pin LL_GPIO_PIN_13
#define SWD_IO_GPIO_Port GPIOA
#define SWD_CLK_Pin LL_GPIO_PIN_14
#define SWD_CLK_GPIO_Port GPIOA
#define SWD_O_Pin LL_GPIO_PIN_3
#define SWD_O_GPIO_Port GPIOB
#define HEARTBEAT_Pin LL_GPIO_PIN_4
#define HEARTBEAT_GPIO_Port GPIOB
#define STAT_LED1_Pin LL_GPIO_PIN_5
#define STAT_LED1_GPIO_Port GPIOB
#define STAT_LED2_Pin LL_GPIO_PIN_6
#define STAT_LED2_GPIO_Port GPIOB
#define STAT_LED3_Pin LL_GPIO_PIN_7
#define STAT_LED3_GPIO_Port GPIOB
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
