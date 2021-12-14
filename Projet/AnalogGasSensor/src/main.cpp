#include <Arduino.h>

const int analogInPin_CO = A0;                 // Analog Input
const int analogInPin_CO2 = A3;                // Define which analog input channel you are going to use
const int ledpin_CO = 11;                      // RED LED
const int ledpin_CO2 = 13;                     // RED LED

int sensorValue_CO = 0;
int sensorValue_CO2 = 0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin_CO, OUTPUT);
  pinMode(ledpin_CO2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  sensorValue_CO = analogRead(analogInPin_CO);     // read analog input pin 0
  sensorValue_CO2 = analogRead(analogInPin_CO2);   // read analog input pin 0
  
  if (sensorValue_CO >= 600)                    // A definir (valeur critique)
  {
    digitalWrite(ledpin_CO, HIGH);
    delay(50);
  }
  else
  {
    digitalWrite(ledpin_CO, LOW);
  } 

  if (sensorValue_CO2 >= 600)                    // A definir (valeur critique)
  {
    digitalWrite(ledpin_CO2, HIGH);
    delay(50);
  }
  else
  {
    digitalWrite(ledpin_CO2, LOW);
  } 
  
  Serial.print ("sensor CO = ");      
  Serial.println(sensorValue_CO, DEC);         // prints the value read
  Serial.print( "ppm" );

  Serial.print("\n");
  Serial.print ("sensor CO2 = ");      
  Serial.println(sensorValue_CO2, DEC);         // prints the value read
  Serial.print( "ppm" );
 
  delay(100);                               // wait 100ms for next reading
}