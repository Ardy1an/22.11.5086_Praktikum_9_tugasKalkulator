#include <iostream>
#include "cal.h"
#include <conio.h>

int main() {
    Calculator calculator;

    int numCount;
    double num;
    char op;

    std::cout << "Masukkan berapa jumlah angka yang ingin diinput: ";
    std::cin >> numCount;

    std::cout << "Silahkan inputkan angka: " << std::endl;

    for (int i = 0; i < numCount; i++) {
        std::cout << " > ";
        std::cin >> num;
        calculator.addNumber(num);
    }

    std::cout << "Silahkan inputkan operator (+, -, *, /): ";
    op = getch(); 

    double result = calculator.calculate(op);
	
    std::cout << result << std::endl;

    return 0;
}

