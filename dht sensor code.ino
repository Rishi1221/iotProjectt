// TECHATRONIC.COM  
 // DHT11 LIBRARY  
 // https://github.com/adafruit/DHT-sensor-library  
 #include "DHT.h"  
 DHT dht2(2,DHT11);  
 void setup()  
 {  
  Serial.begin(9600);  

#define BLYNK_TEMPLATE_ID "TMPLs8QweS1J"
#define BLYNK_DEVICE_NAME "Weather Monitoring system"
#define BLYNK_AUTH_TOKEN "B_0XK2MKtFgRAoUv_2w-PmAmNgJdd049" 


 }  
 void loop()  
 {  
   Serial.println("Temperature in C:");  
   Serial.println((dht2.readTemperature( )));  
   Serial.println("Humidity in C:");  
   Serial.println((dht2.readHumidity()));  
   delay(1000);  
 } 