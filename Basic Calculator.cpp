#include <iostream>

double add(double numbers[], int count) {
    double sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += numbers[i];
    }
    return sum;
}

double subtract(double numbers[], int count) {
    double result = numbers[0];
    for (int i = 1; i < count; ++i) {
        result -= numbers[i];
    }
    return result;
}

double multiply(double numbers[], int count) {
    double result = 1;
    for (int i = 0; i < count; ++i) {
        result *= numbers[i];
    }
    return result;
}

double divide(double numbers[], int count) {
    double result = numbers[0];
    for (int i = 1; i < count; ++i) {
        if (numbers[i] == 0) {
            std::cout << "Cannot divide by zero" << std::endl;
            return 0;
        }
        result /= numbers[i];
    }
    return result;
}

int main() {
    std::cout << "Select operation:" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;

    char choice;
    std::cin >> choice;

    int numCount;
    std::cout << "Enter the number of numbers: ";
    std::cin >> numCount;

    double numbers[numCount];
    for (int i = 0; i < numCount; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    double result;
    char operatorSymbol;

    switch (choice) {
        case '1':
            result = add(numbers, numCount);
            operatorSymbol = '+';
            break;
        case '2':
            result = subtract(numbers, numCount);
            operatorSymbol = '-';
            break;
        case '3':
            result = multiply(numbers, numCount);
            operatorSymbol = '*';
            break;
        case '4':
            result = divide(numbers, numCount);
            operatorSymbol = '/';
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            return 1;
    }

    std::cout << "Result of ";
    for (int i = 0; i < numCount - 1; ++i) {
        std::cout << numbers[i] << " " << operatorSymbol << " ";
    }
    std::cout << numbers[numCount - 1] << " = " << result << std::endl;

    return 0;
}
