#include <Servo.h>
int pinServo = 9; // orange ke data, merah ke vcc, coklat ke ground
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(pinServo); //myservo.attach(9);
}

void loop() {
  myservo.write(50);
  delay(1000);
  myservo.write(0);
  delay(1000);
}
