# projOOP

```c++
#include "Vector.h"



int main(){
    
    Vector vec;
    Value tmp = 1;
    Value tmp1 = 2;
    Value tmp2 = 3;
    Value tmp3 = 4;
    vec.pushBack(tmp);
    vec.pushBack(tmp1);
    vec.pushBack(tmp2);
    vec.pushBack(tmp3);
    cout << vec.size() << endl;
    vec.popFront();
    for(int i = 0; i < vec.size(); i++){
        cout << "i: " << i << " val: " << vec[i] << endl;
    }
    cout << "find " << vec.find(3) << endl;    
}
```
