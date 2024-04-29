#include<iostream>
using namespace std;

// create Function and perform operation

void addition(int number1, int number2){
    int resultOfTwoNumbers = number1+number2;
    cout<<"The Summation of two numbers is : "<<resultOfTwoNumbers<<endl;
}

void substraction(int num1,int num2)
{
    int ans=num1-num2;
    cout<<"The Substraction of the numbers "<<ans<<endl;
}

void multiplication(int number1, int number2){
    int resultOfTwoNumbers = number1*number2;
    cout<<"The multiplication of two numbers is : "<<resultOfTwoNumbers<<endl;
}

void division(int num1,int num2)
{
     string num1Type = (num1 % 2 == 0) ? "Even" : "Odd";
    string num1Sign = (num1 >= 0) ? "Positive" : "Negative";
    
    string num2Type = (num2 % 2 == 0) ? "Even" : "Odd";
    string num2Sign = (num2 >= 0) ? "Positive" : "Negative";

    int sumResult = num1 + num2;
    string sumType = (sumResult % 2 == 0) ? "Even" : "Odd";
    string sumSign = (sumResult >= 0) ? "Positive" : "Negative";

    cout << num1 << " + " << num2 << " = " << sumResult << endl;
    cout << "(" << num1Type << "; " << num1Sign << ";) + (" 
         << num2Type << "; " << num2Sign << ";) = (" 
         << sumType << "; " << sumSign << ";)" << endl;
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
