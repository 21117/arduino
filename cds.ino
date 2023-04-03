int cds = A1; // Analog input pin that the potentiometer is attached to
int cdsValue = 0; // value read from the pot
void setup() {
Serial.begin(9600);
}
void loop() {
cdsValue  = analogRead(cds); // read the analog in value:
Serial.print("sensor = "); // print the results to the serial monitor:
Serial.println(cdsValue);
// for the analog-to-digital converter to settle // after the last reading:
delay(20); // wait 2 milliseconds before the next loop
}
