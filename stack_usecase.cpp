#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Use a stack to check if parentheses in a string is balanced.
// we will only consider '(', ')' parentheses

int main(){
    
    stack<char> s;
    
    string formula = "(((a+b)+(3)))";
    
    for (size_t i = 0; i < formula.length(); i++) {
        
        if (formula[i] == '(') {
            s.push('(');
        } else if (formula[i] == ')') {
            
            // pop the stack, however if its empty, then its an unbalanced one
            
            if (s.empty()) {
                s.push(')'); // make it unempty and break
                break;
            } else {
                s.pop();
            }
        }
    }
    
    if (s.empty()) {
        cout << "Balanced parenthesis\n";
    } else {
        cout << "unbalanced\n";
    }
    
    while (!s.empty()) {
        cout << s.top() << " "; 
        s.pop();                
    }
    
    return 0;
}