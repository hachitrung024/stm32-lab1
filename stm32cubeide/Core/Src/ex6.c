/*
 * ex6.c
 *
 *  Created on: Sep 10, 2024
 *      Author: hachi
 */
#include "ex6.h"

int counter;
void ex6_init(){
	counter =0;
}
void ex6_run(){
	if(counter>=12) counter =0;
	HAL_GPIO_TogglePin(GPIOA, LED0_Pin<< counter);
	counter++;
}
