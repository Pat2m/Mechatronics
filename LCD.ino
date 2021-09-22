/* The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
Pat Twomey
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
int rsPin = 12, enPin = 11, d4Pin = 5, d5Pin = 4, d6Pin = 3, d7Pin = 2;
String Welcome1 = "     Hello,";
String Welcome2= "   Pat Twomey!";
String task = "I'm Scrolling!";
int len = task.length();

LiquidCrystal lcd(rsPin, enPin, d4Pin, d5Pin, d6Pin, d7Pin);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2); // set up the LCD's columns and rows
  welcome();
  delay(5000);
}

void loop() {
 lcd.clear();
  lcd.setCursor(0,0);
 delay(500);
 lcd.print(task);
 for (int positionOfMessage = 0; positionOfMessage < len+32; positionOfMessage++) {
    // scroll one position right
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(350);
 }
 lcd.clear();
 delay(250);
 welcome();
 delay(2500);
  }
void welcome(){
   lcd.setCursor(0,0);
  lcd.print(Welcome1);
  lcd.setCursor(0,2);
  lcd.print(Welcome2);
  }
