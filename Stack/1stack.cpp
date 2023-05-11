#include <iostream>
using namespace std;
#define n 10000

class stack
{
    int *arr;
    int top;

    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack OverFlow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
        }
        top--;
    }

    int top()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
        }

        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
};
