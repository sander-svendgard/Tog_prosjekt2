#pragma once
#define WIFI_SSID "NTNU-IOT" 
#define WIFI_PASSWORD ""

#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "NTNU-IOT";
const char* password = ""; //det her skal stjeles ja

const char* ssid     = WIFI_SSID;
const char* password = WIFI_PASSWORD;
32de8c4a7d1608a848cada597f899898a1f4451b

void setup() {
  Serial.begin(9600);
  delay(1000);

  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);  // Start connecting

  while (WiFi.status() != WL_CONNECTED) { // Wait until connected
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());   
}


