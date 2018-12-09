/*
  Arduino Starter Kit example
 Project 5  - Servo Mood Indicator

 This sketch is written to accompany Project 5 in the
 Arduino Starter Kit

 Parts required:
 servo motor
 10 kilohm potentiometer
 2 100 uF electrolytic capacitors

 Created 13 September 2012
 by Scott Fitzgerald

 http://www.arduino.cc/starterKit

 This example code is part of the public domain
 */

// include the servo library
#include <Servo.h>

Servo myServo9;  // create a servo object
Servo myServo10;
Servo myServo11;
Servo myServo12;

int angle;   // variable to hold the angle for the servo motor
int signe;

void setup() {
  myServo9.attach(9); // attaches the servo on pin 9 to the servo object
  myServo10.attach(10);
  myServo11.attach(11);
  myServo12.attach(12);
  Serial.begin(9600); // open a serial connection to your computer
  angle = 0;
  signe = 1;
}

void loop() {

  // scale the numbers from the pot
  angle += signe*1;

  // print out the angle for the servo motor
  Serial.print("angle: ");
  Serial.println(angle);

  // set the servo position
  myServo9.write(angle);
  myServo10.write(angle);
  myServo11.write(angle);
  myServo12.write(angle);

  // wait for the servo to get there
  delay(100);

  if (angle >= 180 || angle <= 0) {
    signe = signe * -1;
  }
}


