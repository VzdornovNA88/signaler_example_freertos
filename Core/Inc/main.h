/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32g4xx_hal.h"

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
#define DOUT_4_Pin GPIO_PIN_2
#define DOUT_4_GPIO_Port GPIOE
#define DOUT_3_Pin GPIO_PIN_3
#define DOUT_3_GPIO_Port GPIOE
#define DOUT_2_Pin GPIO_PIN_4
#define DOUT_2_GPIO_Port GPIOE
#define DOUT_1_Pin GPIO_PIN_5
#define DOUT_1_GPIO_Port GPIOE
#define StOUT_6_Pin GPIO_PIN_6
#define StOUT_6_GPIO_Port GPIOE
#define StOUT_5_Pin GPIO_PIN_13
#define StOUT_5_GPIO_Port GPIOC
#define StOUT_4_Pin GPIO_PIN_14
#define StOUT_4_GPIO_Port GPIOC
#define StOUT_3_Pin GPIO_PIN_15
#define StOUT_3_GPIO_Port GPIOC
#define StOUT_2_Pin GPIO_PIN_10
#define StOUT_2_GPIO_Port GPIOF
#define U_11_Pin GPIO_PIN_0
#define U_11_GPIO_Port GPIOC
#define U_10_Pin GPIO_PIN_1
#define U_10_GPIO_Port GPIOC
#define StOUT_1_Pin GPIO_PIN_2
#define StOUT_1_GPIO_Port GPIOC
#define U_9_Pin GPIO_PIN_0
#define U_9_GPIO_Port GPIOA
#define U_8_Pin GPIO_PIN_1
#define U_8_GPIO_Port GPIOA
#define U_7_Pin GPIO_PIN_2
#define U_7_GPIO_Port GPIOA
#define U_6_Pin GPIO_PIN_3
#define U_6_GPIO_Port GPIOA
#define U_5_Pin GPIO_PIN_4
#define U_5_GPIO_Port GPIOA
#define U_4_Pin GPIO_PIN_5
#define U_4_GPIO_Port GPIOA
#define U_3_Pin GPIO_PIN_6
#define U_3_GPIO_Port GPIOA
#define U_2_Pin GPIO_PIN_7
#define U_2_GPIO_Port GPIOA
#define U_PIT5V_Pin GPIO_PIN_4
#define U_PIT5V_GPIO_Port GPIOC
#define U_1_Pin GPIO_PIN_5
#define U_1_GPIO_Port GPIOC
#define AROT5_Pin GPIO_PIN_0
#define AROT5_GPIO_Port GPIOB
#define AROT6_Pin GPIO_PIN_1
#define AROT6_GPIO_Port GPIOB
#define AROT7_Pin GPIO_PIN_7
#define AROT7_GPIO_Port GPIOE
#define AROT8_Pin GPIO_PIN_8
#define AROT8_GPIO_Port GPIOE
#define AROT9_Pin GPIO_PIN_9
#define AROT9_GPIO_Port GPIOE
#define AROT10_Pin GPIO_PIN_10
#define AROT10_GPIO_Port GPIOE
#define AROT4_Pin GPIO_PIN_11
#define AROT4_GPIO_Port GPIOE
#define AROT3_Pin GPIO_PIN_12
#define AROT3_GPIO_Port GPIOE
#define AROT2_Pin GPIO_PIN_13
#define AROT2_GPIO_Port GPIOE
#define AROT1_Pin GPIO_PIN_12
#define AROT1_GPIO_Port GPIOB
#define AR2_Pin GPIO_PIN_13
#define AR2_GPIO_Port GPIOB
#define AR1_Pin GPIO_PIN_14
#define AR1_GPIO_Port GPIOB
#define i_8_Pin GPIO_PIN_15
#define i_8_GPIO_Port GPIOB
#define i_7_Pin GPIO_PIN_8
#define i_7_GPIO_Port GPIOD
#define i_6_Pin GPIO_PIN_9
#define i_6_GPIO_Port GPIOD
#define i_5_Pin GPIO_PIN_10
#define i_5_GPIO_Port GPIOD
#define i_4_Pin GPIO_PIN_11
#define i_4_GPIO_Port GPIOD
#define i_3_Pin GPIO_PIN_12
#define i_3_GPIO_Port GPIOD
#define i_2_Pin GPIO_PIN_13
#define i_2_GPIO_Port GPIOD
#define i_1_Pin GPIO_PIN_14
#define i_1_GPIO_Port GPIOD
#define _CS2_Pin GPIO_PIN_15
#define _CS2_GPIO_Port GPIOD
#define PWM_8_Pin GPIO_PIN_6
#define PWM_8_GPIO_Port GPIOC
#define PWM_7_Pin GPIO_PIN_7
#define PWM_7_GPIO_Port GPIOC
#define PWM_1_Pin GPIO_PIN_8
#define PWM_1_GPIO_Port GPIOC
#define PWM_2_Pin GPIO_PIN_9
#define PWM_2_GPIO_Port GPIOC
#define StPWM_8_Pin GPIO_PIN_8
#define StPWM_8_GPIO_Port GPIOA
#define StPWM_7_Pin GPIO_PIN_9
#define StPWM_7_GPIO_Port GPIOA
#define _CS3_Pin GPIO_PIN_15
#define _CS3_GPIO_Port GPIOA
#define StPWM_6_Pin GPIO_PIN_1
#define StPWM_6_GPIO_Port GPIOD
#define StPWM_5_Pin GPIO_PIN_2
#define StPWM_5_GPIO_Port GPIOD
#define PWM_5_Pin GPIO_PIN_3
#define PWM_5_GPIO_Port GPIOD
#define PWM_6_Pin GPIO_PIN_4
#define PWM_6_GPIO_Port GPIOD
#define StPWM_4_Pin GPIO_PIN_5
#define StPWM_4_GPIO_Port GPIOD
#define StPWM_3_Pin GPIO_PIN_6
#define StPWM_3_GPIO_Port GPIOD
#define StPWM_1_Pin GPIO_PIN_5
#define StPWM_1_GPIO_Port GPIOB
#define PWM_4_Pin GPIO_PIN_6
#define PWM_4_GPIO_Port GPIOB
#define PWM_3_Pin GPIO_PIN_7
#define PWM_3_GPIO_Port GPIOB
#define StPWM_2_Pin GPIO_PIN_9
#define StPWM_2_GPIO_Port GPIOB
#define DOUT_6_Pin GPIO_PIN_0
#define DOUT_6_GPIO_Port GPIOE
#define DOUT_5_Pin GPIO_PIN_1
#define DOUT_5_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
