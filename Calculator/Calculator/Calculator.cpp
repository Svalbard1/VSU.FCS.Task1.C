#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char operation;
    double firstNumber, secondNumber, result;

    cout << "Введите первое число: ";
    cin >> firstNumber;
    cout << "Введите второе число: ";
    cin >> secondNumber;
    cout << "Выберите операцию (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
    case '+':
        result = firstNumber + secondNumber;
        break;
    case '-':
        result = firstNumber - secondNumber;
        break;
    case '*':
        result = firstNumber * secondNumber;
        break;
    case '/':
        result = firstNumber / secondNumber;
        break;
    default:
        cout << "Неправильная операция!";
        return 0;
    }


    if ((secondNumber == 0) and (operation == '/'))
        cout << "На 0 делить нельзя" << endl;
    else
        cout << "Результат: " << result;

        return 0;
}
