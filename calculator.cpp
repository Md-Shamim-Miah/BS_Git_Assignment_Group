#include<iostream>
using namespace std;

// create Function and perform operation

void divide(int num1,int num2)
{
    int ans=num1/num2;
    cout<<"The Division of the numbers "<<ans<<endl;
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
        cout<<"Invalid Try"<<endl;
    }


    cout<<endl<<endl;

    }

}
