# DATA CONVERSION

Arduino Library for Data Conversion of Hex to Float and float to Hex as IEEE754 Standards.

### Example snippet

A minimal usage only needs

- the constructor, the hexToFloat() or floatToHex functions.

```cpp
#include "DataConversion.h"
...

uint16_t higher, lower;

DataConversion DC;
  ...
 float num=DC.hexToFloat(0x41, 0xCC, 0x8f, 0x5c);
 float num2=DC.hexToFloat(0x41CC, 0x8f5c);
 DC.floatToHex(higher, lower, 25.57);

```

## Operational

See examples.
