#include <stdio.h>

int main() {
    char character;
    int num1, num2;
    float floatNum;
    char str[100];

    // รับค่า character
    printf("Enter a character: \n");
    scanf(" %c", &character);  // มีช่องว่างก่อน %c เพื่อข้ามช่องว่างที่ไม่จำเป็น

    // รับค่า integers
    printf("Enter two integers: \n");
    scanf("%d %d", &num1, &num2);

    // รับค่า floating-point number
    printf("Enter a floating-point number: \n");
    scanf("%f", &floatNum);

    // รับค่า string
    printf("Enter a string: \n");
    scanf("%s", str);

    // แสดงผล
    printf("You entered character: %c\n", character);
    printf("You entered integers: %d and %d\n", num1, num2);
    printf("You entered floating-point number: %.2f\n", floatNum); // แสดงเลขทศนิยม 2 ตำแหน่ง
    printf("You entered string: %s\n", str);

    return 0;
}
