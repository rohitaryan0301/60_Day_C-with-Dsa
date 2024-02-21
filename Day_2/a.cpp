#include<iostream>
using namespace std;
int main() {


  
   int saving;
   cout<<"Enter your saving"<<endl;
   cin>>saving;
   if(saving>500) {
      if(saving>1000){
         cout<<"Non-Veg Party"<<endl;
      }
      else 
 cout<<" Veg-Party"<<endl;
   }
   else 
   cout<<"No Party"<<endl;
   
   return 0;
}
