#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <SimpleDHT.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int cds = A0; // Analog input pin that the potentiometer is attached to
int cdsValue = 0;

int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);

void setup()
{
  Serial.begin(9600);
  
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("Ywrobot Arduino!");
   lcd.setCursor(0,2);
  lcd.print("Arduino LCM IIC 2004");
   lcd.setCursor(2,3);
  lcd.print("Power By Ec-yuan!");
}


void loop()
{
  cdsValue  = analogRead(cds); // read the analog in value:
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("cds = ");delay(100);

Serial.println("=================================");
  Serial.println("Sample DHT11...");
byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;

  
if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.print(SimpleDHTErrCode(err));
    Serial.print(","); Serial.println(SimpleDHTErrDuration(err)); delay(1000);
    return;
  }

  lcd.backlight();
  lcd.setCursor(1,1);
  Serial.print((int)temperature); 
  lcd.print(" *C, "); 

  lcd.backlight();
  lcd.setCursor(1,8);
  Serial.print((int)humidity); 
  lcd.println(" H");
  
  // DHT11 sampling rate is 1HZ.
  delay(1500);
}
