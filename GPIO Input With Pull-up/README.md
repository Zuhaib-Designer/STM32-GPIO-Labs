# STM32 GPIO Lab 02: Digital Input Configuration

## Objective
Learn to configure an STM32 GPIO pin as a digital input and read a push button's state using the Wokwi simulator.
## Concept Covered
- pinMode() -- Configure a GPIO pin as an input.
- digitalRead() -- Read the digital input state.
- Serial.begin() -- Initialize serial communication.
- Serial.println() -- Display messages in the Serial Monitor.

## Working Principle

When using INPUT_PULLUP:

- Button released: HIGH (1)
- Button pressed: LOW (0)

This happens because the button connects the GPIO input to GND when pressed.

## Procedure
1. Connect the push button to a suitable GPIO input pin and GND.
2. Configure the pin using pinMode(BUTTON_PIN, INPUT)
3. Read the button state using digitalRead(BUTTON_PIN).
4. Use an if-else statement to check the input value.
5. Display the result in the Serial Monitor.

## Simulation Video
Watch the practical demonstration of STM32 GPIO digital input using a push button in the Wokwi simulator.

[GPIO Input Configuration](https://youtu.be/ooi0W3iBYgU).
