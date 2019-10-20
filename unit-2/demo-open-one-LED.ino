  /*
  Opem LED
  Turns an LED.
  */

const int LED = 12; // number of which the cable connected with in Arduino with LED
  
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED, LOW);   // turn the LED on (HIGH is the voltage level)
}
