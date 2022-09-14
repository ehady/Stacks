#pragma once

class Stack
{
    int mem[100];
    int elements;

public:
    Stack() : elements(0) {}

    void push(int x)
    {
        mem[elements++] = x;
        elements++;
    }
    int top()
    {
        return mem[elements - 1];
    }
    void pop()
    {
        elements--;
    }
};
