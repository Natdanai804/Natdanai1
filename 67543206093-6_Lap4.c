
#include <stdio.h>

int main() {

    char Employees_ID[10] ;
    int WorkingHour ;
    int Salary ;
    
    printf( "Input the Employees ID(Max. 10 chars):" ) ;
    scanf("%s", Employees_ID ) ;
    printf("Input the working hr: " ) ;
    scanf("%d", &WorkingHour ) ;
    printf("Salary amount/hr: " ) ;
    scanf("%d", &Salary ) ;
    
    printf( "\n\n" ) ;
    printf( "Employees ID = %s", Employees_ID ) ;
    printf( "/nsalary = %d THB", WorkingHour * 30 * Salary ) ;
    printf( "\n\n" ) ;

    return 0 ;
}//end main function
