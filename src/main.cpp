#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(300);
  Serial.println("\nHello from ESP32!");
}

void loop() {
  Serial.println("loop tick");
  delay(1000);
}

//hei