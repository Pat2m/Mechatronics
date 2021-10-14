
int button = 4;

boolean b1 = false;
boolean b2= false;
boolean b3= false;
boolean b4= false;

boolean PP = false;
void setup() {
  // put your setup code here, to run once:
int button = 4;

boolean b1 = false;
boolean b2= false;
boolean b3= false;
boolean b4= false;

boolean PP = false;

digitalWrite(8,LOW);
digitalWrite(12,LOW);
}

void loop() {

  if( digitalRead(4)==LOW && b1 == false && b2 == false && b3 == false && b4 == false){
  
    delay(500);
    
    
  
    
  }
    if( digitalRead(4)==LOW && b1 == true && b2 == false && b3 == false && b4 == false){
  
    delay(500);
   
    
  
    
  }

  if( digitalRead(4)==HIGH && b1 == false && b2 == false && b3 == false && b4 == false){
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    
    b1 = true;
    
  }
    if( digitalRead(4)==HIGH && b1 == true && b2 == false && b3 == false && b4 == false){
    tone(12,400,500);
    delay(500);
    noTone(12);
    
    b2 = true;
    
  }
      if(b1 == true && b2 == true && b3 == false && b4 == false){
    while(digitalRead(4)==HIGH){
      digitalWrite(12,200);
      
    }
    while(digitalRead(4)==LOW){
      digitalWrite(12,LOW);
    }
    
   
    
  }
  // put your main code here, to run repeatedly:

}
