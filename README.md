# ARM Cortex-M4 STM32F401 Drivers

This repository contains a collection of peripheral drivers for the ARM Cortex-M4 microcontroller STM32F401 series. These drivers simplify the interaction with various peripherals on the STM32F401 microcontroller, including the RCC (Reset and Clock Control), GPIO (General-Purpose Input/Output), USART (Universal Synchronous Asynchronous Receiver Transmitter), EXTI (External Interrupts), STK (SysTick Timer), and NVIC (Nested Vector Interrupt Controller).

## Overview

Developing firmware for microcontrollers can be a complex task, especially when dealing with low-level hardware interactions. This repository aims to simplify the development process by providing a set of well-structured and documented drivers for key peripherals of the STM32F401 microcontroller.

## Features

### Supported Peripherals

1. **RCC (Reset and Clock Control) Driver**
   - Initialize system clocks.
   - Enable/disable peripheral clocks.

2. **GPIO (General-Purpose Input/Output) Driver**
   - Configure pin modes (input, output, alternate function).
   - Set pin values (high, low).
   - Configure pull-up/pull-down resistors.
   - Toggle pin values.

3. **USART (Universal Synchronous Asynchronous Receiver Transmitter) Driver**
   - Initialize and configure USART communication.
   - Transmit and receive data.
   - Enable/disable USART.

4. **EXTI (External Interrupts) Driver**
   - Configure external interrupts for specific pins.
   - Set interrupt triggers (rising edge, falling edge, etc.).
   - Handle interrupt events.

5. **STK (SysTick Timer) Driver**
   - Initialize and configure the SysTick timer.
   - Generate time delays.
   - Implement timing functions.

6. **NVIC (Nested Vector Interrupt Controller) Driver**
   - Enable/disable interrupts.
   - Set interrupt priorities.
   - Handle interrupt requests.

## Usage

1. Clone the repository to your development environment.

2. Include the necessary header files for the peripheral drivers you intend to use in your project.

3. Implement your application logic, utilizing the provided drivers to interact with the STM32F401 microcontroller's peripherals.

4. Build and flash your project onto the STM32F401 microcontroller.

## Folder Structure

The repository is organized as follows:

- `RCC_Driver`: Reset and Clock Control Driver.
- `GPIO_Driver`: General-Purpose Input/Output Driver.
- `USART_Driver`: Universal Synchronous Asynchronous Receiver Transmitter Driver.
- `EXTI_Driver`: External Interrupts Driver.
- `STK_Driver`: SysTick Timer Driver.
- `NVIC_Driver`: Nested Vector Interrupt Controller Driver.
