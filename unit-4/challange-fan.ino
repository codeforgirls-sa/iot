#include <dht.h>
#include <Servo.h>

Servo servo;
dht DHT;

#define DHT11_PIN 7
#define Servo_PIN 8

int angle = 0;

void setup(){
  Serial.begin(9600);
  servo.attach(Servo_PIN);
//  servo.writeMicroseconds(700);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
//  delay(1000);
}
