// Loop code
//for loop
/*

#include <iostream>
using namespace std;
int main() {
int num,sum=0;
cout<<"Enter number "<<endl;
cin>>num;
for(int i=1;i<=num;i++){
    sum=sum+i;
}
cout<<"Sum Number "<<sum;
} */

// while loop

/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n";
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
 return 0;   
}
*/

// do while



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n"<<endl;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;

    }

    while(n>0);
    return 0;
}    
    
   

