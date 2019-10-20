  /*
  Light with buttton
  Turns an LED if the button is clicked
  */

const int LED = 12; // number of which the cable connected with in Arduino with LED
const int Button = 2; // number of which the cable connected with in Arduino with button

// the setup function runs once when you press reset or power the board
void setup() { 
  // initialize digital pin LED as an output.
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int KeyState = digitalRead(Button);
  if (KeyState == 1) {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)

  } else {
     digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  }
}
