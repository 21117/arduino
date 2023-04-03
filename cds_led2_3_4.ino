int cds = A0; // Analog input pin that the potentiometer is attached to
int cdsValue = 0; // value read from the pot
void setup() {
   pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
Serial.begin(9600);
}
void loop() {
cdsValue  = analogRead(cds); // read the analog in value:
Serial.print("sensor = "); // print the results to the serial monitor:
Serial.println(cdsValue);
if((cdsValue)<500)
{ digitalWrite(2,HIGH); //조도센서값이 500보다 작으면 불을 켜도록 코딩
}
else 
{ digitalWrite(2,LOW); }
if((cdsValue)<500)
{ digitalWrite(3,HIGH); //조도센서값이 500보다 작으면 불을 켜도록 코딩
}
else 
{ digitalWrite(3,LOW); }
if((cdsValue)<500)
{ digitalWrite(4,HIGH); //조도센서값이 500보다 작으면 불을 켜도록 코딩
}
else 
{ digitalWrite(4,LOW); }
// for the analog-to-digital converter to settle // after the last reading:
delay(20); // wait 2 milliseconds before the next loop
}
