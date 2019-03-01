//Smoke Sensor

int buzz=10;
float smoke = A1;
void setup()
{
pinMode(smoke,INPUT);
   pinMode(buzz,OUTPUT);
}
void loop()
{
  if(analogRead(smoke)>=250)
    digitalWrite(buzz2,HIGH);
  else
    digitalWrite(buzz2,LOW)

//DHT11

#include<DHT>H>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
Float temp;
void setup()
{
   Serial.begin(115200);
}
void loop()
{
   Temp = dht.readTemperature();
   Serial.print(data);
}


//SOUND SENSOR(RK-3103):

int LED=12;
float sound = A0;
void setup()
{
   pinMode(sound,INPUT);
   pinMode(LED,OUTPUT);
}
void loop()
{
   float value = (analogRead(sound)+83.2073/11.003);
   if(value>=950)
      digitalWrite(LED,HIGH);
   else
      digitalWrite(LED,LOW);
}   


//CODE FOR LED:

int led=7;
void setup()
{
pinMode(led,OUTPUT);
}
void loop()
{
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(leg,LOW);
  delay(1000);
}

//CODE FOR BUZZER:

int buzz = 10;
float smoke = A1;
void setup()
{
  pinMode(smoke,INPUT);
  pinMode(buzz,OUTPUT);
}
void loop()
{
if(analogRead(smoke)>=250)
    digitalWrite(buzz,HIGH);
  else
    digitalWrite(buzz,LOW);
}

//CODE FOR FAN:

#define pwm 9
void setup(){}
void loop(){
analogWrite(pwm,255);
delay(1000); 
analogWrite(pwm,0);}
