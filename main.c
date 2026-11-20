#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("NG");
    }else{
       int num = 0;
       for (int i = 0; i <= 50; i++) {
           for (int j = 0; j <= 50; j++) {
               if (i != j && i + j == n) {
                   num++;
               }
           }
       }
       printf("%d\n", num);
    }
    return 0;
}