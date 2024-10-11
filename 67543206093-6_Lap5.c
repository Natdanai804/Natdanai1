#include <stdio.h>
int main() {
    int score ;
    printf(" put your score:") ;
    scanf("%d",&score) ; 

    if(score >= 0 && score <= 49) 
        printf("You are grade F \n") ;    
    else if((score >= 50 && score <= 55))
        printf("You are grade D\n") ;
    else if((score >= 55 && score <= 60))
        printf("You are grade D+\n") ;
    else if((score >= 60 && score <= 65))
        printf("You are grade C\n") ;
    else if((score >= 65 && score <= 70))
        printf("You are grade C+\n") ;
    else if((score >= 70 && score <= 75))
        printf("You are grade B\n") ;
    else if((score >= 75 && score <= 80))
        printf("You are grade B+\n") ;
    else if((score <= 80))  
        printf("You are grade A\n") ;
    else 
        printf("Your score is incorrect") ;

    return 0 ;
}//end main function
