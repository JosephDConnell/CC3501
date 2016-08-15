################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/ASerialLdd1.c \
../Generated_Code/BLED.c \
../Generated_Code/CI2C1.c \
../Generated_Code/Cpu.c \
../Generated_Code/FC321.c \
../Generated_Code/GLED.c \
../Generated_Code/Inhr1.c \
../Generated_Code/IntI2cLdd1.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PwmLdd1.c \
../Generated_Code/PwmLdd2.c \
../Generated_Code/PwmLdd3.c \
../Generated_Code/RLED.c \
../Generated_Code/RealTimeLdd1.c \
../Generated_Code/TU1.c \
../Generated_Code/TU2.c \
../Generated_Code/Term1.c \
../Generated_Code/Vectors.c 

OBJS += \
./Generated_Code/ASerialLdd1.o \
./Generated_Code/BLED.o \
./Generated_Code/CI2C1.o \
./Generated_Code/Cpu.o \
./Generated_Code/FC321.o \
./Generated_Code/GLED.o \
./Generated_Code/Inhr1.o \
./Generated_Code/IntI2cLdd1.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/PwmLdd2.o \
./Generated_Code/PwmLdd3.o \
./Generated_Code/RLED.o \
./Generated_Code/RealTimeLdd1.o \
./Generated_Code/TU1.o \
./Generated_Code/TU2.o \
./Generated_Code/Term1.o \
./Generated_Code/Vectors.o 

C_DEPS += \
./Generated_Code/ASerialLdd1.d \
./Generated_Code/BLED.d \
./Generated_Code/CI2C1.d \
./Generated_Code/Cpu.d \
./Generated_Code/FC321.d \
./Generated_Code/GLED.d \
./Generated_Code/Inhr1.d \
./Generated_Code/IntI2cLdd1.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PwmLdd1.d \
./Generated_Code/PwmLdd2.d \
./Generated_Code/PwmLdd3.d \
./Generated_Code/RLED.d \
./Generated_Code/RealTimeLdd1.d \
./Generated_Code/TU1.d \
./Generated_Code/TU2.d \
./Generated_Code/Term1.d \
./Generated_Code/Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"G:/prac2/Static_Code/PDD" -I"G:/prac2/Static_Code/IO_Map" -I"G:/prac2/Sources" -I"G:/prac2/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


