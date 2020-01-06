int s1=A4, s2=A5, s3=A6, s4=A7;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() { 
  int sen1=analogRead(s1);
  int sen2=analogRead(s2);
  int sen3=analogRead(s3);
  int sen4=analogRead(s4);

  int md1=11, mi1=8, md2=3, mi2=2;
  Serial.print(sen1);
  Serial.print(" - ");
  Serial.print(sen2);
  Serial.print(" - ");
  Serial.print(sen3);
  Serial.print(" - ");
  Serial.print(sen4);
  Serial.print("\n");
  

  
  
  if(sen2>=900 && sen3<=900){
    digitalWrite(md1,HIGH);
    digitalWrite(md2,HIGH);
    digitalWrite(mi1,LOW);
    digitalWrite(mi2,LOW);
  }
    if(sen1>=900 && sen2>=900){
    digitalWrite(md1,HIGH);
    digitalWrite(md2,HIGH);
    digitalWrite(mi1,LOW);
    digitalWrite(mi2,LOW);

  }
    if(sen3>=900 && sen4>=900){
    digitalWrite(md1,HIGH);
    digitalWrite(md2,HIGH);
    digitalWrite(mi1,LOW);
    digitalWrite(mi2,LOW);

  }
    if(sen1>=900){
    digitalWrite(md1,HIGH);
    digitalWrite(md2,HIGH);
    digitalWrite(mi1,LOW);
    digitalWrite(mi2,LOW);
    
  }
    if(sen4>=900){
    digitalWrite(md1,HIGH);
    digitalWrite(md2,HIGH);
    digitalWrite(mi1,LOW);
    digitalWrite(mi2,LOW);

  }
    if(sen1<900 && sen2<900 && sen3<900 && sen4<900){
    digitalWrite(md1,LOW);
    digitalWrite(md2,LOW);
    digitalWrite(mi1,LOW);
    digitalWrite(mi2,LOW);
    
  }

  
}
