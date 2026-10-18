#include <iostream>
#include<cmath>

using namespace std;


float  ReadNumber() {
    float  number;
    cout << "enter number " << endl;
    cin >> number;
    return number;
}

 



int  MySqrt(float number) {

    return pow(number,0.5);


}





int main()
{
    float number = ReadNumber();



    cout << "My Sqrt Result:";
    cout << MySqrt(number) << endl;
    cout << "C++ Sqrt Result:";
    cout << sqrt(number);



}
