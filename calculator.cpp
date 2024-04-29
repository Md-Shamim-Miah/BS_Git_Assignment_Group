#include<iostream>
using namespace std;

// create Function and perform operation

void details(int num)
{
    if(num%2==0)
    {
        cout<<"( Even, ";
    }
    else 
    {
        cout<<"( Odd, ";
    }

     if(num>=0)
    {
        cout<<"Possitive )";
    }
    else
    {
        cout<<"Negative )";
    }

}

void symbol(int number1, int number2,int number3, char symbol)
{
    details(number1);
    cout<<" "<<symbol<<" ";
    details(number2);
    cout<<" = ";
    details(number3);
    cout<<endl;

}

void addition(int number1, int number2){
    int resultOfTwoNumbers = number1+number2;
    cout<<"The Summation of two numbers is : "<<resultOfTwoNumbers<<endl;
    symbol(number1,number2,resultOfTwoNumbers,'+');
    

}

void substraction(int number1,int number2)
{
    int resultOfTwoNumbers=number1-number2;
    cout<<"The Substraction of  of two numbers is:  "<<resultOfTwoNumbers<<endl;
    symbol(number1,number2,resultOfTwoNumbers,'-');
}

void multiplication(int number1, int number2){
    int resultOfTwoNumbers=number1*number2;
    cout<<"The Multiplication of  of two numbers is:  "<<resultOfTwoNumbers<<endl;
    symbol(number1,number2,resultOfTwoNumbers,'*');
}

void division(int number1, int number2){
    int resultOfTwoNumbers=number1/number2;
    cout<<"The Divison of  of two numbers is:  "<<resultOfTwoNumbers<<endl;
    symbol(number1,number2,resultOfTwoNumbers,'/');

}

int main()
{
    
    int num1,num2;
    char operation;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter The Operation : ";
    cin>>operation;

    if(operation == '+')
    {

        addition(num1,num2);

    }
    else if(operation == '-')
    {
        substraction(num1,num2);

    }
     else if(operation == '*')
    {
        multiplication(num1,num2);

    }
     else if(operation == '/')
    {
        division(num1,num2);

    }
    else
    {
        cout<<"Invalid Try";
    }

    cout<<endl;
}
