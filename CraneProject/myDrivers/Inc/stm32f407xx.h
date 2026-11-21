#ifndef INC_STM32F407XX_H_
#define  INC_STM32F407XX_H_

#include <stdint.h>
#include <string.h>
#include <stddef.h>

/*
 * Microprocessor Defines
 */

#define __IO volatile
#define SET_BIT(REG,BIT)			((REG) |= (BIT))
#define CLEAR_BIT(REG,BIT)			((REG) &= ~(BIT))
#define READ_BIT(REG,BIT)			((REG) &  (BIT))
#define UNUSED(x)					(void)(x)


typedef enum
{
	DISABLE = 0x0U,
	ENABLE = !DISABLE
}Functional_State_t;
typedef enum
{
	FLAG_RESET = 0x0U,
	FLAG_SET = !FLAG_RESET
}Flag_Status_t;


/*
 * Memory Base Addresses
 */
//UL -> 'UNSIGNED LONG' demektir.
//SRAM2'yi bulmak icin SRAM1'in baslangicindan 112KB(112*1024 Bayt) ilerleyince SRAM2'nin baslangic adresi bulunur.
#define FLASH_BASE_ADDR				(0x08000000UL)						/* Flash Base Address (up to 1MB)   	*/
#define SRAM2_BASE_ADDR				(0x2001C000UL)						/* SRAM2 Base Address (up to 16KB)  	*/
#define SRAM1_BASE_ADDR				(0x20000000UL)						/* SRAM1 Base Address (up to 112KB) 	*/

/*
 * Memory and Bus Addresses
 */
#define PERIPH_BASE_ADDR			(0x40000000UL)						/* All peripherals start this address 	*/

#define APB1_BASE_ADDR				(PERIPH_BASE_ADDR + 0x00000UL)		/* APB1 Base Address -- 0x4000 0000		*/
#define APB2_BASE_ADDR				(PERIPH_BASE_ADDR + 0x10000UL)		/* APB2 Base Address -- 0x4001 0000		*/
#define AHB1_BASE_ADDR				(PERIPH_BASE_ADDR + 0x20000UL)		/* AHB1 Base Address -- 0x4002 0000     */

/*
 * Peripherals Addresses
 */
//AHB1 BUS
#define GPIOA_BASE_ADDR				(AHB1_BASE_ADDR + 0x0000UL)			/* GPIO A Base Address 					*/
#define GPIOD_BASE_ADDR				(AHB1_BASE_ADDR + 0x0C00UL)			/* GPIO D Base Address 					*/
#define RCC_BASE_ADDR				(AHB1_BASE_ADDR + 0x3800UL)			/* RCC    Base Address 					*/

//APB1 BUS
#define TIM3_BASE_ADDR				(APB1_BASE_ADDR + 0x0400UL)			/* TIM 3  Base Address 					*/
#define TIM6_BASE_ADDR				(APB1_BASE_ADDR + 0x1000UL)			/* TIM 6  Base Address 					*/

//APB2 BUS
#define ADC1_BASE_ADDR				(APB2_BASE_ADDR + 0x2000UL)			/* ADC 1  Base Address					*/
#define ADC_COMMON_BASE_ADDR		(APB2_BASE_ADDR + 0x2300UL)			/* ADC Common Base Address 				*/

#endif /* INC_STM32F407XX_H_*/
