#include <iostream>

int main() {

    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    // std::cout << "\n";

    int age;
    std::cout << "Enter age: ";
    std::cin >> age;
    // std::cout << "\n";

    std::cout << "Your name is " << name << " and you are " << age << " years old.\n";


    typedef std::string txt_t;

    txt_t text;
    
    std::cout << "Enter text: ";
    std::getline(std::cin >> std::ws,  text);
    std::cout << "Text: " << text;

    return 0;
}