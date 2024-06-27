// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     // learing the bitwise operator
//     // int a=1, b=2;
//     // cout<<"(AND bit operator) a & b is :: "<<(a&b)<<endl;
//     // cout<<"(OR bit operator) a | b is :: "<<(a|b)<<endl;
//     // cout<<"(NOT bit operator) a ~ b is :: "<<(~a)<<endl;
//     // cout<<"(NOT bit operator) a ~ b is :: "<<(~b)<<endl;
//     // cout<<"(XOR bit operator) a ^ b is :: "<<(a^b)<<endl;

// // LEFT SHIFT OPERATOR <<

// // cout<<(15<<2)<<endl;
// // cout<<(15>>2);

// //  printing the Fibonacci series

// // int n1=0;
// // int n2=1;

// // for (int i = 0; i <= 99; i++)
// // {
// //    int sum=(n1+n2);
// //    cout<<sum<<" ";
// //    n1=n2;
// //    n2=sum;
// // }
// // cout<<endl;

// //  printing the first 10 prime numbers

// return 0;
// }

//  checking for the prime number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 9;
//     for (int i = 2; i < n; i++)
//     {

//         if (n % i == 0)
//         {
//             /* code */
//             cout << "NO" << endl;
//             break;

//         }
//       else{
//         cout<<"yes";
//       }
//     }

//     return 0;
// }

// coverting decimal to binary

// #include <iostream>
// #include<string>
// using namespace std;
// int main()
// {
//   int n = 3;
//   string bn = " ";
//   if(n==0){
//     bn="0";
//   }
//   else{

//   while (n != 0)
//   {
//     bn = char((n % 2) + '0') + bn;
//     n = n / 2;
//   }
//   }
//   cout << bn;

//   return 0;
// }

// decimal to binary

// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;
// int main()
// {
//   int i=0;
//   int n = 100;
//   string bn = " ";
//   while (n != 0)
//   {

//     int r = (n % 10);
//     int di = (math.pow(2, i) * r);
//     i++;
//     n = n / 10;
//   }
//   cout<<di;

//   return 0;
// }

//  reversing the integer

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n=123;
// int arr[];
// int i=0;
//   string bn=" ";
//   while(n!=0){
//    arr[i]=(n%10);
//    n/=10;
//    i++;
//   }
// for (int i = 0; i <arr.length(); i++)
// {
//   cout<<arr[i];
// }

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n = 123;
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << "Reversed integer: " << reversed << endl;

    return 0;
}

