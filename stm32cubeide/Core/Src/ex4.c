/*
 * ex3.c
 *
 *  Created on: Sep 10, 2024
 *      Author: hachi
 */

#include "ex4.h"

void display7SEG(int num){
  switch(num){
  case 0:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, SET);
	  break;
  case 1:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, SET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, SET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, SET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, SET);
	  break;
  case 2:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, SET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, SET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  case 3:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, SET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  case 4:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, SET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, SET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  case 5:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, SET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  case 6:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, SET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  case 7:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, SET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, SET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, SET);
	  break;
  case 8:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  case 9:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, RESET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, RESET);
	  break;
  default:
	  HAL_GPIO_WritePin(SEG7A_GPIO_Port, SEG7A_Pin, SET);
	  HAL_GPIO_WritePin(SEG7B_GPIO_Port, SEG7B_Pin, SET);
	  HAL_GPIO_WritePin(SEG7C_GPIO_Port, SEG7C_Pin, SET);
	  HAL_GPIO_WritePin(SEG7D_GPIO_Port, SEG7D_Pin, SET);
	  HAL_GPIO_WritePin(SEG7E_GPIO_Port, SEG7E_Pin, SET);
	  HAL_GPIO_WritePin(SEG7F_GPIO_Port, SEG7F_Pin, SET);
	  HAL_GPIO_WritePin(SEG7G_GPIO_Port, SEG7G_Pin, SET);
	  break;
  }
}

int counter = 0;

void ex4_init(){
	counter =0;
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, SET);
}

void ex4_run(){
	if(counter >=10 ) counter =0;
	display7SEG(counter++);
}
