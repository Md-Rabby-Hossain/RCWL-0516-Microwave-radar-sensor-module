# ESP32 + RCWL-0516 Motion Detection System

This project demonstrates a simple motion detection system using the RCWL-0516 microwave radar sensor with ESP32.

## 📡 Features
- Motion detection using microwave radar
- ESP32 GPIO input reading
- Serial Monitor output
- Serial Plotter visualization support

## 🔌 Hardware Used
- ESP32 Dev Board
- RCWL-0516 Microwave Motion Sensor
- Jumper wires
- 5V power supply (via ESP32 VIN or external)

## ⚙️ Working Principle
The RCWL-0516 detects motion using Doppler radar technology. When movement is detected, it outputs a HIGH signal to the ESP32.

## 📊 Output Modes
- Serial Monitor: Motion / No Motion logs
- Serial Plotter: 0 (no motion) / 1 (motion detected)

## 🔌 Wiring

| RCWL-0516 | ESP32 |
|----------|------|
| VIN      | 5V (VIN) |
| GND      | GND |
| OUT      | GPIO 27 |

## 💻 Code Example
See `src/main.ino`

## 🚀 Future Improvements
- Add buzzer alarm
- Add LED indicator
- Combine with ESP32-CAM for smart security system
