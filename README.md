<h1 align="center">
  <br>
  Automated Cat Feeder
  <br>
</h1>

## Overview
The Automated Cat Feeder is an embedded system built using [Lingua Franca](https://www.lf-lang.org/) (C target) to autonomously monitor and maintain a cat's food bowl. The system periodically measures the weight of the food bowl using a load cell. If the food drops below the target threshold (50 grams), it triggers a stepper motor to dispense food until the ideal weight (50-60 grams) is reached. 

The project features a calibration sequence on startup, median filtering to smooth out noisy load cell readings, and a safety cooldown mechanism that pauses measurements for 10 seconds if it detects anomalous readings (e.g., if the cat is currently eating or putting pressure on the bowl).

## Components
<table>
  <tr>
    <td> <a href="lib/motor.lf">motor.lf</a>: This is the reactor for the stepper motor, using modal reactors for modes IDLE, DISPENSE, and ERROR.</td>
  </tr>
  <tr>
    <td> <a href="lib/loadcell.lf">loadcell.lf</a>: This reactor handles the loadcell reaction, which is triggered every 1 second and takes 10 samples. It outputs a boolean determining whether the food bowl is above or below a certain threshold.</td>
  </tr>
  <tr>
    <td> <a href="feed.lf">feed.lf</a>: This is the main reactor, combining loadcell measurement and motor modal logic for the feeding process.</td>
  </tr>
</table>

## Hardware Requirements
* **Raspberry Pi:** The primary controller running the Lingua Franca program.
* **HX711 Load Cell Amplifier:** Wired to GPIO 5 (Data) and GPIO 6 (Clock) for reading the weight of the bowl.
* **Load Cell:** Attached to the base of the food bowl to measure weight.
* **Stepper Motor & HR8825 Driver:** Controls the dispensing mechanism (using `MOTOR2` output).
* **Cat Bowl:** The software assumes an empty bowl weight corresponding to a ~44g calibration threshold.

## Software Notes & Library Modifications
This project relies on custom-modified C libraries to ensure real-time safety and hardware stability on the Raspberry Pi:

* **HX711 Changes:** * **Memory Barriers:** Added `__sync_synchronize()` around direct GPIO register access to prevent the ARM processor from reordering instructions, ensuring accurate bit-banging.
  * **Timing Fixes:** Replaced empty `for`-loop delays (which modern compilers optimize away) with precise `usleep()` hardware delays to perfectly match the HX711 datasheet specifications.
  * **Memory Management:** Removed dynamic memory allocation (`malloc`/`free`) in the averaging functions to prevent fragmentation and memory leaks over long uptimes.
  * **Channel Simplification:** Hardcoded to strictly use Channel A at 128-gain for simpler, faster execution.
* **BCM2835 / HR8825 Changes:** Integrated alongside the Lingua Franca CMake build pipeline to cleanly support modular, on-demand hardware initialization and `fullstep` motor control.

## Usage

1. **Compile the program** using the Lingua Franca compiler:
   ```bash
   lfc feed.lf











To be done:
- overview
- usage
- hardware
- software(mod bcm + hx711 changes)



- demo
-

- assumptions
// TODO: potentially add interactive goal weight? email notif of feeding, take picture
//TODO:
// (1) potentially change pin input logic

