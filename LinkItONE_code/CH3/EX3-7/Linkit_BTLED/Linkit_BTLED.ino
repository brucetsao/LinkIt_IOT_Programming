#include <LBT.h>
#include <LBTServer.h>
#define serverName "LinkIT01"
#define serverWaitTime 20
#define RelayPin 8
#define turnon LOW
#define turnoff HIGH


char BTread;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  LBTServer.begin((uint8_t*)serverName);
  Serial.printf("[%s] is waiting for any client...",serverName);
  
  while(!LBTServer.accept(serverWaitTime)){
    Serial.print(" ... ");
  }
  Serial.println("\n===Connected!===");
}

void loop() {
  if(LBTServer.available()){
    BTread = LBTServer.read();
    if(BTread == 'T')
    {
      digitalWrite(RelayPin,turnoff);
    }
    else if(BTread == 'F')
    {
      digitalWrite(RelayPin,turnon);
    }
    delay(150);
  }
}
