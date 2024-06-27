
//  finding the fabbnaci series 

#include<bits/stdc++.h>
using namespace std;

int main(){
    
int n1=0,n2=1;

for (int i = 0; i < 10; i++)
{
   int sum=(n1+n2);
   cout<<sum<<" ";
   n1=n2;
   n2=sum;
    
}




    return 0;
}