#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("choo choo, chug-a-chug-a-chug-a-chug choo choo");
  delay(100);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

//da virker det fyf