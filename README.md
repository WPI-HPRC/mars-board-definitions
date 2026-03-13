# MARS Board Definitions

STM32H753ZIT6 based boards.

MARSv1 definition is (possibly) broken.

## Specs
- MCU: STM32H753ZIT6 @ 75MHz
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


# Uploading
After uploading, if you receive the following error:
```
File downloaded successfully
Submitting leave request...
dfu-util: Error during download get_status
*** [upload] Error 74
```
then there is nothing to worry about! The firmware has been uploaded successfully.
This is a quirk with the programming utility.