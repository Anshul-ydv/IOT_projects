# 🚨 IoT-Based Safety Systems

This repository includes two innovative IoT-based engineering projects developed to improve safety in critical scenarios:

- **Smart Fire Extinguisher Mechanism**
- **Automatic Railway Safety System**

Both systems are designed for real-time hazard detection, autonomous response, and remote monitoring using modern microcontroller and sensor networks.

---

## 🔥 Smart Fire Extinguisher Mechanism

An intelligent, IoT-enabled fire suppression system capable of detecting, targeting, and extinguishing fires without human intervention.

### 🧠 Key Features

- Infrared flame sensors & thermocouples for fire detection
- Arduino Uno + Decision Tree Classifier for real-time inference
- Servo motor controlled directional water nozzle
- ESP8266-based Wi-Fi telemetry & mobile dashboard
- MQTT for real-time data logging and alerts

### 🧪 Performance

- **Detection latency**: ~1.18 seconds  
- **Actuation latency**: ~0.82 seconds  
- **Total suppression time**: <2 seconds  
- **Suppression success rate**: 95–100% up to 1.5 meters  
- **Power**: LiPo battery with solar/kinetic charging optional

### 📡 Architecture

- Sensor Array: 3 IR flame sensors + 2 K-type thermocouples
- Control Unit: Arduino Uno + ESP8266 Wi-Fi
- Actuation: Servo motor for nozzle rotation + mini water pump
- Dashboard: Real-time web/mobile UI for logs, alerts, telemetry

---

## 🚄 Automatic Railway Safety System

An IoT-based accident prevention system designed for unmanned railway crossings and hazardous railway environments.

### ⚙️ Core Components

- ESP32 Microcontroller for control & communication
- Obstacle detection using Ultrasonic Sensor
- Fire, Gas, and Temperature sensors for hazard awareness
- Email/SMS alert system for real-time emergency notification
- GSM/GPRS and Wi-Fi for robust communication

### 🧠 Intelligence

- Autonomous detection of threats (obstructions, fire, gas leaks)
- Automated gate/motor response at level crossings
- Prioritized hazard classification and multi-mode alerting

### 💡 Future Enhancements

- AI-driven predictive analytics for early warnings
- 5G + Edge Computing for ultra-low-latency control
- Geo-fencing and blockchain integration for secure, smart railways

---

## 🛠️ Tech Stack

| Component      | Technology Used                           |
|----------------|-------------------------------------------|
| Microcontrollers | Arduino Uno, ESP8266, ESP32              |
| Sensors        | IR Flame, Thermocouple, Ultrasonic, Gas   |
| Communication  | MQTT, Wi-Fi, GSM, SMS                     |
| Cloud Platform | ThingSpeak, Custom Mobile Dashboard       |
| Programming    | C/C++ (Arduino IDE), MQTT, Embedded JSON  |

---
