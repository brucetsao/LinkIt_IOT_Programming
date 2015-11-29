#include <LTask.h>
#include <LGSM.h>
const int pinLed = 13; // LED接在 D3 腳位

void setup()
{
    Serial.begin(9600);
    while(!LSMS.ready()) //等候 SIM卡模組 ready
    {
         delay(1000);
    }

    Serial.println("GSM OK!!");
}
void loop()
{

    char p_num[20];
    int len = 0;
    char dtaget[500];

    if(LSMS.available()) // 檢查有沒有新簡訊
   {
        LSMS.remoteNumber(p_num, 20); //顯示發送者電話號碼
        Serial.println("There is new message.");

        Serial.print("Number:");
        Serial.println(p_num);
        Serial.print("Content:"); // 顯示簡訊內容

        while(true)
        {
            int v = LSMS.read();
            if(v < 0)
                break;

            dtaget[len++] = (char)v;
            Serial.print((char)v);
         }

         Serial.println();
         LSMS.flush(); // 刪除簡訊
         if((dtaget[0] == 'O' && dtaget[1] == 'N') || (dtaget[0] == 'o' && dtaget[1] == 'n'))
         {
         //檢查簡訊前兩個字元是否為 ON 或 on
         digitalWrite(pinLed, HIGH); 
         // 這不用多說了吧，亮燈！
}

        else if((dtaget[0] == 'O' && dtaget[1] == 'F' && dtaget[2] == 'F') || (dtaget[0] == 'o' && dtaget[1] == 'f' && dtaget[2] == 'f'))
         {
             digitalWrite(pinLed, LOW); 
             // 熄燈
         }
    }
}

