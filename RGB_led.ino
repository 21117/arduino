int Rpin = 9;   int Gpin = 11;    int Bpin = 10;
           void setup() 
                {
                 pinMode(Rpin, OUTPUT);    
                 pinMode(Gpin, OUTPUT);     
                 pinMode(Bpin, OUTPUT);
                }
           void loop()
               {
                 analogWrite(Rpin, 255);  analogWrite(Gpin, 0);    analogWrite(Bpin, 0); 
                 delay(1000); //빨강 
                 analogWrite(Rpin, 0);  analogWrite(Gpin, 255);     analogWrite(Bpin, 0);
                 delay(1000); //그린 
                 analogWrite(Rpin, 0);  analogWrite(Gpin, 0);    analogWrite(Bpin, 255); 
                 delay(1000); //블루
                
                }
