#include <Servo.h>

int motor1PinA = 2;
int motor1PinB = 3;
int enablePin = 11;
Servo myservo;

void setup() {
  pinMode(motor1PinA, OUTPUT);
  pinMode(motor1PinB, OUTPUT);
  pinMode(enablePin, OUTPUT);
  analogWrite(enablePin, 1000);
  myservo.attach(9);
}

void loop() {
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  myservo.write(125);
  delay(3900);

  myservo.write(90);
  delay(300);
  myservo.write(80);
  delay(300);
  myservo.write(80);
  delay(400);
  myservo.write(85);
  delay(400);
  myservo.write(85);
  delay(400);
  myservo.write(85);
  delay(400);
  myservo.write(90);
  delay(300);
  myservo.write(90);
  delay(400);
  

  myservo.write(110);
  delay(1000);
  myservo.write(120);
  delay(950);
  myservo.write(115);
  delay(1000);
  myservo.write(133);
  delay(1500);


 

  
}
