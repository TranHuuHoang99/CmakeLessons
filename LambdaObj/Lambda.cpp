#include "Lambda.hpp"

Lambda::Lambda() : localValue(1){
    cout << localValue << endl;
    this->_mainFunction();
    cout << localValue << endl;
}

Lambda::~Lambda() {

}

void Lambda::_mainFunction(void) {
    [&](int _localValue) {
        localValue = _localValue;
    }(1999);
}