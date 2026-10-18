#include <iostream>
#include<cmath>

using namespace std;


float  ReadNumber() {
    float  number;
    cout << "enter number " << endl;
    cin >> number;
    return number;
}


float GetFractionPart(float number) {

    return number - int(number);

}



int  MyCeil(float number) {

    if (abs(GetFractionPart(number)) > 0) {

        if (number > 0) {

            return int(number) + 1;

        }
        else {

            return int(number);

        }

    }
    else {
    
    
        return number;
    }


}





int main()
{
    float number = ReadNumber();



    cout << "My Ceil Result:";
    cout << MyCeil(number) << endl;
    cout << "C++ Ceil Result:";
    cout << ceil(number);



}















