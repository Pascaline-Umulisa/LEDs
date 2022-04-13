 int red1=13;
int yellow1=12;
int green1=11;
int red2=3;
int yellow2=2;
int green2=1;
void setup(){
  pinMode(red1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);

}
void loop(){
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  delay(9000);
  digitalWrite(red1,LOW);
  digitalWrite(green2,LOW);
  
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(5000);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  
  digitalWrite(green1,HIGH);
  digitalWrite(red2,HIGH);
  delay(9000);
  digitalWrite(green1,LOW);
  digitalWrite(red2,LOW);
  
  
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(5000);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  
  

}