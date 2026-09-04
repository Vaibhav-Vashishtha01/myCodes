#include <stdio.h>

int add(int a, int b);  

int add(int a , int b) {
    return a + b;
}
    int main() {
        int a = 10;
        int b = 20;
        printf("sum of these number is %d\n", add(a,b));
    
        return 0;
    
    }