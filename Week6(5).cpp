#include<stdio.h>
int main () {
        int n, a = 0, b=1, c,i;
        printf("enter the number of terms: ");
        scanf("%d",&n);

        printf("fibonacci series:%d %d ", a,b);

        for(i =3; i<=n; i++) {
                c=a+b;
                printf("%d",c);
                a=b;
                b=c;
        }
        printf("\n");
        return 0;
}
