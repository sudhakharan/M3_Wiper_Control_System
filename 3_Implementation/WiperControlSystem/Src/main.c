/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "MyStm32f407xx.h"

void delay(int a)
{
	for (uint32_t i=0; i<a ; i++);
}
int main(void)
{
    /* Loop forever */
	uint16_t blink = 0;
	GPIO_Handle_t Led;
	Led.pGPIOx = GPIOD;
	Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
	Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Led);

	Led.pGPIOx = GPIOD;
	Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
	Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Led);

	Led.pGPIOx = GPIOD;
	Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
	Led.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Led);

	Led.pGPIOx = GPIOD;
	Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	Led.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	Led.GPIO_PinConfig.GPIO_PinOPType= GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Led);

	Led.pGPIOx = GPIOA;
	Led.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GPIO_Init(&Led);
	Led.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;


	while(1)
	{
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ENABLE)
		{
			++blink;
			if(blink == 1)
			{
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
			}
			else if(blink == 2)
			{
				while(blink == 2)
				{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					delay(50000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_1, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					delay(50000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					delay(50000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);}
			}
			else if(blink == 3)
			{
				while(blink == 3)
				{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					delay(30000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					delay(30000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					delay(30000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
				}
			}
			else if(blink == 4)
			{
				while(blink == 4)
				{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					delay(1000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					delay(1000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					delay(1000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
				}
			}
			else if(blink == 5)
			{
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
					delay(100000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
					delay(100000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
					GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
					delay(100000000);
					GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
			}
			else if(blink == 6)
			{
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
			}
		}
	}


}
