# Smart Environmental Monitor

## Project Overview

The Smart Environmental Monitor is an IoT-based project that uses an ESP32 microcontroller and a DHT22 sensor to monitor environmental conditions in real time. The system measures temperature and humidity and displays the readings through the Serial Monitor. The project is designed and tested using the Wokwi simulator.

## Working Principle

1. The DHT22 sensor continuously measures temperature and humidity from the surrounding environment.
2. The ESP32 reads the sensor values at regular intervals.
3. The collected data is processed and displayed on the Serial Monitor.
4. The system updates the readings every 2 seconds, enabling real-time monitoring.
5. The project can be extended to send sensor data to cloud platforms for remote monitoring and analysis.

## Components Used

* ESP32 Microcontroller
* DHT22 Temperature and Humidity Sensor
* Wokwi Simulator
* Arduino IDE

## Features

* Real-time temperature monitoring
* Real-time humidity monitoring
* Serial Monitor output
* IoT-based environmental monitoring
* Easy integration with cloud platforms

## Circuit Diagram

The DHT22 sensor is connected to the ESP32 microcontroller and provides temperature and humidity readings for processing and monitoring.

## Output

The ESP32 continuously reads data from the DHT22 sensor and displays the sensor readings in the Serial Monitor every 2 seconds.

## Screenshots

### Circuit Diagram

![Circuit Diagram](screenshot/circuit.jpg)

### Serial Monitor Output

![Output](screenshot/output.jpg)

## Wokwi Project Link

https://wokwi.com/projects/467541558211103745

## Applications

* Smart Home Monitoring
* Greenhouse Monitoring
* Weather Stations
* Industrial Environment Monitoring
* IoT Learning and Research

## Author

**Vaishnavi Pasham**
