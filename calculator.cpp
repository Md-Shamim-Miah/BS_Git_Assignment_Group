#include<iostream>
using namespace std;

// create Function and perform operation

int add(int number1, int number2){
    return number1+number2;
}

int main()
{
    while(1){
    int num1,num2;
    char operation;
    cout<<"Enter The Two Number : ";
    cin>>num1>>num2;
    cout<<"Enter The Operation : ";
    cin>>operation;

    if(operation == '+')
    {

        add(num1,num2);

    }
    else if(operation == '-')
    {
        subtract(num1,num2);

    }
     else if(operation == '+')
    {
        multiplication(num1,num2);

    }
     else if(operation == '+')
    {
        divide(num1,num2);

    }
    else
    {
        cout<<"INvalid Try"<<endl;
    }


    cout<<endl<<endl;

    }

}
