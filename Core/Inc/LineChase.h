/*
 * LineChase.h
 *
 *  Created on: Jan 15, 2023
 *      Author: ryuku, Haruki SHIMOTORI
 */

#ifndef INC_LINECHASE_H_
#define INC_LINECHASE_H_

#define LINESENSOR_ADC_NUM 12

#include "stm32f4xx_hal.h"
#include "Motor.h"
#include "LineSensor.h"
#include "VelocityCtrl.h"

void calculateLineFollowingTermFlip(void);
void lineTraceFlip(void);

float getLineFollowingTerm(void);

void setSpeed(int16_t, int16_t);

void startLineTrace();
void stopLineTrace();

#endif /* INC_LINECHASE_H_ */
