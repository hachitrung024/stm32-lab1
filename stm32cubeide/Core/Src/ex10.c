/*
 * ex6.c
 *
 *  Created on: Sep 10, 2024
 *      Author: hachi
 */
#include <ex10.h>

unsigned int hour, min, sec;
void ex10_init(){
	hour =11;
	min = 59;
	sec = 30;
	clearAllClock();
}
void ex10_run(){
	  if(sec>=60){sec=0; min++;}
	  if(min>=60) {min=0;hour++;}
	  if(hour>=12) hour=0;
	  if(sec%5==0 ){
		  clearAllClock();
	  	  setNumberOnClock(sec/5);
	  	  setNumberOnClock(min/5);
	  	  setNumberOnClock(hour);
	  }
	  sec++;
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

void setNumberOnClock(int num){
	HAL_GPIO_WritePin(GPIOA, LED0_Pin << num, RESET);
}
void clearNumberOnClock(int num){
	HAL_GPIO_WritePin(GPIOA, LED0_Pin << num, SET);
}
