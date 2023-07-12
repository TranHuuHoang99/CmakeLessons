#include <iostream>
#include "Lambda.hpp"

using namespace std;

int _localValue = 1;

int main(void) {

    #if defined(KEY)
        _localValue = 1999;
    #endif //KEY

    cout << _localValue << endl;

    Lambda *_lambda = new Lambda();

    return 0;
}