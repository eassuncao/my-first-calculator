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
    cout<<"Now enter the operator:"<<endl<<"+ for addition"<<endl<<"- for subtraction"<<endl<<"* for multiplication"<<endl<<"/ for division"<<endl<<
    "^ for power"<<endl<<"v for root"<<endl<<"then hit Enter:"<<endl;
    cin>>sign;
    cout<<"Please type the number that will be used by the operator, then hit Enter:"<<endl;
    cin>>num2;
    cout<<endl;

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

    else if(sign == "^"){

        double resultPower = 1;

        for(double exponent = num2; exponent != 0; exponent --){

            resultPower *= num1;

        }

        cout<< "Your result is: " << resultPower << endl;
    }

    else if(sign == "v"){

        double resultRoot = 1;

        for(double exponent = num2; exponent != 0; exponent --){

            resultRoot /= num1;

        }

        cout<< "Your result is: " << resultRoot << endl;
    }

    else {
        cout<<"The operator you entered is either not valid or not supported."<<endl;
    }

    return 0;
}
