#include <iostream>
using namespace std;
int *arry;
int top;
int size;
class stack
{
public:
    stack(int size)
    {
        arry[size];
        top = -1;
    }
};
void push(int data)
{
    if (top == -1)
    {
        top = 0;
        arry[top] = data;
        cout << arry[top];
    }
    else if (top == size - 1)
    {
        cout << "the given arry is over flow" << endl;
    }
    else
    {
        top++;
        arry[top] = data;
        cout << arry[top];
    }
}
int display()
{
    if (top >= 0)
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arry[i];
        }
    }
    else
    {
        cout << "the array is under flow" << endl;
    }
}
int main()
{
    stack st(5);
    st.push(45);
    st.display();
}