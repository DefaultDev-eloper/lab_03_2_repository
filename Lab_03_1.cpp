// Lab_03_2.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.1
#include <iostream>

using namespace std;

int main(){
    double F;
    double a;
    double x;
    double c;

    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    cout << "a = "; cin >> a;

    if (c < 0 && a != 0)
        F = -a * (x*x);
    if (c > 0 && a == 0)
        F = (a - x) / (c * x);
    if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
        F = x / c;

    cout << endl;
    cout << "1) F =" << F << endl;

    if (c < 0 && a != 0)
        F = -a * (x*x);
    else
        if (c > 0 && a == 0)
            F = (a - x) / (c * x);
        else
            F = x / c;
    cout << "2) F = " << F << endl;
    
    cin.get();
    return 0;
}