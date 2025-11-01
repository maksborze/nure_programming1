#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double x1, y1, x2, y2, x3, y3;

    // x1
    std::cout << "Введіть координату x1: ";
    if (!(std::cin >> x1)) {
        std::cout << "Помилка! Ви ввели не число.\n";
        return 1;
    }

    // y1
    std::cout << "Введіть координату y1: ";
    if (!(std::cin >> y1)) {
        std::cout << "Помилка! Ви ввели не число.\n";
        return 1;
    }

    // x2
    std::cout << "Введіть координату x2: ";
    if (!(std::cin >> x2)) {
        std::cout << "Помилка! Ви ввели не число.\n";
        return 1;
    }

    // y2
    std::cout << "Введіть координату y2: ";
    if (!(std::cin >> y2)) {
        std::cout << "Помилка! Ви ввели не число.\n";
        return 1;
    }

    // x3
    std::cout << "Введіть координату x3: ";
    if (!(std::cin >> x3)) {
        std::cout << "Помилка! Ви ввели не число.\n";
        return 1;
    }

    // y3
    std::cout << "Введіть координату y3: ";
    if (!(std::cin >> y3)) {
        std::cout << "Помилка! Ви ввели не число.\n";
        return 1;
    }

    // Обчислення довжин сторін
    double a = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    double b = std::sqrt(std::pow(x3 - x2, 2) + std::pow(y3 - y2, 2));
    double c = std::sqrt(std::pow(x1 - x3, 2) + std::pow(y1 - y3, 2));

    double perimeter = a + b + c;

    std::cout << "Периметр трикутника: " << perimeter << std::endl;

    return 0;
}