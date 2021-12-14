/* 
#include <Arduino.h>


 MQ9 
 modified on 24 Nov 2021
 by Charbonnier Gaetan


void setup()
{
    Serial.begin(9600);
}
void loop()
{
    float sensor_volt;
    float RS_gas;
    float ratio;
    float ratiox;
    float ppm;
    //-Replace the name "R0" with the value of R0 in the demo of First Test -/
    float R0 = 39.5;
    int sensorValue = analogRead(A0);
    sensor_volt = ((float)sensorValue / 1024) * 5.0;
    RS_gas = (5.0 - sensor_volt) / sensor_volt; // Depend on RL on yor module
    ratio = RS_gas / R0;                        // ratio = RS/R0
    ratiox = pow(ratio,-2.625);
    ppm = (3572.6*ratiox);
                                                //------------------------------------------------------------/
    
    Serial.print("sensor_volt = ");
    Serial.println(sensor_volt);
    Serial.print("RS_ratio = ");
    Serial.println(RS_gas);
    Serial.print("Rs/R0 = ");
    Serial.println(ratio);
    Serial.print("\n\n");
    Serial.print("SensorValue = ");
    Serial.println(sensorValue);
    Serial.print("ppm = ");
    Serial.println(ppm);
    delay(1000);
}
*/
