#include <iostream>
using namespace std;
int main()
{
    double a1, b1, c1, a2, b2, c2;
    bool haveNoSol, haveOneSol, haveManySol;
    cout << "Input a1\n"; cin >> a1; //����. � ������� ���������
    cout << "Input a2\n"; cin >> a2; //����. a ������� ���������
    cout << "Input b1\n"; cin >> b1; //����. b ������� ���������
    cout << "Input b2\n"; cin >> b2; //����. b ������� ���������
    cout << "Input c1\n"; cin >> c1; //����. c ������� ���������
    cout << "Input c2\n"; cin >> c2; //����. c ������� ���������
    if ((a1 / a2) == (b1 / b2) && (a1 / a2)  != (c1 / c2)) {
        cout << "System has no any solutions.\n";
        haveNoSol = true;
    }
    else {
        if ((a1 / a2) == (b1 / b2) && (a1 / a2) == (c1 / c2)) {
            cout << "System has infinity solutions.\n";
            haveManySol = true;
        }
        else {
            cout << "System has only 1 solution.\n";
            haveOneSol = true;
        }
    }
    system("pause");
}
