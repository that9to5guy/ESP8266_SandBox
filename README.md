# ESP8266_SandBox

This repository is my personal space to learn and practice programming the ESP8266 NodeMCU V3 board using PlatformIO. It contains example projects, experiments, and code snippets to build practical skills and explore ESP8266 features.  
I will keep updating it with new projects as I gain experience.

## Requirements

- ESP8266 NodeMCU V3 development board  
- USB cable to connect the board to your PC  
- USB-to-Serial drivers installed (e.g., CP2102 or CH340 drivers depending on your board)  
- PlatformIO IDE (recommended as a VS Code extension)  
- Basic knowledge of C/C++ and microcontroller programming

## Projects in This Repository

- `01_HelloWorld/`  
  A simple "Hello World Blinky" program for ESP8266 NodeMCU.  
  Used to verify flashing, serial communication, and basic board operation.

- `02_HW_info/`  
  Prints detailed ESP8266 system and hardware information over Serial.  
  Includes chip ID, flash specs, memory stats, and WiFi diagnostics.

More project folders will be added as development continues.

## Pins on ESP8266 for Web Based Control Panel

| Peripheral                      | Pin(s)                 | Notes                                |
| ------------------------------- | ---------------------- | ------------------------------------ |
| **UART (sensor sim)**           | GPIO1 (TX), GPIO3 (RX) | Bi-directional UART communication    |
| **Rotary Encoder**              | GPIO16, GPIO4          | GPIO16 no interrupt, GPIO4 safe GPIO |
| **Analog Simulation (PWM)**     | GPIO5                  | PWM output for analog signal         |
| **Push Button (digital input)** | GPIO12                 | Button input with pull-up            |
| **Switch (digital input)**      | GPIO13                 | Switch input with pull-up            |
| **LED (digital output)**        | GPIO14                 | Onboard or external LED output       |

## Contributing

This repo is mainly for my personal learning but feel free to fork or send pull requests if you find improvements.

## License

MIT License — see LICENSE file for details.
