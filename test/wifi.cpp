#pragma once
#define WIFI_SSID "eduroam" 
#define WIFI_PASSWORD "Sala200521"

#include <Arduino.h>
#include <WiFi.h>
const char* ssid = "eduroam";
const char* password = "Sala200521";

void setup() {
  Serial.begin(115200);
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
  Serial.println(WiFi.localIP());  // Show your ESP’s IP
}

void loop() {j
  // Your code here (now you’re online!)
}

