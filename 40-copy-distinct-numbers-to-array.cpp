#include <iostream>
using namespace std;

void fillArray(int Array[100], int& length) {
    length = 10;
    Array[0] = 10;
    Array[1] = 10;
    Array[2] = 10;
    Array[3] = 50;
    Array[4] = 50;
    Array[5] = 70;
    Array[6] = 70;
    Array[7] = 70;
    Array[8] = 70;
    Array[9] = 90;
}

void PrintArray(int Array[100], int length) {
    for (int i = 0; i < length; i++)
        cout << Array[i] << " ";
    cout << endl;
}

short FindNumber(int number, int Array[100], int length) {
    for (int i = 0; i < length; i++) {
        if (Array[i] == number)
            return 1;
    }
    return -1;
}

bool IsNumberInArray(int number, int Array[100], int length) {
    return FindNumber(number, Array, length) != -1;
}

void AddArrayElement(int Array[100], int number, int& length) {
    length++;
    Array[length - 1] = number;
}

void CopyDistinctNumberToArray(int Arr1[100], int Arr2[100],
    int lengthArray1, int& lengthArray2) {
    for (int i = 0; i < lengthArray1; i++) {
        if (!IsNumberInArray(Arr1[i], Arr2, lengthArray2)) {
            AddArrayElement(Arr2, Arr1[i], lengthArray2);
        }
    }
}

int main() {
    int Array1[100], lengthArray1;
    int Array2[100], lengthArray2 = 0;

    fillArray(Array1, lengthArray1);

    cout << "\nArray 1 elements:\n";
    PrintArray(Array1, lengthArray1);

    CopyDistinctNumberToArray(Array1, Array2, lengthArray1, lengthArray2);

    cout << "\nArray 2 elements:\n";
    PrintArray(Array2, lengthArray2);

    return 0;
}
