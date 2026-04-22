/*
 *******************************************************************************
 * Copyright (c) 2023  STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license 
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/*----------------------------------------------------------------------------
 *        MARS Custom pins numbers
 *----------------------------------------------------------------------------*/

// LEDS
#define LED_BLUE            PA10
#define LED_GREEN           PC7
#define LED_RED             PD13

// QSPI Flash
#define FLASH_CS            PG6
#define FLASH_QSPI_3        PF6
#define FLASH_QSPI_2        PF7
#define FLASH_QSPI_1        PF9
#define FLASH_QSPI_0        PF8
#define FLASH_QSPI_SCLK     PF10

// DO NOT OVERRIDE
#define USBN                PA_11
#define USBP                PA_12
#define SWDIO               PA_13
#define SWCLK               PA_14
#define OSC32IN             PC_14
#define OSC32OUT            PC_15
#define OSCIN               PH_0
#define OSCOUT              PH_1

// SD card
#define PIN_SD_CD           PF2
#define PIN_SD_CMD          PD2
#define PIN_SD_DAT0         PC8
#define PIN_SD_DAT1         PC9
#define PIN_SD_DAT2         PC10
#define PIN_SD_DAT3         PC11
#define PIN_SD_SCK          PC12

// sensors SPI bus

#define SENSORS_SPI_SCK     PG11
#define SENSORS_SPI_MISO    PG9
#define SENSORS_SPI_MOSI    PD7
#define SENSORS_ASM_CS      PD5
#define SENSORS_LSM_CS      PB4
#define SENSORS_LPS_CS      PD0
#define SENSORS_LIS_CS      PA15


// sensor interupts
#define ASM_INT1            PG15
#define ASM_INT2            PF3
#define LSM_INT1            PB3
#define LSM_INT2            PE1
#define LPS_INT             PD1


// GPS
#define GPS_I2C_SDA         PF15
#define GPS_I2C_SCL         PF14
#define GPS_RESET           PB8
#define GPS_INT             PB9
#define GPS_SERIAL_TX       PB14
#define GPS_SERIAL_RX       PB15



// MOSFET
#define MOSFET_GATE         PD14
#define MOSFET_CURRENT      PC0



// 30pin connector
#define PWM_OUT1            PA0 // TIM02_CH1 on schematic
#define PWM_OUT2            PA1 // TIM02_CH2 on schematic
#define PWM_OUT3            PA2 // TIM02_CH3 on schematic
#define PWM_OUT4            PA3 // TIM02_CH4 on schematic
#define PWM_OUT5            PD12 // TIM04_CH1 on schematic
#define PWM_OUT6            PB7 // TIM04_CH2 on schematic
#define PWM_OUT7            PE6 // TIM15_CH2 on schematic

#define CONNECTOR_I2C_SDA   PF0
#define CONNECTOR_I2C_SCL   PF1

#define CAMERA_MOSI         PG14
#define CAMERA_MISO         PG12
#define CAMERA_SCK          PG13
#define CAMERA_CS           PG8

#define ADC_INP3            PA6
#define ADC_INN3            PA7
#define ADC_INP5            PB1
#define ADC_INN5            PB0
#define ADC_INP4            PC4
#define ADC_INN4            PC5

// GNC
#define ENCODER1_PWM        PB5
#define ENCODER2_PWM        PB6
#define ENCODER3_PWM        PC6
#define ENCODER4_PWM        PE5

#define SERVO1_PWM          PE11
#define SERVO2_PWM          PE13
#define SERVO3_PWM          PE14
#define SERVO4_PWM          PA8

#define LEVEL_SHIFT_ENABLE  PB12
#define CANARD_POWER_ENABLE PA4


// Radio
#define RADIO_AUX           PF11
#define RADIO_M1            PF12
#define RADIO_M0            PB2
#define RADIO_SERIAL_TX     PB10
#define RADIO_SERIAL_RX     PB11


#define PA0 0 
#define PA1 1
#define PA2 2
#define PA3 3
#define PA4 4
#define PA6 5
#define PA7 6
#define PA8 7
#define PA15 8
#define PB0 9
#define PB1 10
#define PB2 11
#define PB3 12
#define PB4 13
#define PB5 14
#define PB6 15
#define PB8 16
#define PB9 17
#define PB10 18
#define PB11 19
#define PB14 20
#define PB15 21
#define PC0 22
#define PC4 23
#define PC5 24
#define PC6 25
#define PD0 26
#define PD1 27
#define PD5 28
#define PD10 29
#define PD11 30
#define PD14 31
#define PE1 32
#define PE5 33
#define PE9 34
#define PE11 35
#define PE13 36
#define PE14 37
#define PF0 38
#define PF1 39
#define PF2 40
#define PF3 41
#define PF11 42
#define PF12 43
#define PF13 44
#define PG12 45
#define PG13 46
#define PG14 47
#define PG6 48
#define PF6 49
#define PF7 50
#define PF8 51
#define PF9 52
#define PF10 53
#define PF14 54
#define PF15 55
#define PG11 56
#define PG9 57
#define PD7 58
#define PD2 59
#define PG7 60
#define PA9 61
#define PA10 62
#define PC7 63
#define PC8 64
#define PC9 65
#define PC10 66
#define PC11 67
#define PC12 68
#define PD13 69
#define PG15 70
#define PB12 71
#define PG8 72
#define PE6 73
#define PD12 74

// one more than above index, size of digitalPin[] in the .cpp of the same name
#define NUM_DIGITAL_PINS        75
// size of analogInputPin[] in the .cpp of the same name 
#define NUM_ANALOG_INPUTS       9 

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM7
#endif

// UART Definitions
// #ifndef SERIAL_UART_INSTANCE
//   #define SERIAL_UART_INSTANCE  3 //Connected to ST-Link
// #endif

// HSE default value is 25MHz in HAL
// HSE_BYPASS is 8MHz
// #ifndef HSE_BYPASS_NOT_USED
//   #define HSE_VALUE             8000000
// #endif

// Extra HAL modules
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_QSPI_MODULE_DISABLED)
  #define HAL_QSPI_MODULE_ENABLED
#endif
#if !defined(HAL_SD_MODULE_DISABLED)
  #define HAL_SD_MODULE_ENABLED
#endif

#define USE_PWR_LDO_SUPPLY

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example  a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN 
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port  physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial
#endif
