#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    int pX;
    int pY;
    int pRes;
    char pOp;
    char restart;

    setlocale(LC_ALL, "RUSSIAN");

    do {
        cout << "\n\nДобро пожаловать в улучшеный калькулятор от Дэфэнсива!\n";

        cout << "\nВведи первое число: ";
        cin >> pX;

        cout << "\nВведи второе число: ";
        cin >> pY;

        cout << "\nВведи знак действия [+, -, *, / ]: ";
        cin >> pOp;

        if (pOp == '+') {
            pRes = pX + pY;
        } else if (pOp == '-') {
            pRes = pX - pY;
        } else if (pOp == '*') {
            pRes = pX * pY;
        } else if (pOp == '/') {
            if (pY != 0) {
                pRes = pX / pY;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
                continue;
            }
        } else {
            cout << "Ошибка: некорректный оператор!" << endl;
            continue;
        }

        cout << "Ответ: " << pRes << endl;

        cout << "\nВы хотите перезапустить калькулятор? [Д/Н]: ";
        cin >> restart;
    } while (restart == 'Д' || restart == 'Н');

    return 0;
}
