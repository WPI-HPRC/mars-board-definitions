# MARS Board Definitions

STM32H753ZIT6 based boards.

## Specs
- MCU: STM32H753ZIT6 @ 480MHz
- HSE: 25MHz
- LSE: 32.768KHz
- Flash: 2MB
- RAM: 512KB

## Usage as Submodule
```
git submodule add https://github.com/WPI-HPRC/mars-board-definitions.git board
git submodule update --init
```
## platformio.ini
```
[platformio]
boards_dir = board/boards

[env:marsv2]
platform = ststm32
framework = arduino
board = marsv2
board_build.variants_dir = board/variants
```
