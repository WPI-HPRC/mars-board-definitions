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
#define FLASH_CS            PG_6
#define FLASH_QSPI_3        PF_6
#define FLASH_QSPI_2        PF_7
#define FLASH_QSPI_1        PF_9
#define FLASH_QSPI_0        PF_8
#define FLASH_QSPI_SCLK     PF_10

#define USBP                PA_12
#define USBN                PA_11

// SD card
#define SD_CD               PF_2
#define SD_CMD              PD_2
#define SD_DAT0             PC_8
#define SD_DAT1             PC_9
#define SD_DAT2             PC_10
#define SD_DAT3             PC_11
#define SD_SCK              PC_12

// sensors SPI bus

#define SENSORS_SPI_SCK     PG_11
#define SENSORS_SPI_MISO    PG_9
#define SENSORS_SPI_MOSI    PD_7
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

#define GPS_I2C_SDA         PF_15
#define GPS_I2C_SCL         PF_14
#define GPS_RESET           PB8
#define GPS_INT             PB9
#define GPS_SERIAL_TX       PB_14
#define GPS_SERIAL_RX       PB_15



// MOSFET
#define MOSFET_GATE         PD14
#define MOSFET_CURRENT      PC0



// 30pin connector
#define PWM_OUT1            PA0
#define PWM_OUT2            PA1
#define PWM_OUT3            PA2
#define PWM_OUT4            PA3


#define CONNECTOR_I2C_SDA   PF0
#define CONNECTOR_I2C_SCL   PF1


#define CAMERA_MOSI         PG14
#define CAMERA_MISO         PG12
#define CAMERA_SCK          PG13
#define CAMERA_CS           PG8

#define ADC_INP5            PB1
#define ADC_INN5            PB0
#define ADC_INP4            PC4
#define ADC_INN4            PC5

#define AIRBRAKES_OUT       PA8
#define AIRBRAKES_IN        PE9


// 20 pin radio/gnc connector
#define ENCODER1_PWM        PB5
#define ENCODER2_PWM        PC6
#define ENCODER2_PWM        PB6
#define ENCODER4_PWM        PE5

#define SERVO1_PWM          PE11
#define SERVO2_PWM          PE13
#define SERVO3_PWM          PE14
#define SERVO4_PWM          PA8

#define LEVEL_SHIFT_ENABLE  PD4
#define CANARD_POWER_ENABLE PA4

#define RADIO_AUX           PF11
#define RADIO_M1            PF12
#define RADIO_M0            PB2
#define RADIO_SERIAL_TX     PB_10
#define RADIO_SERIAL_RX     PB_11


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
#define PE9 36
#define PE11 37
#define PE13 38
#define PE14 39
#define PF0 40
#define PF1 41
#define PF2 42
#define PF3 43
#define PF4 44
#define PF11 45
#define PF12 46
#define PF13 47
#define PG12 48
#define PG13 49
#define PG14 50


#define NUM_DIGITAL_PINS        51
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
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  3 //Connected to ST-Link
#endif

// Serial pin used for console (ex: ST-Link)
// Required by Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PD9
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PD8
#endif

// HSE default value is 25MHz in HAL
// HSE_BYPASS is 8MHz
#ifndef HSE_BYPASS_NOT_USED
  #define HSE_VALUE             8000000
#endif

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
