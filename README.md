# Energy-Autonomous IoT Sensor Node

This repository documents the design and implementation of a
low-power IoT sensing system capable of operating using harvested
ambient energy.

The project explores firmware strategies and system architecture
for embedded devices deployed in power-constrained environments.

## Purpose of the Work
The purpose of this project is to investigate how energy harvesting
and power-aware firmware techniques can enable autonomous operation
of IoT sensor nodes without continuous external power sources.

## System Description
The system is composed of three primary functional blocks:

### Energy Acquisition
- Collection of ambient RF energy
- Temporary energy storage using passive elements

### Power Conditioning
- Regulation and management of harvested energy
- Controlled power delivery to the embedded system

### Embedded Processing
- ESP32-based sensing and control
- Periodic wake-up and deep sleep cycles
- Energy-aware execution of sensing tasks

## Operating Methodology
1. Ambient energy is collected and stored
2. Power management circuitry regulates available energy
3. The microcontroller wakes when sufficient energy is available
4. Sensor measurements are performed
5. The system returns to deep sleep to conserve power

This cyclic operation enables extended autonomous deployment.

## Hardware Platform
- ESP32 microcontroller
- RF energy harvesting circuit
- Power management IC
- Energy storage element
- Sensor modules and supporting components

## Firmware Environment
- Embedded C/C++ programming
- Arduino-based development workflow
- ESP32 power management features
- Deep sleep and duty-cycled operation

## Repository Layout
energy-autonomous-iot-node/
├── docs/ # System diagrams and documentation
├── firmware/ # Low-power embedded firmware
└── README.md

## Development Progress
✔ Energy-aware firmware implemented  
✔ Sleep–wake operation verified  
✔ Autonomous sensing demonstrated  
🔄 Extended stability evaluation planned

## Academic Context
This repository serves as a demonstration of concepts related to:
- Energy-harvesting embedded systems
- Ultra-low-power IoT design
- Sustainable sensor node architectures
