#include <iostream>
using namespace std;
#include<cmath>;

int ReadNumber() {
    int number;
    cout << "enter number " << endl;
    cin >> number;
    return number;
}



int MyABS(int number) {
    if (number >=0) {
        return number;
    
    }
    else {
    

        return number * (-1);



    }


}



int main()
{
     
    int number =ReadNumber();

    cout << "My abs Reasult:";
    cout << MyABS(number);
    cout << "\n";
    cout << "C++ abs Reasult";
    cout << abs(number);




}
 
