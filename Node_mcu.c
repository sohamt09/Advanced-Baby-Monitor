#define BLYNK_PRINT Serial    
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "7b7ce18e903640c39a8c0a68f9ab3e29";
String readString;
void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, "AndroidAP", "fxqd4239");
}
void loop()
{
  Blynk.run();
  if(Serial.available()) 
  {
    delay(1);
	readString = Serial.readStringUntil(';');
  }
    if(readString.toInt()>28)
  {
     Blynk.email("diyasaha137@gmail.com","NODE MCU","TEMPERATURE IS OVER 28");
      Blynk.notify("ESP8266 ALERT-TEMPERATURE OVER 28");
      delay(100);
   }
}