const int morseLED = 10;
const int RedLED = 5;
const int GreenLED = 6;
const int YellowLED = 7;
const int letterPause = 250;
const int wordPause = 750;
const int shortPulse = 250;
const int longPulse = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(morseLED, OUTPUT);
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
morse();
delay(1000); 
tripleLED();
delay(1000); 
}
void morse() {
    for (int x=1; x<4; x+=1) {
      for (int y=0; y<3; y+=1) {
            if (x%2==1){
                digitalWrite(morseLED, HIGH);   // turn the LED on (HIGH is the voltage level)
                delay(shortPulse);                       // wait for a second
                digitalWrite(morseLED, LOW);    // turn the LED off by making the voltage LOW
                delay(letterPause); 
            } else {
                digitalWrite(morseLED, HIGH);   // turn the LED on (HIGH is the voltage level)
                delay(longPulse);                       // wait for a second
                digitalWrite(morseLED, LOW);    // turn the LED off by making the voltage LOW
                delay(letterPause); 
            }
        }
      }
}
void RGB_color(int red_light_value, int green_light_value, int yellow_light_value)
 {
  analogWrite(RedLED, red_light_value);
  analogWrite(GreenLED, green_light_value);
  analogWrite(YellowLED, yellow_light_value);
}
void tripleLED() {
   RGB_color(0, 0, 0); // turn all the LEDs off
   RGB_color(255, 255, 255); // turn all the LEDs on
   delay(longPulse);                       // wait for a second
   RGB_color(0, 0, 0); // turn all the LEDs off
   RGB_color(255, 255, 255); // turn all the LEDs on
   delay(longPulse);                       // wait for a second
   RGB_color(0, 0, 0); // turn all the LEDs off
   for (int x=1; x<4; x+=1) {
      for (int y=0; y<3; y+=1) {
        RGB_color(0, 0, 0); // turn all the LEDs off
       switch(y){
        case (0):{
          RGB_color(255, 0, 0); // turn all the Red LED on
          delay(shortPulse);
          RGB_color(0, 0, 0); // turn all the LEDs off
          break;
        }
        case 1:{
          RGB_color(0, 255, 0); // turn all the Green LED on
          delay(shortPulse);
          RGB_color(0, 0, 0); // turn all the LEDs off
          break;
        }
        default:{
          RGB_color(0, 0, 255); // turn all the Yellow LED on
          delay(shortPulse);
          RGB_color(0, 0, 0); // turn all the LEDs off
          break;
        }

      }}
      
      }
}
