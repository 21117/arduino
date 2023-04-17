#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <SimpleDHT.h>

LiquidCrystal_I2C lcd(0x27,16,2);

const int cds = A0;

SimpleDHT11 dht11(2);

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  int cdsValue  = analogRead(cds);

  byte temperature = 0;
  byte humidity = 0;
  
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.print(SimpleDHTErrCode(err));
    Serial.print(","); Serial.println(SimpleDHTErrDuration(err)); delay(1000);
    return;
  }
 
  lcd.setCursor(0,0);
  lcd.print("cds = ");
  lcd.print((int)cdsValue); 

  lcd.setCursor(1,1);
  lcd.print("T = "); 
  lcd.print((int)temperature);

  lcd.setCursor(8,1);
  lcd.println("H = ");
  lcd.print((int)humidity);
  
  delay(1000);
}
