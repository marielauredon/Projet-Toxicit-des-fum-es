/*    
    #include <Arduino.h>
    #include "DFRobot_WiFi_IoT_Module.h"
    #include <SoftwareSerial.h>
    int Relay = 3;

    DFRobot_WiFi_IoT_Module_I2C IoT;
    DFRobot_WiFi_IoT_Module_I2C IoT;

    const char *WIFI_SSID = "hitest";
    const char *WIFI_PASSWORD = "12345678";

    const char *EASY_IOT_SERVER = "iot.dfrobot.com.cn";
    const char *EASY_IOT_PORT = "1883";
    const char *EASY_IOT_ID = "smofVJDMR";
    const char *EASY_IOT_PWD = "ymoBVJvMgz";
    const char *SUBSCRIBE_TOPIC = "9qnYVJDMR";
    const char *PUBLISH_TOPIC = "9qnYVJDMR";
    const char *EASY_IOT_SEND_MESSAGE = "Send_Message";

    String data = "0";
    void callback(const char*topic,const char*message)
    {
     Serial.println("Receive [ " + (String)topic + "]," + "Message : " + (String)message);
     data = (String)message;
    }

    float getSensorCO()
    {
      uint16_t val;
      val = analogRead(A0);
      return val;
    }

    void setup(void){
      Serial.begin(115200);

      while(IoT.begin() != 0){
        Serial.println("init ERROR!!!!");
        delay(100);
      }
      Serial.println("init Success");

      while(IoT.connectWifi(WIFI_SSID, WIFI_PASSWORD) != 0){
        Serial.print(".");
        delay(100);
      }
      Serial.println("Wifi Connect SUccess");

      while(IoT.MQTTBegin(EASY_IOT_SERVER, EASY_IOT_PORT, EASY_IOT_ID, EASY_IOT_PWD) != 0){
        Serial.print(".");
        delay(100);
      }
      Serial.println("MQTT Connect Success");

      IoT.setCallBack(callback);

      while(IoT.subscribe(SUBSCRIBE_TOPIC) != 0){
        Serial.print(".");
        delay(100);
      }
      Serial.println("Subscribe Topic Success");

      pinMode(13, OUTPUT);
      digitalWrite(13, HIGH);
      pinMode(Relay, OUTPUT);
    }
    }

*/
