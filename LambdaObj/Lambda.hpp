#ifndef LAMBDA_HPP_
#define LAMBDA_HPP_

#include <iostream>

using namespace std;

class Lambda {
    public:
        Lambda();
        ~Lambda();
        int localValue;

    private:
        void _mainFunction(void);
};

#endif // LAMBDA_HPP_