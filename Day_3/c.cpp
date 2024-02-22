// operator
//1

#include<iostream>
using namespace std;
int main(){
int i=20;
 //20     21
i=i++ +  ++i;
// 40    41
i=--i  - i++;
int j=20,k;
//  -2   21   -2    20
k= --i + ++j - --i + j++;

cout<<k<<" "<<endl;



cout<<i<<" "<<endl;
return 0;
}