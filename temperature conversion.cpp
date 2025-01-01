//temperature conversion
#include <iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout<< "F= Fahrenheit"<<endl;
    cout << "C= Celcius"<<endl;
    cin>>unit;
    if(unit=='F'){
        cout<<"Enter the temperature in celcius"<<endl;
    cin>>temp;
    temp=(temp*9/5)+32;
    cout<<temp<<"F"<<endl;

    }
    else if (unit=='c'){
        cout<<"Enter the temperature in farenheit"<<endl;
    cin>>temp;
    temp=(temp-32)*5/9;
    cout<<temp<<"c"<<endl;
    }
}
