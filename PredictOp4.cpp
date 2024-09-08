#include<iostream>
using namespace std;

int main(){
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;//Use a ternary operator to print either '3' or '1' 
    return 0;
}
/*Output is :- First character 1 
               Second character 49 because ASCII value of 1 is 49
*/