#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void calculate(float num1,float num2, char opr){
    switch (opr)
    {
    case '+':
        cout << "Sum is :-> " <<num1+num2;   
        // checking condition for sum
        break;
    case '-':
        cout << "Diffrence is :-> " << num1-num2;  
        //checking condition for subtract.
        break;
    case '*':
        cout << "Multiplication is :-> " << num1*num2;
        //checking condition for multiply.
        break;
    case '/':
        if(num2==0){
            cout << "OOPS :-< Denominator can't be zero.";
            // checking whether denominator is zero or not.
        }
        else
            // if denominator is not zero then calculating division.
            cout << "Division is :-> " << num1 / num2 ;
        break;
    
    default:
            //if none of above is correct case.
            cout << "data entered is incorrect:-<" ;
    }

}

int main(){
    float num1,num2;
    char opr;
    cout << "Enter num 1:-> ";
    cin >> num1;   // taking first number as user input.
    cout << "Enter num 2 :-> ";
    cin >> num2;   // taking second number as user input.
    cout << "Enter operation +,-,/,* here ->: ";
    cin >> opr;    // taking operation as user input(+,-,*,/).
    calculate(num1,num2,opr);   // calling our function calculate with sending copies of values of num1,num2 and the operator to be performed.
    return 0;
}
