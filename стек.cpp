#include <iostream>

using namespace std;

int main() {
    int steck[20];
    int i = -1;  // �������� ����

    for (int j = 0; j < 6; j++) {
        int a;

        cin >> a;

        i++;  // ����������� i �� ����

        steck[i] = a;  // ��������� � ���� �������
    }

    if (i == -1) cout << "���� ����";  // ��������� ���� �� ���� (���)

    cout << steck[i] << " ��� ������� ������� �����";

    cout << "������ �� ������ ������� �������";

    i--;  // ��������� i �� ����

    system("pause");
    return 0;
}