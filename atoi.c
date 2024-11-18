#include <stdio.h>
#include <string.h>
#include <ctype.h>
int valid_string(char *ptr)
{
        if(*ptr=='-')
        {
                ptr++;
        }
        while(*ptr)
        {
                if((isdigit(*ptr))==0)
                {
                        return 0;
                }
                ptr++;
        }
        return 1;
}

int my_atoi(const char *ptr)
{
        int num=0,i=0,sign=1;
        if(ptr[0]=='-')
        {
                sign=-1;
                i=1;
        }
        while(ptr[i])
        {
                if(ptr[i]>=48 && ptr[i]<=57)
                        num=num*10+ptr[i]-48;
                i++;
        }
        return sign*num;
}
int main()
{
        int num;
        char str[100];
input:printf("enter the string\n");
      gets(str);
      if(valid_string(str)==0)
      {
              printf("invalid input\n");
              goto input;
      }
      num=my_atoi(str);
      printf("%d",num);
}