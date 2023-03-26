#include<iostream>
using namespace std ;
int main(){
    int marks ; 
    cout<<"Enter your marks : ";
    cin>>marks ;
    if(marks<100 && marks>90){
        cout<<"A+" ;
    }else if(marks<90 && marks>80){
        cout<<"A";
    }else if(marks<80 && marks>70){
        cout<<"B+";
    }else if(marks<70 && marks>60){
        cout<<"B";
    }else if(marks<60 && marks>50){
        cout<<"C";
    }else if(marks<50 && marks>40){
        cout<<"D";
    }else if(marks<40 && marks>30){
        cout<<"E";
    }else{
        cout<<"F";
    }
    return 0 ;
}