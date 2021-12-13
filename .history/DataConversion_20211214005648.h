#ifndef DataConversion_h
#define DataConversion_h

class DataConversion
{

private:
    union
    {
        float TestData_Float;
        unsigned char TestArray[4];
    } TData;

public:
    float hexToFloat(uint16_t h2, uint16_t h1);
    float hexToFloat(byte h2, byte l2, byte h1, byte l1);
    void floatToHex(uint16_t &R1, uint16_t &R2, float value);
};

#endif