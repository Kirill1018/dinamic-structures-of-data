#include <iostream>

using namespace std;

int main() {
    int steck[20];
    int i = -1;  // объявили стек

    for (int j = 0; j < 6; j++) {
        int a;

        cin >> a;

        i++;  // увеличиваем i на один

        steck[i] = a;  // добавляем в стек элемент
    }

    if (i == -1) cout << "Стек пуст";  // проверяем пуст ли стек (нет)

    cout << steck[i] << " это верхний элемент стека";

    cout << "Сейчас мы удалим верхний элемент";

    i--;  // уменьшаем i на один

    system("pause");
    return 0;
}