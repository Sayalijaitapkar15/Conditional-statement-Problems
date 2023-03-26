#include<iostream>
using namespace std ;
int main(){
    char oper;
    int num1,num2 ;
    cout<<"Enter an operator(+,-,*,/) : ";
    cin>>oper;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2 ;
    switch(oper){
        case '+' :
          cout<<num1+num2 ;
          break;
        case '-' :
            cout<<num1-num2;
            break;
        case 3 : 
            cout<<num1*num2;
            break;
        case 4 : 
            cout<<num1/num2;
            break;
    }
    return 0 ;
}