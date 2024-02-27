#include <iostream>
#include "Helpers.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int result = square_of_sum(5, 8);
    std::cout << "Квадрат суммы чисел равен: " << result << std::endl;
    return 0;
}