#include <Servo.h>
int pinServo = 9; // orange ke data, merah ke vcc, coklat ke ground
Servo myservo;

int tombol = A0;

void setup() {
  myservo.attach(pinServo);
  pinMode(7, OUTPUT); //output laser
  digitalWrite(7, HIGH); //output laser
  Serial.begin(9600);
  
}

void loop() {
  if (digitalRead(tombol)==1){
    myservo.write(25);
    delay(2000);
  }
  else {
    ;
  }

  myservo.write(0);
}
