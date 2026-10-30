
# ESP32-Based Predictive Motor Maintenance

**Project Name:** MOTORGUARD AI  
**Domain:** Embedded Systems and Internet of Things (IoT)  
**Platform:** ESP32  
**Programming Language:** Embedded C/C++  
**Development Environment:** Arduino IDE

---

## 1. Introduction

ESP32-Based Predictive Motor Maintenance is a project focused on monitoring motor conditions through vibration analysis and anomaly detection.

The objective is to identify unusual motor behaviour by monitoring vibration levels and comparing them against predefined thresholds.

The proposed system uses an ESP32 microcontroller and an ADXL335 accelerometer for vibration monitoring.

## 2. Problem Statement

Unexpected motor failures can increase maintenance costs and cause production downtime.

Traditional reactive maintenance identifies problems after equipment failure. Predictive maintenance aims to identify abnormal operating conditions earlier through continuous monitoring.

## 3. Project Objectives

- Monitor motor vibration levels.
- Identify abnormal vibration conditions.
- Classify motor conditions using threshold-based detection.
- Display monitoring information through the Serial Monitor.
- Develop a low-cost motor condition monitoring solution.

## 4. Hardware Components (Proposed System)

| Component | Purpose |
|---|---|
| ESP32 Development Board | Embedded processing |
| ADXL335 Accelerometer | Three-axis vibration sensing |
| DC Motor | Motor under observation |
| Breadboard | Circuit connections |
| Jumper Wires | Electrical connections |
| USB Cable | Programming and power |

## 5. Software Technologies

- Arduino IDE
- Embedded C/C++
- ESP32
- Serial Monitor
- Serial Plotter

## 6. Working Principle

The intended monitoring architecture follows these stages:

1. Motor vibration is sensed using an accelerometer.
2. Analog signals are acquired by the ESP32 ADC.
3. Vibration features are calculated.
4. Features are compared against predefined thresholds.
5. The system reports the motor condition.

## 7. Current Software Implementation

The uploaded firmware implements a software simulation of motor conditions.

It supports four selectable operating modes:

| Command | Motor Condition |
|---|---|
| 1 | Healthy Motor |
| 2 | Shaft Imbalance |
| 3 | Bearing Fault |
| 4 | Severe Vibration |

The simulation generates illustrative vibration, temperature and RPM values.

### Detection Thresholds

- Below 1.0: NORMAL
- 1.0 to below 2.0: WARNING
- 2.0 and above: CRITICAL

The values are simulated and are not actual sensor measurements.

## 8. Running the Project

1. Install Arduino IDE.
2. Install ESP32 board support.
3. Open `sketch.ino`.
4. Select the appropriate ESP32 development board.
5. Connect the ESP32 through USB.
6. Upload the firmware.
7. Open Serial Monitor.
8. Set the baud rate to 115200.
9. Enter commands 1, 2, 3 or 4 to select a motor condition.

## 9. Future Enhancements

- Physical ADXL335 sensor integration.
- Real-time vibration acquisition.
- RMS and peak amplitude analysis.
- Improved filtering and calibration.
- Wireless monitoring using Wi-Fi.
- IoT dashboard and notifications.
- Machine-learning-based anomaly detection.

## 10. Project Team

- Mohammad Reyhan
- Syed Faizan
- Amaan Pasha Shaikh

**Institution:** Koneru Lakshmaiah Education Foundation  
**Course:** Embedded Systems (25EC2206E)

## 11. Project Status

The current firmware demonstrates software simulation of motor operating conditions and threshold-based anomaly classification.

Physical sensor integration and experimental validation are planned development stages.

## 12. Project Visuals

### Proposed Hardware Prototype

The following image represents the conceptual hardware arrangement for the ESP32-Based Predictive Motor Maintenance system.

It illustrates the proposed integration of:

- ESP32 Development Board
- ADXL335 Accelerometer
- Breadboard
- Jumper Wires
- DC Motor

**Image Location:** `Hardware image/prototype-concept.jpg`

*Note: This is a conceptual hardware illustration and not a photograph of an assembled physical prototype.*

---

## MOTORGUARD AI

**Predict Today, Prevent Tomorrow.**
