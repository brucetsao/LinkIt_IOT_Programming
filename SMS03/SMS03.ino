#include <LGSM.h>
char aa[] = {0xe6,0xa9,0x9f,0xe5,0x99,0xa8,0xe4,0xba,0xba} ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;
  Serial.println("GSM Program Start Here");
while(!LSMS.ready())
{
 delay(1000);
}
Serial.println("GSM is Ready") ;
// this code is waiting for GSM init
Serial.println("Now Send GSM SMS") ;

LSMS.beginSMS("0985056668");
//LSMS.print("我看看可不可以移喔");
LSMS.print(aa);
//LSMS.print("Hello from BruceTsao LinkIt! 我看看可不可以移喔");
if(LSMS.endSMS())
 {
 Serial.println("SMS is sent");
 }
 else
 {
 Serial.println("SMS is not sent");
 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
