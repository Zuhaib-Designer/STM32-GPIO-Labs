# Lab 01: STM32 GPIO LED Blinking

## Objective
To learn how to configure an STM32 GPIO pin as an output and control an LED.

## Hardware and Software 
- STM32 Nucleo C031C6
- Wokwi Simulator
- GPIO Pin PA5
- Programming Language: C/C++

## Working Principle
The GPIO pin PA5 is configured as an output. The program turns the LED ON for one second and OFF for one second.

## Code Explanation
- pinMode(LED_PIN, OUTPUT) configures PA5 as an output.
- digitalWrite(LED_PIN, HIGH) turns the LED on.
- digitalWrite(LED_PIN, LOW) turns the LED off.
- delay(1000) pauses execution for 1000 milliseconds (1 Second).

## Project Files
- sketch.ino -- LED blinking program.
- diagram.json -- Wokwi circuit configuration.
- simulation.png -- Screenshot of the simulation.

