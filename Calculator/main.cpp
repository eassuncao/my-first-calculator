#include <iostream>

using namespace std;

int main()
{
    string sign;

    double num1;

    double num2;

    cout<<"Welcome to my c++ simple calculator!"<<endl;
    cout<<"This calculator supports two numbers at a time and four operators."<<endl<<endl;
    cout<<"Please type the first number in your calculation, then hit Enter:"<<endl;
    cin>>num1;
    cout<<"Now type + to add, - to subtract, * to multiply, or / to divide, then hit Enter:"<<endl;
    cin>>sign;
    cout<<"Please type the second number in your calculation, then hit Enter:"<<endl;
    cin>>num2;

    if(sign == "+"){
        cout<<"Your result is: "<<num1+num2;
    }

    else if(sign == "-"){
        cout<<"Your result is: "<<num1-num2;
    }

    else if(sign == "*"){
        cout<<"Your result is: "<<num1*num2;
    }

    else if(sign == "/"){
        cout<<"Your result is: "<<num1/num2;
    }

    else {
        cout<<"The operator you entered is either not valid or not supported."<<endl;
    }

    return 0;
}
