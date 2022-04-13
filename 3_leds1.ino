int Green=3;
int Yellow=2;
int Red=1;
void setup(){
  pinMode(Green,OUTPUT);
  pinMode(Yellow,OUTPUT);
  pinMode(Red,OUTPUT);

}
void loop(){
    digitalWrite(Green,HIGH);
    delay(9000);
    digitalWrite(Green,LOW);
    digitalWrite(Yellow,HIGH);
      delay(5000);
      digitalWrite(Yellow,LOW);
  digitalWrite(Red,HIGH);
  delay(9000);
    digitalWrite(Red,LOW);
    digitalWrite(Yellow,HIGH);
    delay(5000);
      digitalWrite(Yellow,LOW);
    

}