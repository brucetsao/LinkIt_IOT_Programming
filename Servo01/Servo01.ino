// 引用 Servo Library
#include <Servo.h> 
 
// 建立一個 Servo 物件
Servo myservo;
// 旋轉角度
int value = 0;
 
void setup() 
{ 
  myservo.attach(9);  // Servo 接在 pin 9
  Serial.begin(9600);
} 
 
void loop() 
{ 
  if (value == 0) 
  {
    value = 179;
  //   myservo.write(value); 
  }  
  else
  {
    value = 0;
  
  // 叫 Servo 旋轉角度:
  //    myservo.write(0) 是叫 Servo 旋轉到 0 度的位置
  //    myservo.write(180) 是叫 Servo 旋轉到 180 度的位置

  }
  
    Serial.println(value) ;
    myservo.write(value); 
  delay(1500);
} 
