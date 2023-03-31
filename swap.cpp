#include<iostream>
using namespace std;

int main(){
    int number1,number2,temp;
    cin>>number1>>number2;
    temp = number1;
    number1 = number2;
    number2 = temp;
    cout<<"After swapping : "<<number1<<" "<<number2;
    return 0;
}