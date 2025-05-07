#include <iostream>

using namespace std;

int main(){
    double number1,number2,result,a ,result2;
    char Operator;

    cout<<"Enter the number and the operations when you finish hit the = sign\n";
    cin>>number1;
    result=number1; 
    while(true){ 
        cin>>Operator;
       
        
        if (Operator=='+'){
            cin>>number1;
            result=result+number1;

        }
    
        else if(Operator=='-'){
            cin>>number1;
            result=result-number1;

        }
    
        else if(Operator=='*'){
            cin>>number2;
            a=result-number1;
            result=number1*number2;
            result=result+a;
    
        
        }  
        else if(Operator=='/'){
            cin>>number2;
            if(number2!=0){
                a=result-number1;
                result=number1/number2;
                result=result+a;
                }
            
            else{
                cout<<"Error: Division by zero.\n";
                return 1;
            }
        }

        else if(Operator=='%'){
            cin>>number2;
            a=result-number1;
            result=static_cast<int>(number1)%static_cast<int>(number2);
            result=result+a;
        
        
        } 
        else if(Operator=='='){
            goto label;
            
        } 
        else{
            cout<<"Error: Unknown operator.\n";
            return 1;
        }
        
    }

    label:


    cout<<result;  
    return 0;
}