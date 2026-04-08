#include <SPI.h>
#include <MFRC522.h>

#define SS_pin 10
#define RST_pin 9

int i;
byte T[4];

MFRC522 rfid(SS_pin, RST_pin);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void loop() {
  if (rfid.PICC_IsNewCardPresent()) {
    if (rfid.PICC_ReadCardSerial()) {

      for (i = 0; i < 4; i++) {
        T[i] = rfid.uid.uidByte[i];
      }

      Serial.print("UID: ");
      for (i = 0; i < 4; i++) {
        Serial.print(T[i], HEX);
        Serial.print(" ");
      }
      Serial.println();

      rfid.PICC_HaltA();
      rfid.PCD_StopCrypto1();
    }
  }
}