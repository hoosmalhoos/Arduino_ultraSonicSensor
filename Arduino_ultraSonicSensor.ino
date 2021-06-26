int pin2=2;
int  pin3=3;
int  pin4=4;
int  pin5=5;
int TriqPin=9;
int EchoPin=10;
long duration;
int distance;

void setup() {
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
pinMode(TriqPin,OUTPUT);
pinMode(EchoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  //blueLed();
  //RedLed();
  //YellowLed();
  //GreenLed();
  digitalWrite(TriqPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TriqPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriqPin,LOW);

  duration= pulseIn(EchoPin,HIGH);
  distance= duration*0.034/2;
  Serial.print("distance :");
  Serial.println(distance);

  if(distance<=80){
    
   digitalWrite(pin2,HIGH);
  delay(distance*5);
  digitalWrite(pin2,LOW);
  delay(distance*5);
   
   // --------------

    digitalWrite(pin3,HIGH);
  delay(distance*5);
  digitalWrite(pin3,LOW);
  delay(distance*5);

   //---------

   digitalWrite(pin4,HIGH);
  delay(distance*5);
  digitalWrite(pin4,LOW);
  delay(distance*5);
   //-----
   tone(pin5,(80/distance)*60);
   
    digitalWrite(pin5,HIGH);
  
   delay(distance*5);
  digitalWrite(pin5,LOW);
  noTone(pin5);
  delay(distance*5);
   if(distance<=3){
    tone(pin5,(233.567/distance)*47.585);
    delay(distance*5);
    }
    
    }
}

void blueLed(){
  digitalWrite(pin2,HIGH);
  delay(200);
  digitalWrite(pin2,LOW);
  delay(200);
  
  
  }
  
void RedLed(){
  digitalWrite(pin4,HIGH);
  delay(200);
  digitalWrite(pin4,LOW);
  delay(200);
  
  
  }
  
void YellowLed(){
  digitalWrite(pin3,HIGH);
  delay(200);
  digitalWrite(pin3,LOW);
  delay(200);
  
  
  }
  
void GreenLed(){
  digitalWrite(pin5,HIGH);
  delay(200);
  digitalWrite(pin5,LOW);
  delay(200);
  
  
  }
