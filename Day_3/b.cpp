#include <iostream>
using namespace std;
int main(){
char op;
int num1,num2;
cout<<"Enter Two number "<<endl;
cin>>num1>>num2;
cout<<"Enter operator "<<endl;
cin>>op;
switch(op){
    case '+':
    cout<<num1+num2<<endl;
    break;
    case '-':
    cout<<num1-num2<<endl;
    break;
    case '*':
    cout<<num1*num2<<endl;
    break;
    case '/':
    cout<<num1/num2<<endl;
    break;

default:
cout<<"Sorry Please enter correct";

}
return 0;
}