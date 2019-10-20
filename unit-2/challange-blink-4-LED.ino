  /*
  Blink 4 LED
  Turns an 3 LED on sequence, for on 2 seconds. at the end turn off for 3 seconds.. repeatedly.
  */

const int LED_One = 13; // number of which the cable 1 connected with in Arduino with LED
const int LED_Two = 12; // number of which the cable 2 connected with in Arduino with LED
const int LED_Three = 11; // number of which the cable 3 connected with in Arduino with LED

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(LED_One, OUTPUT);
  pinMode(LED_Two, OUTPUT);
  pinMode(LED_Three, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_One, HIGH);   // turn the LED  1on (HIGH is the voltage level)
  delay(2000);                   // wait for a 2 seconds
  digitalWrite(LED_One, LOW);    // turn the LED off by making the voltage LOW
 

  digitalWrite(LED_Two, HIGH);    // turn the LED 2 on (HIGH is the voltage level)
  delay(2000);                   // wait for a 2 seconds
  digitalWrite(LED_Two, LOW);    // turn the LED 2 off by making the voltage LOW
  
  digitalWrite(LED_Three, HIGH);    // turn the LED 3 on (HIGH is the voltage level)
  delay(2000);                     // wait for a 2 seconds
  digitalWrite(LED_Three, LOW);    // turn the LED 3 off by making the voltage LOW

   delay(3000);                     // wait for a 3 seconds
  
}
