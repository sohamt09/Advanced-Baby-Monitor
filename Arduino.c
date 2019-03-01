#include <DHT.h>
#define DHTPIN 4    
#define DHTTYPE DHT11   
#define pwm 9
String data;
int buzz1=12;
int buzz2=10;
float smoke=A1;
float sound=A0;
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for normal 16mhz Arduino
float temp; //Stores temperature value
void setup()
{
    Serial.begin(115200);
    pinMode(smoke,INPUT);
    pinMode(sound,INPUT);
    pinMode(buzz1,OUTPUT);
    pinMode(buzz2,OUTPUT);
}
void loop()
{
    float value=(analogRead(sound)+83.2073/11.003);
     if(value>=950)
     {
      digitalWrite(buzz1,HIGH);
     } 
     else
       digitalWrite(buzz1,LOW); 
    if(analogRead(smoke)>=250)
           digitalWrite(buzz2,HIGH);  
      else
        digitalWrite(buzz2,LOW);
     delay(1000);
     temp= dht.readTemperature();
     delay(100);
     if (temp>=28)
     {
       analogWrite(pwm,255);
       delay(1000);
     }   
    else
      analogWrite(pwm,0);
    String data=(String)temp;
	data += ";";
    Serial.print(data);
    delay(100);}