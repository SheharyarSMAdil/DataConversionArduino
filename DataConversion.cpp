
//    DataConversion(){};           //constructor
#include "DataConversion.h"
#include "Arduino.h"

float DataConversion::hexToFloat(uint16_t h2, uint16_t h1)
{ // 2 * 16bit to float
    uint8_t xlow = h2 & 0xff;
    uint8_t xhigh = (h2 >> 8);
    uint8_t ylow = h1 & 0xff;
    uint8_t yhigh = (h1 >> 8);
    TData.TestArray[3] = (char)xhigh;
    TData.TestArray[2] = (char)xlow;
    TData.TestArray[1] = (char)yhigh;
    TData.TestArray[0] = (char)ylow;
    return TData.TestData_Float;
}

double DataConversion::hexToDouble(uint16_t h4, uint16_t h3,uint16_t h2, uint16_t h1)
{ // 4 * 16bit to double
     uint8_t plow = h4 & 0xff;
    uint8_t phigh = (h4 >> 8);
    uint8_t qlow = h3 & 0xff;
    uint8_t qhigh = (h3 >> 8);
     uint8_t rlow = h2 & 0xff;
    uint8_t rhigh = (h2 >> 8);
    uint8_t slow = h1 & 0xff;
    uint8_t shigh = (h1 >> 8);
    
    TData.TestArray[7] = (char)phigh;
    TData.TestArray[6] = (char)plow;
    TData.TestArray[5] = (char)qhigh;
    TData.TestArray[4] = (char)qlow;
    TData.TestArray[3] = (char)rhigh;
    TData.TestArray[2] = (char)rlow;
    TData.TestArray[1] = (char)shigh;
    TData.TestArray[0] = (char)slow;
    return TData.TestData_Double;
}

float DataConversion::hexToFloat(byte h2, byte l2, byte h1, byte l1)
{ // 4 * 8bit to float
    TData.TestArray[3] = h2;
    TData.TestArray[2] = l2;
    TData.TestArray[1] = h1;
    TData.TestArray[0] = l1;
    return TData.TestData_Float;
}

float DataConversion::hexToInt( byte h1, byte l1)
{ // 4 * 8bit to float
    TData.TestArray[1] = h1;
    TData.TestArray[0] = l1;
    return TData.TestData_Int;
}

void DataConversion::floatToHex(uint16_t &R1, uint16_t &R2, float value)
{ //  float to 2 * 16bit
    TData.TestData_Float = value;
    R1 = TData.TestArray[1] << 8 | TData.TestArray[0] & 0xff;
    R2 = TData.TestArray[3] << 8 | TData.TestArray[2] & 0xff;
}
void DataConversion::doubleToHex(uint16_t &R1, uint16_t &R2,uint16_t &R3, uint16_t &R4, double value)
{ //  float to 2 * 16bit
    TData.TestData_Double = value;
    R1 = TData.TestArray[1] << 8 | TData.TestArray[0] & 0xff;
    R2 = TData.TestArray[3] << 8 | TData.TestArray[2] & 0xff;
    R3 = TData.TestArray[5] << 8 | TData.TestArray[4] & 0xff;
    R4 = TData.TestArray[7] << 8 | TData.TestArray[6] & 0xff;
}
