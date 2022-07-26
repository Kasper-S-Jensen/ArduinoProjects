#include <Arduino.h>

int readPin = A3;
int readVal;
int delayTime=750;
float readInVolt;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  readVal= analogRead(readPin);
  readInVolt =(5./1023.)*readVal;
  Serial.print("The voltage from pin: ");
  Serial.print(readPin);
  Serial.print(" is:  ");
  Serial.println(readInVolt);
  delay(delayTime);




}