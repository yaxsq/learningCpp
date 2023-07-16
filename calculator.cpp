#include <iostream>

int main() {

//variables to store operator and numbers
    char op;
    double n1;
    double n2; 

//input of operator and numbers
    std::cout << "Enter the operator (+ - * / ^): ";
    std::cin >> op;
    std::cout << "Enter the number: ";
    std::cin >> n1;
    std::cout << "Enter the number: ";
    std::cin >> n2;

//result printed to avoid repetition
    std::cout << "Result: ";

    switch (op) {
        case '+':
            std::cout << n1+n2;
            break;
        case '-':
            std::cout << n1-n2;
            break;
        case '*':
            std::cout << n1*n2;
            break;
        case '/':
            std::cout << n1/n2;
            break;

//power requires loop and extra variable / recursive approach could lead to not using the extra variable (result)
        case '^':
            double result;
            result = n1;
            for (int i = 1; i < n2; i++) {
                result = result*n1;
            }
            std::cout << result;
            break;
        default: 
            std::cout << "Invalid operator input.";
            break;
    }

//trying out ternary operator
    std::cout << "\nUsually* ";
    (op == '+' || op == '*' || op == '^') ? std::cout << "Increasing OP" : std::cout << "Decreasing OP";

    return 0;
}
