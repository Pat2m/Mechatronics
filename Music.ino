//Table of Notes to frequencys
#define note_B0  31
#define note_C1  33
#define note_CS1 35
#define note_D1  37
#define note_DS1 39
#define note_E1  41
#define note_F1  44
#define note_FS1 46
#define note_G1  49
#define note_GS1 52
#define note_A1  55
#define note_AS1 58
#define note_B1  62
#define note_C2  65
#define note_CS2 69
#define note_D2  73
#define note_DS2 78
#define note_E2  82
#define note_F2  87
#define note_FS2 93
#define note_G2  98
#define note_GS2 104
#define note_A2  110
#define note_AS2 117
#define note_B2  123
#define note_C3  131
#define note_CS3 139
#define note_D3  147
#define note_DS3 156
#define note_E3  165
#define note_F3  175
#define note_FS3 185
#define note_G3  196
#define note_GS3 208
#define note_A3  220
#define note_AS3 233
#define note_B3  247
#define note_C4  262
#define note_CS4 277
#define note_D4  294
#define note_DS4 311
#define note_E4  330
#define note_F4  349
#define note_FS4 370
#define note_G4  392
#define note_GS4 415
#define note_A4  440
#define note_AS4 466
#define note_B4  494
#define note_C5  523
#define note_CS5 554
#define note_D5  587
#define note_DS5 622
#define note_E5  659
#define note_F5  698
#define note_FS5 740
#define note_G5  784
#define note_GS5 831
#define note_A5  880
#define note_AS5 932
#define note_B5  988
#define note_C6  1047
#define note_CS6 1109
#define note_D6  1175
#define note_DS6 1245
#define note_E6  1319
#define note_F6  1397
#define note_FS6 1480
#define note_G6  1568
#define note_GS6 1661
#define note_A6  1760
#define note_AS6 1865
#define note_B6  1976
#define note_C7  2093
#define note_CS7 2217
#define note_D7  2349
#define note_DS7 2489
#define note_E7  2637
#define note_F7  2794
#define note_FS7 2960
#define note_G7  3136
#define note_GS7 3322
#define note_A7  3520
#define note_AS7 3729
#define note_B7  3951
#define note_C8  4186
#define note_CS8 4435
#define note_D8  4699
#define note_DS8 4978

//music transcribed from https://www.virtualsheetmusic.com/score/HL-359773.html
int melody[] = {
  note_E4, note_G4, note_A4, note_A4, 0,
    note_A4, note_B4, note_C5, note_C5, 0,
    note_C5, note_D5, note_B4, note_B4, 0,
    note_A4, note_G4, note_A4, 0,

    note_E4, note_G4, note_A4, note_A4, 0,
    note_A4, note_B4, note_C5, note_C5, 0,
    note_C5, note_D5, note_B4, note_B4, 0,
    note_A4, note_G4, note_A4, 0,

    note_E4, note_G4, note_A4, note_A4, 0,
    note_A4, note_C5, note_D5, note_D5, 0,
    note_D5, note_E5, note_F5, note_F5, 0,
    note_E5, note_D5, note_E5, note_A4, 0,

    note_A4, note_B4, note_C5, note_C5, 0,
    note_D5, note_E5, note_A4, 0,
    note_A4, note_C5, note_B4, note_B4, 0,
    note_C5, note_A4, note_B4, 0,

    note_A4, note_A4,
   
    //Repeat of first part
    note_A4, note_B4, note_C5, note_C5, 0,
    note_C5, note_D5, note_B4, note_B4, 0,
    note_A4, note_G4, note_A4, 0,

    note_E4, note_G4, note_A4, note_A4, 0,
    note_A4, note_B4, note_C5, note_C5, 0,
    note_C5, note_D5, note_B4, note_B4, 0,
    note_A4, note_G4, note_A4, 0,

    note_E4, note_G4, note_A4, note_A4, 0,
    note_A4, note_C5, note_D5, note_D5, 0,
    note_D5, note_E5, note_F5, note_F5, 0,
    note_E5, note_D5, note_E5, note_A4, 0,

    note_A4, note_B4, note_C5, note_C5, 0,
    note_D5, note_E5, note_A4, 0,
    note_A4, note_C5, note_B4, note_B4, 0,
    note_C5, note_A4, note_B4, 0,
    //End of Repeat

    note_E5, 0, 0, note_F5, 0, 0,
    note_E5, note_E5, 0, note_G5, 0, note_E5, note_D5, 0, 0,
    note_D5, 0, 0, note_C5, 0, 0,
    note_B4, note_C5, 0, note_B4, 0, note_A4,

    note_E5, 0, 0, note_F5, 0, 0,
    note_E5, note_E5, 0, note_G5, 0, note_E5, note_D5, 0, 0,
    note_D5, 0, 0, note_C5, 0, 0,
    note_B4, note_C5, 0, note_B4, 0, note_A4};

// note durations: 8 = eighth note, 4 = quarter note, 2.66 = quarter + eigth or 3 8th notes , 2 = half
double noteDurations[] = {
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 2.66, 8,

    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 2.66, 8,

    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 8, 4, 8,

    8, 8, 4, 8, 8,
    4, 8, 4, 8,
    8, 8, 4, 8, 8,
    8, 8, 2.66, 2.66,

    4, 8,
    //Repeat of First Part
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 2.66, 8,

    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 2.66, 8,

    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 4, 8, 8,
    8, 8, 8, 4, 8,

    8, 8, 4, 8, 8,
    4, 8, 4, 8,
    8, 8, 4, 8, 8,
    8, 8, 2.66, 2.66,
    //End of Repeat

    4, 8, 2.66, 4, 8, 2.66,
    8, 8, 8, 8, 8, 8, 8, 8, 2.66,
    4, 8, 2.66, 4, 8, 2.66,
    8, 8, 8, 8, 8, 2,

    4, 8, 2.66, 4, 8, 2.66,
    8, 8, 8, 8, 8, 8, 8, 8, 2.66,
    4, 8, 2.66, 4, 8, 2.66,
    8, 8, 8, 8, 8, 2};

int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;
int buttonPin = 22;
int buttonState = 0;

//creates a function to easily write out rgb values to the led
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}

boolean playSong(){
  //iterate through entire song
   for (int currentNote = 0; currentNote < sizeof(noteDurations); currentNote++) {
    int beats = int(1000/noteDurations[currentNote]);//converts to milliseconds
    int temp = melody[currentNote];
     //maping frequency to rgb values
    int tempR = map(temp, 0, 255, 0, 5000);
    int tempG = map(temp, 0, 255, 0, 5000);
    int tempB = map(temp, 0, 255, 0, 5000);
    RGB_color(tempR, tempG, tempB); //set color
    tone(8, temp, beats); //change frequency

    delay(beats); //hold for note duration
    RGB_color(0, 0, 0); //reset led
    noTone(8); //reset buzzer
  } return true; //return a value in case if want to have a check later on for completness
 }
void setup() {
  Serial.begin(9600);
  //Set up RGB led
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  //Set up button
  pinMode(buttonPin, INPUT);
  }
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    // turn on music:
    playSong();
  }
  delay(1000);
}
