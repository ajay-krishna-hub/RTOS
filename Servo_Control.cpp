#include <Arduino.h>
#include <ESP32Servo.h>

#define SERVO_PIN 23

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pos = 0;pos <= 360;pos += 20)
  {
    myServo.write(pos);
    delay(500);
  }

  myServo.write(0);
  delay(2000);
}
