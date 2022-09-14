#include <iostream>
#include "stack.h"
void f(Stack &s) {
    for(int i = 0; i < 50 ; ++i)
    {
        s.push(i * i);
    }
    for(int i = 0; i < 50; ++i)
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}