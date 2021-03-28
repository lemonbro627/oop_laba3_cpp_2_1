#include "Drob.h"

typedef unsigned int UINT;

class DrobArr {
protected:
    Drob* Arr;
    UINT Len = 0;
public:
    DrobArr();
    DrobArr(UINT k);
    ~DrobArr();
    //------------------------
    void SetSize(UINT k);
    UINT GetSize();
    //------------------------
    void Copy(DrobArr& Arr2, UINT begin, UINT end);
    void Sort();
    void Clear();
    //------------------------
    Drob& operator[](UINT i);
    bool operator==(DrobArr& Arr1);
    DrobArr& operator=(DrobArr Arr1);
    //------------------------
};