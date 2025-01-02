//calculator
#include <iostream>
using namespace std;
int main(){
    double a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    double b;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char c;
    cout <<"enter the op"<<endl;
    cin>>c;
    switch(c){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"invalid"<<endl;
        break;
    }
}