
//    DataConversion(){};           //constructor

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

float DataConversion::hexToFloat(byte h2, byte l2, byte h1, byte l1)
{ // 4 * 8bit to float
    TData.TestArray[3] = h2;
    TData.TestArray[2] = l2;
    TData.TestArray[1] = h1;
    TData.TestArray[0] = l1;
    return TData.TestData_Float;
}

void DataConversion::floatToHex(uint16_t &R1, uint16_t &R2, float value)
{ //  float to 2 * 16bit
    TData.TestData_Float = value;
    R1 = TData.TestArray[1] << 8 | TData.TestArray[0] & 0xff;
    R2 = TData.TestArray[3] << 8 | TData.TestArray[2] & 0xff;
}
