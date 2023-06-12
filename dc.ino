int motor1PinA=2;
int motor1PinB=3;
int enable =11;

void setup() {
  pinMode(motor1PinA,OUTPUT);
  pinMode(motor1PinB,OUTPUT);
  pinMode(enable ,OUTPUT);
  analogWrite(enable ,200);
}

void loop() {
  digitalWrite(motor1PinA,HIGH);
  digitalWrite(motor1PinB,LOW);
  delay(1000);
}
