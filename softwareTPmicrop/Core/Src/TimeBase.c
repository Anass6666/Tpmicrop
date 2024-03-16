/*
 * TimeBase.c
 *
 *  Created on: Mar 15, 2024
 *      Author: anaskhou93
 */

#include "TimeBase.h"
#include "Led.h"
#include "stm32g4xx_ll_tim.h"

void TimeBaseStartIT(void)
{
	LL_TIM_EnableCounter(TIM2);
	LL_TIM_EnableIT_UPDATE(TIM2);
}
