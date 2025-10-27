#include<stdio.h>
int main() {
        int n, temp, rev=0, digit;
        printf("enter a number: ");
        scanf("%d",&n);
        temp=n;
        while (n>0) {
                digit = n % 10;
                rev=rev*10 + digit;
                n=n/10;
        }
        if (temp == rev)
        printf("%d is a palindromic number.\n", temp);
        else
        printf("%d is not a palindrome numder.\n",temp);

        return 0;
}
