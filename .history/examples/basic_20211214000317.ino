#include "DataConversion.h"

DataConversion DC;

uint16_t higher, lower;
uint8_t h1, h2, l1, l2;

void setup()
{
    Serial.begin(115200, SERIAL_8N1, 32, 33);

    Serial.println(DC.hexToFloat(0x41, 0xCC, 0x8f, 0x5c));
    Serial.println(DC.hexToFloat(0x41CC, 0x8f5c));
    DC.floatToHex(higher, lower, 25.57);
    Serial.println(String(higher, HEX));
    Serial.println(String(lower, HEX));
}

void loop()
{
    // put your main code here, to run repeatedly:
}