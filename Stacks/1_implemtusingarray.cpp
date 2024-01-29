#include <iostream>
using namespace std;

class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack()
    {
        top = -1;
        size = 10;
        arr = new int[size];
    }
    void push(int x)
    {
        top++;
        arr[top] = x;
    }
    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }
    int getTop()
    {
        return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
};

int main()
{
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);
    cout << "top of stack: " << s.getTop() << endl;
    cout << "size of stack: " << s.getSize() << endl;
    cout << "the element deleted is: " << s.pop() << endl;
    cout << "now size is: " << s.getSize() << endl;
    return 0;
}
