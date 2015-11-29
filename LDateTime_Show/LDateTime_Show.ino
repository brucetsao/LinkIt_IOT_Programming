#include <LDateTime.h>

datetimeInfo t;
unsigned int rtc;
LDateTimeClass uu ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600) ;
  
}

void loop() {
  while(!Serial)
  delay(100);
  // put your main code here, to run repeatedly:
  LDateTime.getTime(&t);
  LDateTime.getRtc(&rtc);
 // printdate(&t);
 // printtime(&t);
  delay(1000);
   Serial.print("Date:");
  Serial.print(LDateTime.getYear(&t));
  Serial.print("/");
 // Serial.print(*t->mon);
  Serial.print("/");
 // Serial.print(*t->day);
 uu.Year() ;

  Serial.print("\n");
  
}

void printdate(datetimeInfo dd)
{
  Serial.print("Date:");
  Serial.print(LDateTime.getYear(&dd));
//  Serial.print(dd.year);
  Serial.print("/");
//  Serial.print(dd.mon);
  Serial.print(LDateTime.getMonth(&dd));
  Serial.print("/");
//  Serial.print(dd.day);
  Serial.print(LDateTime.getDay(&dd));
  Serial.print("\n");
  
}

void printtime(datetimeInfo dd)
{
  Serial.print("Time:");
//  Serial.print(dd.hour);
  Serial.print(LDateTime.getHour(&dd));
  Serial.print("/");
//  Serial.print(dd.min);
  Serial.print(LDateTime.getMinute(&dd));
  Serial.print("/");
//  Serial.print(dd.sec);
  Serial.print(LDateTime.getSecond(&dd));
  Serial.print("\n");
  
  
}


