/*
 * ex3.c
 *
 *  Created on: Sep 10, 2024
 *      Author: hachi
 */

#include "ex5.h"

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

unsigned int count, countdown, state;

void ex5_init(){
	count = 0;
	countdown =5;
	state =0;
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, SET);
	display7SEG(10);
}

void ex5_run(){
	count++;
	display7SEG(countdown);
	countdown--;
	switch(state){
	case 0:
	  //1RED2GREEN
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
	  if(count == 3){
		  state++;
		  count=0;
	  }
	  break;
	case 1:
	  //1RED2YELLOW
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  if(count == 2){
		  state++;
		  count=0;
		  countdown=3;
	  }
	  break;
	case 2:
	  //1GREEN2RED
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  if(count == 3){
		  state++;
		  count=0;
		  countdown=2;
	  }
	  break;
	case 3:
	  //1YELLOW2RED
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  if(count == 2){
		  state=0;
		  count=0;
		  countdown=5;
	  }
	  break;
	default:
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	}
}
