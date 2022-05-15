# INTRODUCTION
The speed of a wiper is controlled by a wiper speed control system in accordance with frequencies. The pulse signal is digitally processed to provide a control signal. A wiper driver circuit receives the control signal and adjusts the operational speed or timing in line with it.
# SOFTWARE REQUIREMENTS
STM32 CUBE IDE
# COMPONENTS
STM32F4O7VG MICROCONTROLLER BOARD
# DESCRIPTION
## STM32F407VG
The STM32F407 Kit takes advantage of the high-performance STM32F407 microcontrollers' capabilities to make it simple for users to create audio-based applications. It comes with an ST-LINK embedded debug tool, an ST-MEMS digital accelerometer, a digital microphone, an audio DAC with integrated class D speaker driver, LEDs, pushbuttons, and a USB OTG micro-AB connector.Ethernet connectivity, an LCD display, and other features have been added to the STM32F4 DISCOVERY kit. The STM32F405xx and STM32F407xx families are built around the high-performance Arm® Cortex®-M4 32-bit RISC core, which runs at up to 168 MHz.
# FEATURES OF STM32F407VG MICROCONTROLLER
* In a LQFP100 package, the STM32F407VGT6 microcontroller has a 32-bit ARM Cortex-M4 with FPU core, 1-Mbyte Flash memory, and 192-Kbyte RAM.
* USB ST-LINK with three separate interfaces and re-enumeration capability.
* On-board ST-LINK/V2 or ST-LINK/V2-A on STM32F4 DISCOVERY (old reference) or STM32F407G-DISC1 (new order code)
* Board power is supplied through USB or an external 5 V supply source.
* Virtual Com port Debug port (with new order code only)
* Large-scale storage (with new order code only)
* 3 V and 5 V external application power supply
# USES
* This Microcontroller is used in security systems,air conditioning,printing and scanning machines and heat ventilation.
# WORKING PRINCIPLE
Assume that the automobile is the microcontroller. If the button is hit, the first led (red) will turn on, Clicking again  the wiper will start, and the second led (blue) will turn on for a desired rate. If the button is pressed again, the third led (green) will turn on, and the wiper's speed will be increased in comparison to the previous one. The fourth press will turn on the fourth led (orange), and the wiper speed will be increased in accordance with the previous one. The microcontroller (vehicle) is turned off after the fifth click.
# 4 W'S
## WHAT IS WIPER SYSTEM
* Windscreen wipers are necessary for maintaining sufficient view for the driver, especially in modern high-speed cars.
## WHY WIPER SYSTEM
* To keep the windscreen clean enough to give adequate view at all times.
## WHEN TO USE WIPER SYSTEM
* The windshield wipers remove rain and snow from the windshield, while the headlights improve visibility at night.
## WHO DISCOVERED WIPER SYSTEM
* Mark Anderson invented on 1902

## ENGINE ON STATE

![168195223-4ffe543a-e10e-4558-8f71-7fb72f42b8bf](https://user-images.githubusercontent.com/68016355/168423148-5cd23165-a316-4ccb-9643-e8c1184bb76a.png)

## WHEN WIPER SPEED IS LOW
![168207426-c329cffd-af87-42a0-bc8b-d875a0c1e922](https://user-images.githubusercontent.com/68016355/168423216-8e3e3bc6-7434-4a49-859f-02740e74d574.png)

## WHEN WIPER SPEED ID MODERATE

![168195256-babaf133-6f22-4961-be93-fd78d63f2ae4](https://user-images.githubusercontent.com/68016355/168423266-50a27d7b-cfee-4fae-a89d-3ccdb7cd04b1.png)

## WHEN WIPER SPEED IS HIGH

![168207493-3c120a56-da8b-4e6d-a229-3107ec348395](https://user-images.githubusercontent.com/68016355/168423294-c4e0adb0-be50-42be-ba2f-a013916a0cd0.png)

## ENGINE OFF STATE

![168195291-cc56a05a-6c2d-46f8-842a-e36059586f07](https://user-images.githubusercontent.com/68016355/168423329-d779c1d8-790c-4b3a-9cb1-c7aaedcacea3.png)

# CONCLUSION 
* Wiper control system is successfully implemented using STM32F407VGT6 microcontroller.
