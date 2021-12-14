/*
#include <Arduino.h>

const int analogInPin = A0;                 // Analog Input
const int ledpin = 13;                      // RED LED

int sensorValue = 0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogInPin);     // read analog input pin 0

  if (sensorValue >= 600)                    // A definir (valeur critique)
  {
    digitalWrite(ledpin, HIGH);
    delay(50);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  } 
  
  Serial.print ("sensor = ");      
  Serial.print("\n");
  Serial.println(sensorValue, DEC);         // prints the value read
  Serial.print( "ppm" );
 
  delay(100);                               // wait 100ms for next reading
}
*/