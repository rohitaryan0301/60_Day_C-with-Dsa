 /*#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three number"<<endl;
cin>>a>>b>>c;
if(a>b){
    if(a>c){
        cout<<"Greater number "<<a;
        
    }
    else
    
    cout<<"Greater number  "<<c;

}
else 
cout<<"greater number "<<b;
return 0;
} 
*/



#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    if(num%2==0) {
        cout<<"Even number ";
    }
    else 
    cout<<"Odd Number";
    return 0;
}