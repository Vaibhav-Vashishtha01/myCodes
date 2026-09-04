#include <stdio.h>
int main() {
    int a;
    int b;
    char op;

    printf("enter number a:");
    scanf("%d", &a);

    printf("enter number b:");
    scanf("%d", &b);

    printf("enter operation=(+,-,/,*)");
    scanf(" %c", &op);
     
    printf("final answer is %d", a+b);
    
    
    return 0;

}