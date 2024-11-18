#include <stdio.h>
#include <string.h>
void reverse(char *ptr)
{
        char *left,*right,temp;
        left=ptr;
        right=ptr+strlen(ptr)-1;
        while(left<right)
        {
                temp=*left;
                *left=*right;
                *right=temp;
                left++;
                right--;
        }
}
char *u_itoa(int n)
{
        int num,i=0;
        num=n;
        static char str[100];
        while(num)
        {
                str[i++]=num%10+str[i]+48;
                num/=10;
        }
        reverse(str);
        return str;
}
int main()
{
        int num;
        printf("enter the number\n");
        scanf("%d",&num);
        char *ptr;
        ptr=u_itoa(num);
        puts(ptr);
}