#include <iostream>
#include <stack>

int main() {
    // Declare a stack of integers
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element of the stack
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Pop an element from the stack
    myStack.pop();

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Print the size of the stack
    std::cout << "Stack size: " << myStack.size() << std::endl;

    return 0;
}
