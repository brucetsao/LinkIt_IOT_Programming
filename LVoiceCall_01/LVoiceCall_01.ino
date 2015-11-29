#include <LGSM.h>

String remoteNumber = "0985056668";  // the number you will call
char charbuffer[20];

void setup()
{
          remoteNumber.toCharArray(charbuffer, 20);
          LVoiceCall.voiceCall(charbuffer)  ;
          delay(3000);
             LVoiceCall.hangCall();
 }

void loop()
{
 
}
