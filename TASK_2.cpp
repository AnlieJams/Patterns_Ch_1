#include <iostream>
#include <vector>


using namespace std;


//������� 2: ��������� ������������ 

void multiplyVectorElements(vector<int>& vec, int coefficient) {
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = vec[i] * coefficient;
    }
}

int main() {



    setlocale(0, "");
   
    vector<int> myVector = { 1, 2, 3, 4, 5 };

    
    cout << "�������� ������: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;


    multiplyVectorElements(myVector, 2);

    
    cout << "���������� ������: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
