#include<stdio.h>
int main()
{
    int n,rev=0,r,s;
    scanf("%d",&n);
    s=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    if(s==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
