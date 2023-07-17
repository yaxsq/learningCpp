#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    int range;
    std::cout << "Enter range: ";
    std::cin >> range;

    int num = (rand() % range) + 1;
    int guess;
    int tries = 0; 

    do {
        tries++;
        std::cout << "Enter guess: ";
        std::cin >> guess;

        if (guess > num) {
            std::cout << "Guess lower\n";
        } else if (guess < num) {
            std::cout << "Guess higher\n";
        }

    } while (guess != num);

    std::cout << "\n" << tries << " tries.";
    // std::cout << "-End-";

    return 0;
}