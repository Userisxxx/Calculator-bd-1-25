#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n; //выбор операции
    double a, b; //выбор чисел
    cout << "CALCULATOR" << endl; //название
    while (true) {   //цикл повторения меню
        cout << "\n1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Степень" << endl;
        cout << "6. Корень" << endl;
        cout << "7. Процент" << endl;
        cout << "8. Факториал" << endl;
        cout << "9. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> n; //выбор действия с 1-9
        if (n == 9) { //если пункт 9 то выход
            break;
        }
        if (n >= 1 && n <= 5) { //выбор пункта до степени включительно тк далее требуется только одно число
            cout << "Введите два числа: ";
            cin >> a >> b; //сохраняет числа
        }
        switch (n) { //перенаправляет на нужную функцию 
        case 1:
            cout << "Результат: " << a + b << endl;
            break;
        case 2:
            cout << "Результат: " << b - a << endl;
            break;
        case 3:
            cout << "Результат: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Результат: " << a / b << endl;
            else
                cout << "На ноль делить нельзя" << endl;
            break;
        case 5:
            cout << "Результат: " << pow(a, b) << endl; //степень
            break;
        case 6:
            cout << "Введите число: ";
            cin >> a;
            if (a >= 0)
                cout << "Результат: " << sqrt(a) << endl; //корень
            else
                cout << "Ошибка: отрицательное число" << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> a;
            cout << "Результат: " << a / 100 << endl; //процент, 1 сотая числа
            break;
        case 8:
            cout << "Введите число: ";
            cin >> n; //факториал
            a = 1;
            if (n < 0) {
                cout << "Ошибка: отрицательное число" << endl;
            }
            else {
                for (int i = 1; i <= n; i++) { //перебираем числа от 1 до н
                    a = a * i; //результат * на текущее число
                }
                cout << "Факториал: " << a << endl;
            }
            break;
        default: //если операции нет 
            cout << "Нет такой операции" << endl;
        }
    }
    cout << "Программа завершена" << endl;
    return 0; //завершение проги
}
