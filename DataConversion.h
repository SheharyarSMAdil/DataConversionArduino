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
};

#endif