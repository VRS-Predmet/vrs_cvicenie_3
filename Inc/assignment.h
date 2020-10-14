/*
 * assignement.h
 *
 *  Created on: Oct 13, 2020
 *      Author: stancoj
 */

#ifndef ASSIGNMENT_H_
#define ASSIGNMENT_H_

#include "main.h"

// defines for input port used by button
#define		GPIO_PORT_BUTTON				GPIOB
#define		GPIO_PIN_BUTTON					4

// defines for output port used by LED
#define		GPIO_PORT_LED					GPIOA
#define		GPIO_PIN_LED					4

// defines for "checkButtonState"
#define		TRIGGER_RISE					0
#define		TRIGGER_FALL					1

#define		BUTTON_EXTI_TRIGGER				TRIGGER_FALL
#define		BUTTON_EXTI_SAMPLES_WINDOW		100
#define		BUTTON_EXTI_SAMPLES_REQUIRED	90

#define 	GET_GPIO_STATE(port, pin)		(((port)->IDR & (1<<(pin)))>>(pin))
#define 	LED_ON					(GPIO_PORT_LED->ODR |= (uint32_t)(1 << GPIO_PIN_LED))
#define 	LED_OFF					(GPIO_PORT_LED->ODR &= ~(uint32_t)(1 << GPIO_PIN_LED))
#define 	LED_TOGGLE			    (GPIO_PORT_LED->ODR ^= (uint32_t)(1 << GPIO_PIN_LED))
/**
 *  Function checks if the button was pressed or EXTI detection was false - positive.
 *  @input_param_1 - PORT: GPIO port connected to button.
 *  @input_param_2 - PIN: GPIO pin connected to button.
 *  @input_param_3 - edge: EXTI trigger edge. Defines what is the input GPIO idle state after the button is pressed.
 *  					   TRIGGER_RISE - input is expected to be "1" after EXTI was triggered.
 *  					   TRIGGER_FALL - input is expected to be "0" after EXTI was triggered.
 *  @input_param_4 - samples_window: How many samples are checked (input port is read) after EXTI is triggered.
 *  @input_param_5 - samples_required: How many samples in row are required to be in the idle state.
 */
uint8_t checkButtonState(GPIO_TypeDef* PORT, uint8_t PIN, uint8_t edge, uint8_t samples_window, uint8_t samples_required);

#endif /* ASSIGNMENT_H_ */
