#include <Arduino.h>
#include <MQ135.h>


const int ANALOGPIN=0;
float a;
float b;


MQ135 gasSensor = MQ135(ANALOGPIN, RZERO);

void setup(){
  Serial.begin(9600);


}

void loop(){
  float rzero = gasSensor.getRZero(); 
  Serial.print("RZERO=");  
  Serial.println(rzero); 

  float rs = gasSensor.getResistance();
  float ratio = rs/RZERO;

  //CO2
  a=110.47;
  b=-2.862;  
  float value=a*pow(ratio,b);
  Serial.print("CO2="); 
  Serial.print(value);
   Serial.print(" ");
  Serial.println("ppm");
  Serial.print("ou");
  Serial.print(" ");
  Serial.print(gasSensor.getPPM());
  Serial.print(" ");
  Serial.println("ppm");

  //CO
  a=605.18;
  b=-3.937;
  value=a*pow(ratio,b);
  Serial.print("CO="); 
  Serial.print(value);
  Serial.print(" ");
  Serial.println("ppm");

  //Benzène
  a=44.947;
  b=-3.445;
  value=a*pow(ratio,b);
  Serial.print("Benzène="); 
  Serial.print(value);
  Serial.print(" ");
  Serial.println("ppm");

  delay(5000);
}