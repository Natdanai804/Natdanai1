#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
int main() {
    void playGame() {
    int r ;                                      //r = ตัวแรมดอมตัวเลขในแต่ละครั้ง  
    int number ;                                 //number = ค่าที่ผู้ใช้กรอก
    r = rand() % 100 + 1 ;                       //การ random ตัวเลขตั้งแต่ 0 - 99 + 1
    int lower = 1 , high = 100 ;                 // เลขต่ำสุด , เลขสูงสุด
    int score = 100 ;                            // คะแนน
    printf("(player Score=%d)\n", score) ;       //แสดงค่าคะแนนเริ่มต้น  =  100
    while (1) {   
        printf("Guess the winning number (%d-%d) :\n", lower , high ) ;    //  ให้เดาหมายเลขที่ชนะตั้งแต่ 1 - 100
        scanf("%d", & number ) ;                                           //  เก็บตัวเลขที่ผู้ใช้เดามาไว้ในตัวแปร number  
        if (number == r ) {                                                // ถ้าค่าที่ผู้ใช้กรอก = ค่าที่โปรแกรมแรนดอม
            printf("That is correct! The winning number is %d.\n", r ) ;   // แสดงว่า ถูกต้อง! หมายเลขที่ชนะคือ ...
            printf("Score this game: %d\n", score) ;                       // แสดงคะแนนที่เหลือของผู้เล่น  
            break ;   
        } else {   
            score -= 10 ;                           //ถ้าตอบผิดลบทีละ10คะแนน
            if (score < 0) {                        //ถ้าคะแนน < 0    
                score = 0 ;                         //ถ้าคะแนน = 0  
                printf(" you lost\n ") ;            //แสดงว่า คุณแพ้
                break ;                             //ให้หยุดละเริ่มใหม่
            }
            if (number < r ) {                               //ถ้า ค่าที่ผู้ใช้กรอก < ค่าที่โปรแกรมแรนดอม
                printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", number , score) ;   //แสดงว่า ขออภัยหมายเลขที่ชนะสูงกว่าค่าที่ผู้ใช้กรอก 
                lower = number + 1 ;                         // lower = ค่าที่ผู้ใช้กรอก + 1
            } else {   
                printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", number , score) ;    //แสดง  ขออภัยหมายเลขที่ชนะต่ำกว่าค่าที่ผู้ใช้กรอก
                high  = number - 1 ;                         // high  = ค่าที่ผู้ใ้ชกรอก - 1
            }
        }
    }
}
    int command ;       //ตัวแปรเพื่อรับค่าที่ผู้ใช้กรอกก่อนจะเข้าเกม
    srand(time(NULL)) ;   //ใช้กำหนด randomseed ให้กับการทำงานของฟังก์ชั่น rand
    while (1) {   
        printf("Do you want to play game (1=play,-1=exit) :\n") ;    //คำถามก่อนจะเล่นเกม "คุณต้องการเล่นเกมมั้ย ถ้าเล่นกด1 ถ้าไม่เล่นกด-1"
        scanf("%d", &command) ;    //สแกนค่าที่ผู้ใช้กรอกไว้ที่ command
        if (command == 1) {             //ถ้าค่าที่ผู้ใช้กรอกก่อนจะเข้าเกม = 1
            playGame () ;               //ทำการเริ่มทำงานเกม
        } else if (command == -1) {     //ถ้าค่าที่ผู้ใช้กรอกก่อนจะเข้าเกม = -1
            break ;                     //ทำการหยุดการทำงานของเกม
    }  
}
 
    return 0 ;
}//end main function
