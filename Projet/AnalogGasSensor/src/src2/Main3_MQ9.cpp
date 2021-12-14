/*
#include <Arduino.h>

 
 MQ9 
 modified on 24 Nov 2021
 by Charbonnier Gaetan


int LED = 13;
int GASA0 = A0;
int GASA1 = A1;
int gasvalue;

void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop()
{
    int alarm = 0;
    float sensor_volt;
    float RS_gas;
    float ratio;
    //-Replace the name "R0" with the value of R0 in the demo of First Test -/
    float R0 = 0.91; //Resistance du capteur en concentration de 1000ppm de GPL
    int sensorValue = analogRead(A0);
    sensor_volt = ((float)sensorValue / 1024) * 5.0;
    RS_gas = (5.0 - sensor_volt) / sensor_volt; // RS Resistance interne du capteur
    ratio = RS_gas / R0;                        // ratio = RS/R0

    ppm = *ratio/
                                                //------------------------------------------------------------/
    Serial.print("sensor_volt = ");
    Serial.println(sensor_volt);
    Serial.print("RS_ratio = ");
    Serial.println(RS_gas);
    Serial.print("Rs/R0 = ");
    Serial.println(ratio);
    Serial.print("\n\n");
    if (alarm == 0)
        digitalWrite(LED, HIGH);
    else if (alarm == 1)
        digitalWrite(LED, LOW);
    delay(1000);
}
*/