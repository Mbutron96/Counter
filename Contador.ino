void setup() {
    Serial.begin(9600);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}
void cero(void);
void one(void);
void two(void);
void three(void);
void four(void);
void five(void);
void six(void);
void seven(void);
void eight(void);
void nine(void);

void turnOn(int i){
  
  for(int j=0;j<10;++j){
    if(i==0){
    cero();
    }
    else if(i==1){
    one();
    }
    else if(i==2){
    two();
    }
    else if(i==3){
    three();
    }
    else if(i==4){
    four();
    }
    else if(i==5){
    five();
    }
    else if(i==6){  
    six();
     }
    else if(i==7){
    seven();
    }
    else if(i==8){
    eight();
    }
    else(nine());
  }
}
 void turnDown(int i){
    for(int j=0;j<10;++j){
    if(i==0){
    cero();
    }
    else if(i==1){
    one();
    }
    else if(i==2){
    two();
    }
    else if(i==3){
    three();
    }
    else if(i==4){
    four();
    }
    else if(i==5){
    five();
    }
    else if(i==6){  
    six();
     }
    else if(i==7){
    seven();
    }
    else if(i==8){
    eight();
    }
    else(nine());
  }
}


void loop(){
  int c=0;
  Serial.print(c);
      turnOn(c);
      delay(100);
  for (c=1;c<10;c++){
      Serial.print(c);
      turnOn(c);
      delay(100);
  }
  for (c=8;c>-1;c--){
      Serial.print(c);
      turnDown(c);
      delay(1000);
  }
  c=9;
  Serial.print(c);
      turnOn(c);
      delay(1000);
  }

void cero(void){

    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  
}
void one(void){

    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
  
 }
void two (void){
 
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }

void three (void){

    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  
 }
void four (void){
  
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
  }
  void five (void){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }
  void six (void){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }
  void seven (void){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
  void eight (void){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
  void nine (void){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
