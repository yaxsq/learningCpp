#include <iostream>
#include <cmath>

int main() {

    double x;
    double y;
    double hyp;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    x = pow(x, 2);
    y = pow(y, 2);
    // hyp = sqrt(x+y);
    hyp = pow((x+y), 0.5);

    std::cout << "Hypotenuse is " << hyp << "\n";
    std::cout << "x^2: " << x << "\n";
    std::cout << "y^2: " << y << "\n";

    return 0;
}