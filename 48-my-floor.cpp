#include <iostream>
#include<cmath>

using namespace std;


float  ReadNumber() {
    float  number;
    cout << "enter number " << endl;
    cin >> number;
    return number;
}

 




int  MyFloor(float number) {


    if (number > 0) {
        return int(number);
    }
    else {
    
        int num= int(number);
        return --num;
    
    }
   






}





int main()
{
    float number = ReadNumber();



    cout << "My Floor Result:";
    cout << MyFloor(number) << endl;
    cout << "C++ Round Result:";
    cout << floor(number);



}
