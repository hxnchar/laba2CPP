#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a1, b1, c1, a2, b2, c2;
    bool haveNoSol, haveOneSol, haveManySol;
    cout << "Input a1\n"; cin >> a1; //êîýô. à ïåðâîãî óðàâíåíèÿ
    cout << "Input a2\n"; cin >> a2; //êîýô. a âòîðîãî óðàâíåíèÿ
    cout << "Input b1\n"; cin >> b1; //êîýô. b ïåðâîãî óðàâíåíèÿ
    cout << "Input b2\n"; cin >> b2; //êîýô. b âòîðîãî óðàâíåíèÿ
    cout << "Input c1\n"; cin >> c1; //êîýô. c ïåðâîãî óðàâíåíèÿ
    cout << "Input c2\n"; cin >> c2; //êîýô. c âòîðîãî óðàâíåíèÿ
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
