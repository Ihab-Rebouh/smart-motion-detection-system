#include <Wire.h>
#include <U8g2lib.h>


#define PIR_PIN D6
#define BUZZER_PIN D5

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(
  U8G2_R0,
  U8X8_PIN_NONE
);

int motionState = -1;

void setup() {


  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);


  Wire.begin(D1, D2);

  
  u8g2.begin();

  
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB10_tr);
  u8g2.drawStr(10, 30, "SYSTEM READY");
  u8g2.sendBuffer();

  Serial.println("SYSTEM READY");

  delay(2000);
}

void loop() {


  int pirValue = digitalRead(PIR_PIN);

 
  if (pirValue != motionState) {

    motionState = pirValue;

    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB14_tr);

    if (motionState == HIGH) {

      Serial.println("MOTION DETECTED");

      
      tone(BUZZER_PIN, 1000);

      u8g2.drawStr(10, 35, "MOTION!");

    } else {

    
      Serial.println("NO MOTION");

     
      noTone(BUZZER_PIN);

    
      u8g2.drawStr(5, 35, "NO MOTION");
    }

    
    u8g2.sendBuffer();
  }

  delay(200);
}
