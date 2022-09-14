#include <iostream>
#include <stdexcept>

class Stack
{
    int capacity;
    int *mem;
    int elements;

public:
    Stack() : capacity(10), mem(new int[capacity]), elements(0) {}
    void push(int x)
    {
        if (elements == capacity)
        {
            int *tmp = new int[capacity * 2];
            for (int i = 0; i < capacity; ++i)
            {
                tmp[i] = mem[i];
            }
            delete[] mem;
            mem = tmp;
            capacity *= 2;
        }
        mem[elements] = x;
        elements++;
    } // bunu ben yaptım idk if tis correct

    int top()
    {
        if (empty)
        {
            throw std::runtime_error("top() called on an empty stack.");
        }
        return mem[elements - 1];
    }

    void pop()
    {
        if (empty)
        {
            throw std::runtime_error("pop() called on an empty stack.");
        }
        elements--;
    }
    bool empty()
    {
        if (elements == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ~Stack()
    {
        delete[] mem;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    s.pop();
}