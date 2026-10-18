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




int  MyRound(float number) {

    
    int IntPart = int(number);

    float FractionPart = GetFractionPart(number);

    if (abs(FractionPart)>=0.5) {
    
    
        if (number >0) {
        
            return  ++IntPart;

        }
        else {
        
            return --IntPart;
        
        }
    
    
    
    }
    else {
    
    
        return IntPart;
    }







}





int main()
{
    float number = ReadNumber();



    cout << "My Round Result:";
    cout << MyRound(number)<<endl;
    cout << "C++ Round Result:";
    cout << round(number);

 

}

 
