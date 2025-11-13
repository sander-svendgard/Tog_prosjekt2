#include <stdio.h>
#include <Arduino.h>
#include "bmi160.h" 
#include "i2c_driver.h"
#include <Wire.h>

void setup() {
    Wire.begin(sda_pin,scl_pin);
    if (!BMI160.begin(BMI160GenClass::I2C_MODE, i2c_addr)) {
    Serial.println("BMI160 initialization failed!");
    while (1); // Halt if initialization fails
  }

  Serial.println("BMI160 initialized successfully in I2C mode!");
}



void databehandling{ 

}

void main {
    char str[] = "Geeks";
    pritnf("The string is: %s\n", str);
    return 0;
}