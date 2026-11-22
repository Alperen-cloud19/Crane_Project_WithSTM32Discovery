################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../myDrivers/Src/ADC.c \
../myDrivers/Src/GPIO.c \
../myDrivers/Src/RCC.c \
../myDrivers/Src/TIM.c 

OBJS += \
./myDrivers/Src/ADC.o \
./myDrivers/Src/GPIO.o \
./myDrivers/Src/RCC.o \
./myDrivers/Src/TIM.o 

C_DEPS += \
./myDrivers/Src/ADC.d \
./myDrivers/Src/GPIO.d \
./myDrivers/Src/RCC.d \
./myDrivers/Src/TIM.d 


# Each subdirectory must supply rules for building sources it contributes
myDrivers/Src/%.o myDrivers/Src/%.su myDrivers/Src/%.cyclo: ../myDrivers/Src/%.c myDrivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-myDrivers-2f-Src

clean-myDrivers-2f-Src:
	-$(RM) ./myDrivers/Src/ADC.cyclo ./myDrivers/Src/ADC.d ./myDrivers/Src/ADC.o ./myDrivers/Src/ADC.su ./myDrivers/Src/GPIO.cyclo ./myDrivers/Src/GPIO.d ./myDrivers/Src/GPIO.o ./myDrivers/Src/GPIO.su ./myDrivers/Src/RCC.cyclo ./myDrivers/Src/RCC.d ./myDrivers/Src/RCC.o ./myDrivers/Src/RCC.su ./myDrivers/Src/TIM.cyclo ./myDrivers/Src/TIM.d ./myDrivers/Src/TIM.o ./myDrivers/Src/TIM.su

.PHONY: clean-myDrivers-2f-Src

