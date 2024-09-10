/*
 * ex6.c
 *
 *  Created on: Sep 10, 2024
 *      Author: hachi
 */
#include <ex7.h>

int counter;
void ex7_init(){
	clearAllClock();
	counter =0;
}
void ex7_run(){
	if(counter>=12) {counter =0;clearAllClock();};
	HAL_GPIO_TogglePin(GPIOA, LED0_Pin<< counter);
	counter++;
}

void clearAllClock(){
	HAL_GPIO_WritePin(GPIOA, LED0_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED1_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED3_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED4_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED5_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED6_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED7_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED8_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED9_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED10_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED11_Pin, SET);

}
