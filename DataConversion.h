#ifndef DataConversion_h
#define DataConversion_h
#include "Arduino.h"

class DataConversion
{

private:
    union
    {
    	double TestData_Double;
        float TestData_Float;
        unsigned char TestArray[4];
    } TData;

public:
    float hexToFloat(uint16_t h2, uint16_t h1);
    float hexToFloat(byte h2, byte l2, byte h1, byte l1);
    void floatToHex(uint16_t &R1, uint16_t &R2, float value);
    double hexToDouble(uint16_t h4, uint16_t h3,uint16_t h2, uint16_t h1);
    uint32_t hexToInt( uint16_t h2, uint16_t h1);
    void doubleToHex(uint16_t &R1, uint16_t &R2,uint16_t &R3, uint16_t &R4, double value);
};

#endif
