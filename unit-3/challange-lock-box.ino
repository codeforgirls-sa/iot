/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
*
*/

#include <Servo.h>

Servo servo;

// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;

// defines variables
long duration;
int distance;

void setup() {
 servo.attach(3); 
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

Serial.print("Distance: ");
Serial.println(distance);

// if the object at 20 cm lock box

if (distance <= 20) {
   servo.write(90); 
   delay(1000); 
} else {
  servo.write(0); 
   delay(1000); 
}
}
