/*
Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.
*/


#include <iostream>
using namespace std;

void Smaller(int& x, int& y);

int main(){

    int num1, num2;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    Smaller(num1, num2);

    cout << endl << "First number = " << num1 << " Second number = " << num2 << endl;

    return 0;
}

void Smaller(int& x, int& y){
    if(x < y){
        x = 0;
    }
    else if (x==y)
    {
      cout<<"Both are equal";
    }else{
        y = 0;
    }    
}