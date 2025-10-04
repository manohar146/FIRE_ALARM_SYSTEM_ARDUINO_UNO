# FIRE_ALARM_SYSTEM_ARDUINO_UNO
This project detects fire using a flame sensor and, upon detection, activates a buzzer with a 10-second alternating beep pattern (every 0.5 seconds), displays a warning message on a 16x2 I2C LCD, and logs activity via the Serial Monitor; otherwise, it continuously monitors the environment, shows "No Fire Detected" on the LCD, and updates the Serial Monitor with system status. 
# 🔥 Fire Alarm System (Arduino UNO)

## Overview
This project implements a fire detection and alert system using the Arduino UNO and flame sensor modules. It includes real-time monitoring, alert logic, and comprehensive documentation to support replication and understanding.

## Tech Stack
- Arduino UNO (fire_alarm_system.ino)
- Flame sensor
- Buzzer or alert module
- Excel for pin configuration
- Word documentation for system overview and circuit connections

## Files Included
- `fire_alarm_system.ino`: Arduino sketch for flame detection and alert logic
- `Fire_alarm_system Documentation.docx`: Detailed documentation of system design and operation
- `CIRCUIT_CONNECTION_FIRE_ALARM_SYSTEM.docx`: Circuit connection details and setup instructions
- `FIRE_ALARM_SYSTEM_PIN_OUTS.xlsx`: Pin configuration and hardware mapping
- `README.md`: Project overview and instructions

## Highlights
- Real-time flame detection using embedded sensors
- Alert system triggered via buzzer or output module
- Clear documentation and pin mapping for reproducibility
- Modular code structure for easy adaptation to other platforms

## How It Works
- Flame sensor detects fire presence and sends signal to Arduino UNO
- Arduino triggers an alert via buzzer or other output
- Circuit and pin mapping ensure accurate signal flow and control

## Author
**Manohar** – Embedded Systems Enthusiast  
📫 [GitHub Profile](https://github.com/manohar146)
