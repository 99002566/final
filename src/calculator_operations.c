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
    
int primenum1(int operand2)
{
    int i,m=0,flag=0;    
      
    m=operand2/2;    
    for(i=2;i<=m;i++)    
    {    
    if(operand2%i==0)    
    {    
    return 0;   
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)    
    return 1;  
}

int evenodd(int operand1)
{
    if(operand1%2==0)
        return 1;
    else
        return 0; 
}

int evenodd1(int operand2)
{
    if(operand2%2==0)
        return 1;
    else
        return 0; 
}

int posneg(int operand1)
{
    if(operand1>0)
        return 1;
    else if(operand1<0)
        return 0;
    else
        return -1;
}

int posneg1(int operand2)
{
    if(operand2>0)
        return 1;
    else if(operand2<0)
        return 0;
    else
        return -1;
}

int factorial(int operand1)
{
   if(operand1 < 0)
    return -1;
 if(operand1 == 0)
    return 1;
return operand1 * factorial(operand1-1);
}

int factorial1(int operand2)
{
   if(operand2 < 0)
    return -1;
 if(operand2 == 0)
    return 1;
return operand2 * factorial(operand2-1);
}

int squarearea(int operand1)
{
    return operand1*operand1;
}

int squareperi(int operand1)
{
    return 4*operand1;
}

