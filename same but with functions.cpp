#include <iostream>

using namespace std;
    
float summation(float number1, float number2){
    return number1 + number2;
}

float subtraction(float number1, float number2){
    return number1 - number2;
}

float multiplication(float number1, float number2){
    return number1 * number2;
}
float division(float number1, float number2){
    return number1 / number2;
}
int main()
{
    int option;
    float number1, number2;
    
    
    cout<<"Welcome!  \nTo sum, type 1:  \nTo subtract, type 2:  \nTo multiply, type 3: \nTo divide, type 4: \n";
    cin>> (option);
    
    cout<<"Type your first number:  ";
    cin>> (number1);
    
    cout<<"Type your second number:  ";
    cin>> (number2);
    
    switch (option)
    {
        case 1:
             
            cout<<"The result is: "<< summation(number1,number2);
            break;
            
        case 2:
             
            cout<<"The result is: "<< subtraction(number1,number2);
            break;  
             
        case 3:
             
            cout<<"The result is: "<< multiplication(number1,number2);
            break;
             
          case 4:
             
            cout<<"The result is: "<< division(number1,number2);
            break;
           
        default:
           
            cout<<"Please try again with 1,2,3 or 4";
            
    }
    return 0;
}
