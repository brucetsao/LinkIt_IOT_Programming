#include <LDateTime.h>


/*
typedef struct
{
	int year;//year
	int mon;//month,begin from 1
	int day;//day,begin from 1
	int hour;//hour,24-hour
	int min;//minute
	int sec;//second
}datetimeInfo;
getTime(&datetimeInfo)  gettime information
setTime(datetimeInfo *time)   set time information
*/

datetimeInfo t;
unsigned int rtc;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  LDateTime.getTime(&t);
  LDateTime.getRtc(&rtc);
  Serial.print("year:") ;
  Serial.print(t.year) ;
  Serial.print("\n") ;
  Serial.print("month:") ;
  Serial.print(t.mon) ;
  Serial.print("\n") ;
  Serial.print("day:") ;
  Serial.print(t.day) ;
  Serial.print("\n") ;
  Serial.print("hour:") ;
  Serial.print(t.hour) ;
  Serial.print("\n") ;
  Serial.print("minute:") ;
  Serial.print(t.min) ;
  Serial.print("\n") ;
  Serial.print("second:") ;
  Serial.print(t.sec) ;
  Serial.print("\n") ;
 
  
  
  delay(1000);
}
