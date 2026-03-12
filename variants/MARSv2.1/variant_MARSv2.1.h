/*
 *******************************************************************************
 * Copyright (c) 2023, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
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
#define LED_BLUE            PD_11
#define LED_GREEN           PD_10
#define LED_RED             PD_9

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
extern SPIClass SENSORS_SPI;
#define SENSORS_SPI_SCK     PG_11
#define SENSORS_SPI_MISO    PG_9
#define SENSORS_SPI_MOSI    PD_7
#define SENSORS_ASM_CS      PD_5
#define SENSORS_LSM_CS      PB_4
#define SENSORS_LPS_CS      PD_0
#define SENSORS_LIS_CS      PA_15


// sensor interupts
#define ASM_INT1            PF_3
#define ASM_INT2            PF_4
#define LSM_INT1            PB_3
#define LSM_INT2            PE_1
#define LPS_INT             PD_1


// GPS
extern TwoWire GPS_I2C;
extern HardwareSerial GPS_SERIAL;
#define GPS_I2C_SDA         PF_15
#define GPS_I2C_SCL         PF_14
#define GPS_RESET           PB_8
#define GPS_INT             PB_9
#define GPS_SERIAL_TX       PB_14
#define GPS_SERIAL_RX       PB_15



// MOSFET
#define MOSFET_GATE         PD_14
#define MOSFET_CURRENT      PC_0



// 30pin connector
#define TIM15_CH1           PE_5
#define TIM15_CH2           PE_6
#define TIM02_CH4           PA_3
#define TIM02_CH3           PA_2
#define TIM02_CH2           PA_1
#define TIM02_CH1           PA_0
#define TIM04_CH1           PB_6
#define TIM04_CH2           PB_7

extern TwoWire CONNECTOR_I2C;
#define CONNECTOR_I2C_SDA   PF_0
#define CONNECTOR_I2C_SCL   PF_1

extern SPIClass CAMERA_SPI;
#define CAMERA_MOSI         PG_14
#define CAMERA_MISO         PG_12
#define CAMERA_SCK          PG_13
#define CAMERA_CS           PG_8

#define ADC_INP5            PB_1
#define ADC_INN5            PB_0
#define ADC_INP4            PC_4
#define ADC_INN4            PC_5

#define AIRBRAKES_OUT       PA_8
#define AIRBRAKES_IN        PE_9




// 20 pin radio/gnc connector
#define ENCODER1_PWM        PE_11
#define ENCODER2_PWM        PE_13
#define ENCODER2_PWM        PA_9
#define ENCODER4_PWM        PE_14

#define SERVO1_PWM          PA_10
#define SERVO2_PWM          PG_7
#define SERVO3_PWM          PC_6
#define SERVO4_PWM          PC_7

#define LEVEL_SHIFT_ENABLE  PD_4
#define CANARD_POWER_ENABLE PA_4

extern HardwareSerial RADIO_SERIAL
#define RADIO_AUX           PF_11
#define RADIO_M1            PF_12
#define RADIO_M0            PB_2
#define RADIO_SERIAL_TX     PB_10
#define RADIO_SERIAL_RX     PB_11








/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/


// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1)
#define PA1_ALT1                (PA1  | ALT1)
#define PA1_ALT2                (PA1  | ALT2)
#define PA2_ALT1                (PA2  | ALT1)
#define PA2_ALT2                (PA2  | ALT2)
#define PA3_ALT1                (PA3  | ALT1)
#define PA3_ALT2                (PA3  | ALT2)
#define PA4_ALT1                (PA4  | ALT1)
#define PA4_ALT2                (PA4  | ALT2)
#define PA5_ALT1                (PA5  | ALT1)
#define PA6_ALT1                (PA6  | ALT1)
#define PA7_ALT1                (PA7  | ALT1)
#define PA7_ALT2                (PA7  | ALT2)
#define PA7_ALT3                (PA7  | ALT3)
#define PA9_ALT1                (PA9  | ALT1)
#define PA10_ALT1               (PA10 | ALT1)
#define PA11_ALT1               (PA11 | ALT1)
#define PA12_ALT1               (PA12 | ALT1)
#define PA15_ALT1               (PA15 | ALT1)
#define PA15_ALT2               (PA15 | ALT2)
#define PB0_ALT1                (PB0  | ALT1)
#define PB0_ALT2                (PB0  | ALT2)
#define PB1_ALT1                (PB1  | ALT1)
#define PB1_ALT2                (PB1  | ALT2)
#define PB3_ALT1                (PB3  | ALT1)
#define PB3_ALT2                (PB3  | ALT2)
#define PB4_ALT1                (PB4  | ALT1)
#define PB4_ALT2                (PB4  | ALT2)
#define PB5_ALT1                (PB5  | ALT1)
#define PB5_ALT2                (PB5  | ALT2)
#define PB6_ALT1                (PB6  | ALT1)
#define PB6_ALT2                (PB6  | ALT2)
#define PB7_ALT1                (PB7  | ALT1)
#define PB8_ALT1                (PB8  | ALT1)
#define PB8_ALT2                (PB8  | ALT2)
#define PB9_ALT1                (PB9  | ALT1)
#define PB9_ALT2                (PB9  | ALT2)
#define PB14_ALT1               (PB14 | ALT1)
#define PB14_ALT2               (PB14 | ALT2)
#define PB15_ALT1               (PB15 | ALT1)
#define PB15_ALT2               (PB15 | ALT2)
#define PC0_ALT1                (PC0  | ALT1)
#define PC0_ALT2                (PC0  | ALT2)
#define PC1_ALT1                (PC1  | ALT1)
#define PC1_ALT2                (PC1  | ALT2)
#define PC4_ALT1                (PC4  | ALT1)
#define PC5_ALT1                (PC5  | ALT1)
#define PC6_ALT1                (PC6  | ALT1)
#define PC6_ALT2                (PC6  | ALT2)
#define PC7_ALT1                (PC7  | ALT1)
#define PC7_ALT2                (PC7  | ALT2)
#define PC8_ALT1                (PC8  | ALT1)
#define PC9_ALT1                (PC9  | ALT1)
#define PC10_ALT1               (PC10 | ALT1)
#define PC11_ALT1               (PC11 | ALT1)
#define PF8_ALT1                (PF8  | ALT1)
#define PF9_ALT1                (PF9  | ALT1)

#define NUM_DIGITAL_PINS        119
#define NUM_DUALPAD_PINS        2
#define NUM_ANALOG_INPUTS       28

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
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial
#endif
