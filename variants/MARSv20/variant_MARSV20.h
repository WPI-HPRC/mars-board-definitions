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
#define LED_BLUE            PD11
#define LED_GREEN           PD10
#define LED_RED             PD9

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
#define ASM_INT1            PF3
#define ASM_INT2            PF4
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
#define PWM_OUT1            PE5
#define PWM_OUT2            PE6
#define PWM_OUT3            PA0
#define PWM_OUT4            PA1
#define PWM_OUT5            PA2
#define PWM_OUT6            PA3
#define PWM_OUT7            PB6
#define PWM_OUT8            PB7


#define CONNECTOR_I2C_SDA   PF0
#define CONNECTOR_I2C_SCL   PF1

#define CAMERA_MOSI         PC1
#define CAMERA_MISO         PC2C
#define CAMERA_SCK          PB13
#define CAMERA_CS           PC3C

#define ADC_INP3            PA6
#define ADC_INN3            PA7
#define ADC_INP5            PB1
#define ADC_INN5            PB0
#define ADC_INP4            PC4
#define ADC_INN4            PC5

#define AIRBRAKES_OUT       PA8
#define AIRBRAKES_IN        PE9


// 20 pin radio/gnc connector
#define ENCODER1_PWM        PE11
#define ENCODER2_PWM        PE13
#define ENCODER3_PWM        PA9
#define ENCODER4_PWM        PE14

#define SERVO1_PWM          PA10
#define SERVO2_PWM          PG7
#define SERVO3_PWM          PC6
#define SERVO4_PWM          PC7

#define LEVEL_SHIFT_ENABLE  PD4
#define CANARD_POWER_ENABLE PA4

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
#define PD4 28
#define PD5 29
#define PD9 30
#define PD10 31
#define PD11 32
#define PD14 33
#define PE1 34
#define PE5 35
#define PE6 36
#define PE9 37
#define PE11 38
#define PE13 39
#define PE14 40
#define PF0 41
#define PF1 42
#define PF2 43
#define PF3 44
#define PF4 45
#define PF11 46
#define PF12 47
#define PF13 48
#define PG12 49
#define PG13 50
#define PG14 51
#define PG6 52
#define PF6 53
#define PF7 54
#define PF8 55
#define PF9 56
#define PF10 57
#define PF14 58
#define PF15 59
#define PG11 60
#define PG9 61
#define PD7 62
#define PD2 63
#define PG7 64
#define PA9 65
#define PA10 66
#define PB13 67
#define PC1 68
#define PC3C 69
#define PC2C 70
#define PC7 71
#define PC8 72
#define PC9 73
#define PC10 74
#define PC11 75
#define PC12 76


#define NUM_DIGITAL_PINS        77
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
