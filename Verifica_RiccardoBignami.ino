int red=10;
int yellow=8;
int white=6;
int green=4;
int TEMPO1;
int TEMPO2;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(white,OUTPUT);
  pinMode(green,OUTPUT);
  tempolampeggio1();
  tempolampeggio2();
  
  

}
void tempolampeggio1()
{
  Serial.println("Inserire il tempo, in secondi, di alternanza dei led rosso e bianco");
  while(Serial.available() == 0) {};
  TEMPO1=Serial.readString().toInt();
  
}
void tempolampeggio2()
{
  Serial.println("Inserire il tempo, in secondi, di alternanza dei led giallo e verde");
  while(Serial.available() == 0) {};
  TEMPO2=Serial.readString().toInt();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  digitalWrite(white,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(TEMPO1);
  digitalWrite(red,LOW);
  digitalWrite(white,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,HIGH);
  delay(TEMPO2);

}
