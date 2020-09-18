#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int greater(int operand1, int operand2)
{
    if(operand1>operand2)
        return operand1;
    else
        return operand2;
}

int primenum(int operand1)
{
    int i,m=0,flag=0;    
      
    m=operand1/2;    
    for(i=2;i<=m;i++)    
    {    
    if(operand1%i==0)    
    {    
    return 0;   
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    return 1;  
}
     
