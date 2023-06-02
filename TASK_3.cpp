#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Задание 3: Контейнеры для чисел


    struct AddConstant {
    int constant;

    
    AddConstant(int value) : constant(value) {}

  
    void operator()(int& value) const {
        value += constant;
    }
};

int main() {
    
    vector<int> myVector = { 1, 2, 3, 4, 5 };

    cout << "Исходный вектор: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    
    AddConstant addConstant(3);

    
    for_each(myVector.begin(), myVector.end(), addConstant);

    
    cout << "Измененный вектор: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
