#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter your choice (+,-,*,/) : ";
    cin>>ch;
    float a,b;
    switch(ch){
        case '+':
        cout<<"Enter your first Number : ";
        cin>>a;
        cout<<"Enter your second Number : ";
        cin>>b;
        cout<<"Adding of "<<a <<" & "<< b <<" is :"<<(a+b)<<endl;
        break;
        case '-':
        cout<<"Enter your first Number : ";
        cin>>a;
        cout<<"Enter your second Number : ";
        cin>>b;
        cout<<"Substraction of "<<a <<" & "<< b <<" is :"<<(a-b)<<endl;
        break;
        case '*':
        cout<<"Enter your first Number : ";
        cin>>a;
        cout<<"Enter your second Number : ";
        cin>>b;
        cout<<"Multiplication of "<<a <<" & "<< b <<" is :"<<(a*b)<<endl;
        break;
        case '/':
        cout<<"Enter your first Number : ";
        cin>>a;
        cout<<"Enter your second Number : ";
        cin>>b;
        cout<<"Division of "<<a <<" & "<< b <<" is :"<<(a/b)<<endl;
        break;
        default: cout<<"Sorry not choices match :";
        break;
    }
    return 0;
}