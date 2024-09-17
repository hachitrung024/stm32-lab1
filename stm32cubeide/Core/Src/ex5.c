/*
 * ex3.c
 *
 *  Created on: Sep 10, 2024
 *      Author: hachi
 */

#include "ex5.h"
#define RED_GREEN 0
#define RED_YELLOW 1
#define GREEN_RED 2
#define YELLOW_RED 3
unsigned int countdown1, countdown2, state, redDur, greenDur, yellowDur;

void ex5_init(){
	redDur = 5;
	greenDur = 3;
	yellowDur = redDur - greenDur;

	countdown1 = redDur;
	countdown2 = greenDur;
	state = RED_GREEN;
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_RED2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW2_Pin, SET);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN2_Pin, SET);
	display7SEG(10);
}
void ex5_run(){
	display7SEG(countdown1);
	countdown1--;
	countdown2--;
	switch(state){
	case RED_GREEN:
	  //1RED2GREEN
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
	  if(!countdown2){
		  countdown2 = yellowDur;
		  state = RED_YELLOW;
	  }
	  break;
	case RED_YELLOW:
	  //1RED2YELLOW
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  if(!countdown1){
		  countdown1 = greenDur;
		  countdown2 = redDur;
		  state = GREEN_RED;
	  }
	  break;
	case GREEN_RED:
	  //1GREEN2RED
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  if(!countdown1){
		  countdown1 = yellowDur;
		  state = YELLOW_RED;
	  }
	  break;
	case YELLOW_RED:
	  //1YELLOW2RED
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);

	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  if(!countdown1){
		  countdown1 = redDur;
		  countdown2 = greenDur;
		  state= RED_GREEN;
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
