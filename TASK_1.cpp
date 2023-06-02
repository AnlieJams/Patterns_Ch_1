#include <iostream>
#include <vector>     
#include <algorithm> 
using namespace std;

int main() {

    //Задание 1: Возврат правды или лжи

    setlocale(0, "");
    int n; vector <int> vec;

    cout << "Введите количество элементов последовательности: "; cin >> n;

    int a;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ") "; cin >> a;
        vec.push_back(a);
    }

    cout << "Вот как выглядит последовательность до: ";

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    sort(vec.begin(), vec.end());
    cout << endl << "После сортировки: ";

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    sort(vec.begin() + n / 2, vec.end());
    cout << endl << "ИИИИ еще раз: \n";

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    system("pause");


}