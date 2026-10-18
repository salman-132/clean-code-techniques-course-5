#include <iostream>
using namespace std;


void FillArray(int Array[100],int &length) {
    length = 6;

    Array[0] = 10;
    Array[1] = 20;
    Array[2] = 30;
    Array[3] = 30;
    Array[4] = 20;
    Array[5] = 10;



}


bool IsPalindromeArray(int Array[100], int& Length) {

    for (int i = 0; i < Length; i++) {

        if (Array[i] != Array[Length - i - 1]) {

            return false;

        }


    }


    return true;
     


}



 

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}





int main() {
    int Array[100], length;
    FillArray(Array,length);

    cout << "\n Array Elements \n";
    PrintArray(Array,length);




    if (IsPalindromeArray(Array,length)) {
    
        cout << "\n Yes Array is Palindome \n";
    
    
    }
    else
    {


        cout << "\n No Array is Not Palindrom \n";


    }




    return 0;
}
 
