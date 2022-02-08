#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(22, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(touchRead(4));
  if(touchRead(4)<50){
    digitalWrite(22, HIGH);
  }
  else{
    digitalWrite(22, LOW);
  }
  delay(100);
}
