#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter A Button "<<endl;
    cin>>button;
    switch(button) {
        case 'a':
        cout<<"Rohit"<<endl;
        break;
       case 'b':
        cout<<"Kumar"<<endl;
        break;
        case 'c':
        cout<<"Aryan"<<endl;
        break;
        case 'd':
        cout<<"Satya"<<endl;
        break; 
        default:
        cout<<"No problem";
        
    }
}