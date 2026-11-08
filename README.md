# Smart Motion Detection System

An IoT-based motion detection project developed using an ESP8266 microcontroller, PIR motion sensor, OLED display, and active buzzer.

## Project Overview

The Smart Motion Detection System detects movement using a PIR (Passive Infrared) sensor. When motion is detected, the system displays **"MOTION!"** on an OLED screen and activates an audible alarm using a buzzer.

When no movement is detected, the display shows **"NO MOTION"** and the buzzer remains off.

The project was developed as part of the **Basics of Digitalisation** course at Technische Hochschule Ostwestfalen-Lippe (TH OWL).

## Hardware Components

- ESP8266 (Wemos D1 Mini)
- PIR Motion Sensor (HC-SR501)
- OLED Display (SSD1306)
- Active Buzzer
- Mini Breadboard
- Jumper Wires

## Software & Technologies

- C++ / Arduino
- Arduino IDE
- U8g2 Library
- I2C Communication
- ESP8266 Microcontroller

## System Functionality

1. Initialize the ESP8266, OLED display, PIR sensor, and buzzer.
2. Continuously monitor the PIR sensor.
3. Detect movement in the monitored area.
4. Display "MOTION!" and activate the buzzer when movement is detected.
5. Display "NO MOTION" and deactivate the buzzer when no movement is detected.

## System Architecture

**Input:** PIR Motion Sensor

**Processing:** ESP8266 (Wemos D1 Mini)

**Output:**
- OLED Display – Displays motion status.
- Active Buzzer – Provides an audible alert.

## Future Improvements

- Implement MQTT communication over Wi-Fi.
- Send motion notifications to another ESP8266 or a mobile application.
- Store motion detection events for monitoring and analysis.

## Challenges

- Uploading and debugging code on the ESP8266.
- Hardware wiring and troubleshooting.
- Configuring the OLED display and I2C communication.

## Project Demonstration

The system was successfully demonstrated using real hardware. The PIR sensor detected movement, the OLED displayed the corresponding status, and the buzzer provided an audible alert.

## Academic Project

**Institution:** Technische Hochschule Ostwestfalen-Lippe (TH OWL)  
**Course:** Basics of Digitalisation  
**Academic Year:** 2026/2027

**Project Team:**
- Ihab Rebouh




Developed as an academic engineering project.
