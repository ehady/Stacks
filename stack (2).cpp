#include <iostream>
#include <stack>

class stack
{
    int mem[100];
    int elements; // fields are by default private
public:
    stack() : elements(0) {} // set elements to 0

    int size()
    { // public method of the class stack
        return elements;
    }

    void push(int x) {
        mem[elements] = x;
        elements++;
    }
    //top()
    //pop()
};
int main()
{
    stack s;

    std::cout << s.size() << std::endl;

    std::stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    std::cout << st.top() << std::endl;

    st.pop();   // remove 3 from the stack
    st.push(4); // top() now returns 4
    st.push(5); // top() now returns 5
    st.pop();   // remove 5 from the stack
}
