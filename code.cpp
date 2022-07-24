#include <iostream>

using namespace std;

int main()
{
    int option;
    float number1, number2, subtraction, summation, multiplication, division;
    
    
    cout<<"Welcome!  \nTo sum, type 1:  \nTo subtract, type 2:  \nTo multiply, type 3: \nTo divide, type 4: \n";
    cin>> (option);
    
    cout<<"Type your first number:  ";
    cin>> (number1);
    
    cout<<"Type your second number:  ";
    cin>> (number2);
    
    
    summation = number1 + number2;
    
    subtraction = number1 - number2;
    
    multiplication = number1 * number2;
    
    division = number1 / number2;
    
    
    switch (option)
    {
          case 1:
             
            cout<<"The result is: "<< summation;
             break;
            
          case 2:
             
            cout<<"The result is: "<< subtraction;
             break;  
             
          case 3:
             
            cout<<"The result is: "<< multiplication;
             break;
             
          case 4:
             
            cout<<"The result is: "<< division;
             break;
           
          default:
           
            cout<<"Please try again with 1,2,3 or 4";
              
        
    }
    return 0;
}
