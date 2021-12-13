#include "DataConversion.h"

DataConversion DC;

void setup()
{
    Serial.begin(115200, SERIAL_8N1, 32, 33);

    Serial.println(DC.hexToFloat(0x41, 0xCC, 0x8f, 0x5c));
    // put your setup code here, to run once:

    //  floatToHex(h2, l2, h1, l1, 25.57);
    //  Serial.println(String(h2, HEX));
    //  Serial.println(String(h1, HEX));
    //  Serial.println(String(l2, HEX));
    //  Serial.println(String(l1, HEX));
}

void loop()
{
    // put your main code here, to run repeatedly:
}