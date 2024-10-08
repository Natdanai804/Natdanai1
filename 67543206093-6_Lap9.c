#include <stdio.h>
    
int prime(int a) {
    if (a <= 1) {
        return 0 ;
    }
    if (a <= 3) {
        return 1 ;
    }
    if(a > 3) {
        for(int j = 2 ; j < a ; j++ ) {
            if (a % j == 0) {
                return 0 ;
            } else if (a == a - 1) {
                return 1 ;
            }
        }
    }
}

int main() { 
    
    int n ;
    
    printf("Enter N : " ) ;     //รับค่า   n   จากผู้ใช้
    scanf("%d" , &n ) ;
    
    int s[n] ;
    int i ;
    for(int i = 0 ; i < n ; i++ ) {
        printf("Enter value a[%d] :\n " , i ) ; //รับค่า Array
        scanf("%d" , &s[i] ) ;
    }//end for value
    
    printf("Index : ") ;
    for(int i = 0 ; i < n ; i++ ) {        //แสดงค่า แถว
        printf("%d  " , i ) ;
    }//end for Index
    printf("\n") ;
    
    printf("Array : " ) ;
    for(int i = 0 ; i < n ; i++ ) {           //แสดงค่า Array
        if(prime(s[i])) {  //true
            printf("%d " , s[i] ) ;
        } else {   //false
            printf("#  ") ;
        }
    }//end for Array
    
    return 0;
}//end function
