#include<iostream>
using namespace std;

int main( ) {
    int a = 5, b, c ;
    b = a = 15 ; //ternary right to left so a=15
    c = a < 15 ; //relational operator right to left so 15 < 15 false so c=0
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
} 
// output is :- a = 15, b = 15, c = 0
             