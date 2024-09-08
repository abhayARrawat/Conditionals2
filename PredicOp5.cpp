#include <iostream>
using namespace std;
int main(){
    int a = 18; int b = 12;  
    bool t = (a > 20 && b < 15)? true : false;
    cout <<"Value of t: " << t ;
    return 0;
}
/*The condition is a logical AND (&&) means both conditions must be true for the entire expression to be true
Since the first condition (a > 20) is false the entire condition consider false
So the output is 0.
*/