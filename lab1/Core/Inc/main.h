/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define SEG_RL_a_Pin GPIO_PIN_1
#define SEG_RL_a_GPIO_Port GPIOA
#define SEG_RL_b_Pin GPIO_PIN_2
#define SEG_RL_b_GPIO_Port GPIOA
#define SEG_RL_c_Pin GPIO_PIN_3
#define SEG_RL_c_GPIO_Port GPIOA
#define LED_BLINKY_Pin GPIO_PIN_5
#define LED_BLINKY_GPIO_Port GPIOA
#define SEG_UD_a_Pin GPIO_PIN_7
#define SEG_UD_a_GPIO_Port GPIOA
#define LED_RED_UP_Pin GPIO_PIN_0
#define LED_RED_UP_GPIO_Port GPIOB
#define LED_YELLOW_UP_Pin GPIO_PIN_1
#define LED_YELLOW_UP_GPIO_Port GPIOB
#define LED_GREEN_UP_Pin GPIO_PIN_2
#define LED_GREEN_UP_GPIO_Port GPIOB
#define LED_YELLOW_LEFT_Pin GPIO_PIN_10
#define LED_YELLOW_LEFT_GPIO_Port GPIOB
#define LED_GREEN_LEFT_Pin GPIO_PIN_11
#define LED_GREEN_LEFT_GPIO_Port GPIOB
#define SEG_RL_d_Pin GPIO_PIN_12
#define SEG_RL_d_GPIO_Port GPIOB
#define SEG_RL_e_Pin GPIO_PIN_13
#define SEG_RL_e_GPIO_Port GPIOB
#define SEG_RL_f_Pin GPIO_PIN_14
#define SEG_RL_f_GPIO_Port GPIOB
#define SEG_RL_g_Pin GPIO_PIN_15
#define SEG_RL_g_GPIO_Port GPIOB
#define SEG_UD_b_Pin GPIO_PIN_8
#define SEG_UD_b_GPIO_Port GPIOA
#define SEG_UD_c_Pin GPIO_PIN_9
#define SEG_UD_c_GPIO_Port GPIOA
#define SEG_UD_d_Pin GPIO_PIN_10
#define SEG_UD_d_GPIO_Port GPIOA
#define SEG_UD_e_Pin GPIO_PIN_11
#define SEG_UD_e_GPIO_Port GPIOA
#define SEG_UD_f_Pin GPIO_PIN_12
#define SEG_UD_f_GPIO_Port GPIOA
#define SEG_UD_g_Pin GPIO_PIN_13
#define SEG_UD_g_GPIO_Port GPIOA
#define LED_RED_RIGHT_Pin GPIO_PIN_3
#define LED_RED_RIGHT_GPIO_Port GPIOB
#define LED_YELLOW_RIGHT_Pin GPIO_PIN_4
#define LED_YELLOW_RIGHT_GPIO_Port GPIOB
#define LED_GREEN_RIGHT_Pin GPIO_PIN_5
#define LED_GREEN_RIGHT_GPIO_Port GPIOB
#define LED_RED_DOWN_Pin GPIO_PIN_6
#define LED_RED_DOWN_GPIO_Port GPIOB
#define LED_YELLOW_DOWN_Pin GPIO_PIN_7
#define LED_YELLOW_DOWN_GPIO_Port GPIOB
#define LED_GREEN_DOWN_Pin GPIO_PIN_8
#define LED_GREEN_DOWN_GPIO_Port GPIOB
#define LED_RED_LEFT_Pin GPIO_PIN_9
#define LED_RED_LEFT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define RED_ON	0
#define YELLOW_ON	1
#define	GREEN_ON	2
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
