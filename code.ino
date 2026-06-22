#include "DHTesp.h"

const int DHT_PIN = 15;

DHTesp dht;

void setup() {

  Serial.begin(115200);

  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {

  TempAndHumidity data = dht.getTempAndHumidity();

  Serial.print("Temperature: ");
  Serial.print(data.temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(data.humidity);
  Serial.println(" %");

  Serial.println("----------------");

  delay(2000);
}