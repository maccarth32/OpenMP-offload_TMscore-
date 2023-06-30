#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage: ./add_numbers <number1> <number2>\n";
        return 1;
    }

    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);
    int sum = 0;

    #pragma omp target map(tofrom: sum) map(to: num1, num2)
    {
        sum = num1 + num2;
    }

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << "\n";

    return 0;
}

