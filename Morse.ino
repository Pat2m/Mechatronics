

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  morse();
}

// the loop function runs over and over again forever
void loop() {
  
}
void morse() {
  for (int x=0; x<3; x+=1) {
    digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(250);                       // wait for a second
    digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
    delay(250); 
  }
  for (int x=0; x<3; x+=1) {
    digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for a second
    digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
    delay(250); 
  }
  for (int x=0; x<3; x+=1) {
    digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(250);                       // wait for a second
    digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
    delay(250); 
  }
}
