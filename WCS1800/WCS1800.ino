#define Aout A0
#define Dout 8
#define LED 13

void setup()
{
  pinMode(Dout,INPUT);
  pinMode(Aout,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(19200);
}

void loop()
{
  int Value = analogRead(Aout);
  double Amp = ((double)Value - 525 )*5000/1024 ;
 // Serial.print("Aout Value =( ");
  Serial.print(Value);
  Serial.print("  ,  ");
  Serial.print(Amp);
  Serial.print("  ,  ");
  Serial.print(Amp/60 * 1000) ;
//  Serial.print(")\n");
  Serial.print("\n");
  //(30/1000) *1024/5
  if(digitalRead(Dout) == LOW)
  {
    Serial.println("Alarm!");
    digitalWrite(LED,HIGH); 
  }
  else
  {
    digitalWrite(LED,LOW);
  }
  
  delay(20);
}
