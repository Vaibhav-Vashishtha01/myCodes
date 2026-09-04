#include <stdio.h>

int sum(int x,int y);
int x = 45;
int y = 20;

int main() {

printf("sum is %d\n", sum(x,y));
 return 0;
}

int sum(int x, int y) {
    return x + y;
}
