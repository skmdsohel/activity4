#include<iostream> 
#include<math.h> 
#include<algorithm>

using namespace std; 
int x = 0;
void showMenu()
{
    cout<<endl; 
    cout<<"******************** Calculator ******************\n"; 
    cout<<"---------------------------------------------------\n";  
    cout<<"------------------------------------------------\n"; 
    cout<<"1: Addition\t\t"<<endl; 
    cout<<"2: Subtraction\t\t"<<endl; 
    cout<<"3: Multiplication\t\t"<<endl; 
    cout<<"4: Division\t\t"<<endl; 
    cout<<"5: Power\t\t"<<endl; 
    cout<<"6: Square root\t"<<endl;
}

float getNum1()
{
    float a;
    cout<<"Enter 1st number : "; 
    cin>>a; 
    return a;
}

float getNum2()
{
    float b;
    cout<<"Enter 1st number : ";
    cin>>b;
    return b;
}

float add(float num1,float num2)
{
    float sum=num1+num2;
    return sum;
}

float subtract(float num1,float num2)
{
    float sub=num1-num2;
    return sub;
}

float multiply(float num1,float num2)
{
    float mul=num1*num2;
    return mul;
}

float divide(float num1,float num2)
{
    if(num2==0)
    {
        cout<<"Second number can't be zero for division"<<endl;
        exit(0);
    }
    float division=num1/num2;
    return division;
}

int power(float num1,float num2)
{
    int m = int (num1);
    int n = int (num2);
    float po = pow (num1, num2);
    return po;
}


float perform(float num1,float num2)
{
    int choice;
    float r;
    cout<<"Enter the function that you want to perform : "; 
    cin>>choice;
    switch(choice) 
    { 
    case 1: 
    r = add(num1,num2); 
    break; 
    case 2:  
    r = subtract(num1,num2); 
    break; 
    case 3:  
    r = multiply(num1,num2); 
    break; 
    case 4:  
    r = divide(num1,num2); 
    break; 
    case 5:
    r = power(num1,num2);
    break; 
    default: 
    cout<<"Wrong Input"<<endl; 
    } 
    return r;
}

int main () 
{  
float number1,number2; 
float result; 
do
{
showMenu();
number1 = getNum1();
number2 = getNum2();
result = perform(number1,number2);

cout<<"The result of the operation"<< " = " <<result <<endl;
}while (x==0);
}
