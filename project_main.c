#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, GREATER, PRIMENUM, PRIMENUM1, EVENODD, EVENODD1, POSNEG, POSNEG1, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Greater\n6. Primenum\n7. Primenum1\n8. Evenodd\n9. Evenodd\n10. Posneg\n11. Posneg1\n12. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case GREATER:
            printf("\n\t Greater %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            greater(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case PRIMENUM:
            printf("\n\t Primenum %d =%d\nEnter to continue", 
            calculator_operand1, 
            primenum(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case PRIMENUM1:
            printf("\n\t Primenum1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            primenum1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case EVENODD:
            printf("\n\t evenodd %d =%d\nEnter to continue", 
            calculator_operand1, 
            evenodd(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case EVENODD1:
            printf("\n\t evenodd1 %d =%d\nEnter to continue", 
            calculator_operand1, 
            evenodd1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case POSNEG:
            printf("\n\t posneg %d =%d\nEnter to continue", 
            calculator_operand1, 
            posneg(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case POSNEG1:
            printf("\n\t posneg1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            posneg1(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case 12:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
