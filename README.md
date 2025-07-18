 LPG Leakage Detection and Monitoring System 🔥📟

🔍 Overview

The LPG Leakage Detection and Monitoring System is a safety-focused embedded project designed to detect hazardous gas leaks and prevent potential accidents such as fire or explosion. It uses sensors and automation to monitor LPG concentrations in real-time and initiate critical responses like valve shut-off, sound alarms, and GSM-based notifications to users and emergency services.

🎯 Objectives

- Real-time detection of LPG gas leaks.
- Automated gas valve shut-off during leakage.
- Immediate alerting through:
  - Buzzer and LED (local alert).
  - GSM module (remote SMS alerts to user & fire station).
- Fire detection via IR flame sensor.
- Ensuring domestic and industrial safety using low-cost embedded systems.

🔧 Hardware Used

| Component         | Quantity | Purpose                                |
|------------------|----------|----------------------------------------|
| Arduino UNO       | 1        | Microcontroller for system control     |
| MQ-2 Sensor       | 2        | Detects LPG and other gases            |
| IR Flame Sensor   | 1        | Detects fire through IR radiation      |
| Servo Motor       | 1        | Closes gas valve when leak detected    |
| GSM Module (SIM900A)| 1     | Sends SMS alerts                       |
| LED               | 1        | Visual alert for leakage               |
| Buzzer            | 1        | Audio alert                            |
| Power Supply (12V)| 1        | Powers GSM module                      |

💰 Total Cost: ₹1995  
📦 Budget Friendly + Scalable Design

🧠 System Working (Methodology)
<img width="403" height="388" alt="image" src="https://github.com/user-attachments/assets/a7a55dd4-f40a-489a-b5fb-c7baf795de07" />
<img width="602" height="695" alt="image" src="https://github.com/user-attachments/assets/42159508-9a77-40c0-996d-774a9c6ce382" />



1. Leak Detection: MQ-2 sensors detect LPG leak.
2. Fire Detection: IR flame sensor monitors flames.
3. Immediate Response:
   - LED & buzzer are activated.
   - Servo motor shuts gas valve.
   - GSM module sends SMS to user & fire station with location.
4. Flowchart:  
   <img width="217" height="477" alt="image" src="https://github.com/user-attachments/assets/f1a08aca-eb8c-468d-bad6-089337e5840f" />

 💻 Software Used

- Arduino IDE  
  For programming and uploading code to the Arduino UNO.

🧪 Test Results

- Leak Simulated → System triggered all alerts + closed gas supply.
- Fire Simulated → Flame detected + alert SMS sent to fire station.
- Sensor Response  
  - MQ-2 → Detects from 200ppm to over 1000ppm.
  - IR Sensor → Detects fire up to 30 cm.

📸 Snapshots available in 
<img width="243" height="320" alt="image" src="https://github.com/user-attachments/assets/b096ac74-46e4-4df2-bc9c-1f2e23bef5d2" />
<img width="232" height="323" alt="image" src="https://github.com/user-attachments/assets/c81556a0-1787-4fbf-87bb-ce3b30f86302" />
<img width="512" height="515" alt="image" src="https://github.com/user-attachments/assets/2b96c617-7680-4259-a01b-90a3f07e7d0e" />


📈 Future Enhancements

- Smart home integration (Google Home, Alexa).
- AI-based leak prediction & analytics.
- Cloud dashboard for logs, trends, and remote control.
- Multi-gas detection (Methane, CO, etc.).

📅 Project Timeline

| Phase                           | Timeline         |
|--------------------------------|------------------|
| Problem Identification          | Oct 2024         |
| Design and Literature Survey    | Nov 2024         |
| Hardware & Software Development| Dec 2024         |
| Testing & Evaluation            | Jan 2025         |

🏫 Academic Info

- Department: Electronics & Instrumentation Engineering  
- Institution: S.I.T., Tumakuru  
- Project Year: 2024-25







