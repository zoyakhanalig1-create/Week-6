#include<stdio.h>
int main() {
        int i, num, digit, sum;
        printf("Armstrong numbers between 0 and 999 are:\n");

        for (i=0; i<=999; i++){
                num=i;
                sum=0;

                while(num>0) {
                        digit= num% 10;
                    sum+=digit* digit * digit;
                    num /=10;
                }
                if(sum== i)
                  printf("%d", i);
        }
        printf("\n");
        return 0;
}
