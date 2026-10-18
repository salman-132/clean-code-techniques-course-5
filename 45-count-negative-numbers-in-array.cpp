#include <iostream>
using namespace std;


int RandmNumber(int from, int To) {

    int RandomNumber = rand() % (To - from + 1) + from;
    return RandomNumber;
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{


    for (int i = 0; i < arrLength; i++)
        arr[i] = RandmNumber(-100, 100);
}




int CounterNegativeNumberInArray(int Array[100], int length) {

    int counter  = 0;
    for (int i = 0; i < length; i++) {

        if (Array[i] < 0) {

            counter ++;

        }



    }

    return counter ;


}





void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], length;

    cout << "Enter Array Length:";
    cin >> length;

    FillArrayWithRandomNumbers(Array, length);

    cout << "Element in Array:";
    PrintArray(Array, length);

    cout << "\n Negative Number is:" << CounterNegativeNumberInArray(Array, length) << endl;


    return 0;




}
