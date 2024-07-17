# Driver for STM32F407xx MCUs
## This driver provides several APIs for STM32F407xx series microcontrollers:
* GPIO Configuration
* SPI Communication Protocol
* I2C Communication Protocol
* USART Communication Protocol

## Examples 
### Examples can be found at /Src
### 1. Example 008spi_cmd_handling.c
This example uses the STM32f407xx to transmit data to the Arduino using the SPI protocol
#### Connection diagrams:
| STM32F407xx | Logic Level Converter |         Arduino         |
|:-----------:|:---------------------:|:-----------------------:|
|    5V Pin   |         HV Pin        |                         |
|    3V Pin   |         LV Pin        |                         |
|     GND     |       GND - GND       |           GND           |
|   PB15 Pin  |       LV1 - HV1       |          Pin 11         |
|   PB13 Pin  |       LV2 - HV2       |          Pin 13         |
|   PB14 Pin  |       LV3 - HV3       |          Pin 12         |
|             |                       | Pin 10 (Connect to GND) |

#### How to test:
1. Build and Upload the sketch from /Src/008spi_cmd_handling.c to STM32F407xx series.
2. Build and Upload the sketch from /Arduino/spi/002SPISlaveCmdHandling.ino to Arduino UNO board.
3. Connect a LED to pin 9 of Arduino UNO Board. 
4. Open the Serial Monitor on Arduino IDE, then press the User Button on STM23F407xx board.
