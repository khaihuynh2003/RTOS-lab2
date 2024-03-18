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
#define RED_Pin GPIO_PIN_5
#define RED_GPIO_Port GPIOA
#define YELLOW_Pin GPIO_PIN_6
#define YELLOW_GPIO_Port GPIOA
#define GREEN_Pin GPIO_PIN_7
#define GREEN_GPIO_Port GPIOA
#define display7SEG_Pin GPIO_PIN_0
#define display7SEG_GPIO_Port GPIOB
#define display7SEGB1_Pin GPIO_PIN_1
#define display7SEGB1_GPIO_Port GPIOB
#define display7SEGB2_Pin GPIO_PIN_2
#define display7SEGB2_GPIO_Port GPIOB
#define display7SEG1_Pin GPIO_PIN_10
#define display7SEG1_GPIO_Port GPIOB
#define display7SEG1B11_Pin GPIO_PIN_11
#define display7SEG1B11_GPIO_Port GPIOB
#define display7SEG1B12_Pin GPIO_PIN_12
#define display7SEG1B12_GPIO_Port GPIOB
#define display7SEG1B13_Pin GPIO_PIN_13
#define display7SEG1B13_GPIO_Port GPIOB
#define RED1_Pin GPIO_PIN_8
#define RED1_GPIO_Port GPIOA
#define YELLOW1_Pin GPIO_PIN_9
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_10
#define GREEN1_GPIO_Port GPIOA
#define display7SEGB3_Pin GPIO_PIN_3
#define display7SEGB3_GPIO_Port GPIOB
#define display7SEGB4_Pin GPIO_PIN_4
#define display7SEGB4_GPIO_Port GPIOB
#define display7SEGB5_Pin GPIO_PIN_5
#define display7SEGB5_GPIO_Port GPIOB
#define display7SEGB6_Pin GPIO_PIN_6
#define display7SEGB6_GPIO_Port GPIOB
#define display7SEG1B7_Pin GPIO_PIN_7
#define display7SEG1B7_GPIO_Port GPIOB
#define display7SEG1B8_Pin GPIO_PIN_8
#define display7SEG1B8_GPIO_Port GPIOB
#define display7SEG1B9_Pin GPIO_PIN_9
#define display7SEG1B9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
