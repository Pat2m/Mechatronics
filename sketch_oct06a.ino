
#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor


// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;  // number of steps the motor has taken
int speeds = 0;
int count = 0;
void setup() {
  // nothing to do inside the setup
    Serial.begin(9600); 
    delay(1000);  
 
    Serial.println("Welcome?");
}

void loop() {
  // read the sensor value:
    gigi(count);
    
    
  }
  

    
  

void gigi(int i){
  if (i==0){
    Serial.println("Speed : ");
    delay(5000);
    count++;
    if(Serial.available() > 0){
    speeds = Serial.parseInt();
    }
    Serial.println(speeds);
  } else if (i==1){
    Serial.println("Steps : ");
    count++;
    delay(5000);
    if(Serial.available() > 0){
    stepCount = Serial.parseInt();
    }
    Serial.println(stepCount);
  } else  if (i==2) {
    Serial.println("Direction 1(clockwise) or 2(counter-clockwise) : ");
    count++;
    int temp=0;
    delay(5000);
    if(Serial.available() > 0){
     temp = Serial.parseInt();
    }
    if (temp == 2){ stepCount = stepCount *-1;}
    Serial.println(stepCount);
  }
  else{
    stepper(speeds);
    delay(8000);
    count = 0;
    stepCount = 0;  // number of steps the motor has taken
    speeds = 0;
    
  }
}

void stepper(int sensorReading){
    int motorSpeed = sensorReading;// map(sensorReading, 0, 1023, 0, 100);
    // set the motor speed:
    if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    // step 1/100 of a revolution:stepsPerRevolution / 100
    myStepper.step(stepCount);
  }
}
