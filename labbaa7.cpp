//Створити стек цілих чисел. Знайти найменший елемент стеку.
#include <iostream>
#include <stack>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    stack<int> s;
    int n, x, count = 0;
    cout << "Введіть кількість елементів: "; 
    cin >> n;
    cout << "Введіть " << n << " елементів:\n";
    for
        (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);
    }
    int minElement = s.top();
    s.pop();
    while (!s.empty()) {
        int element = s.top();
        s.pop();
        
        if (element < minElement) {
            minElement = element;
        }
    }
    cout << "Найменший елемент стеку: " << minElement << endl;
    return 0;

}


