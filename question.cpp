#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool areParenthesesBalanced(const std::string& expression) {
    std::stack<char> charStack;

    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            charStack.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (charStack.empty()) {
                return false; // Unmatched closing parenthesis
            }

            char top = charStack.top();
            charStack.pop();

            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false; // Mismatched closing parenthesis
            }
        }
    }

    return charStack.empty(); // Check for unmatched opening parenthesis
}

int main() {
    // Test the function with different expressions
string expression1 = "{[()]}";
    string expression2 = "{[(])}";
    string expression3 = "((()))";

    cout << "Expression 1 is " << (areParenthesesBalanced(expression1) ? "balanced" : "not balanced") << endl;
    cout << "Expression 2 is " << (areParenthesesBalanced(expression2) ? "balanced" : "not balanced") << endl;
    cout << "Expression 3 is " << (areParenthesesBalanced(expression3) ? "balanced" : "not balanced") <<endl;

    return 0;
}
