#include <stdio.h>
#include <string.h>
float my_atof(char *ptr)
{
        int n=0,i=0,cnt=0,flag=0,df=0;
        float f,dec=10;
        while(ptr[i])
        {
                if((ptr[0]=='-')||(ptr[0]=='+'))
                {
                        if(ptr[0]=='-')
                        {
                                flag=1;
                        }
                        i++;
                }
                if(ptr[i]>=48 && ptr[i]<=57)
                {
                        n=n*10+ptr[i]-48;
                }
                else if(ptr[i]=='.')
                {
                        cnt++;
                        df=1;
                }
                else
                {
                        return 0;
                }
                i++;
                if(df==1)
                {
                        dec=dec*0.1;
                }
        }
        if(cnt>1)
        {
                return 0;
        }
        if(flag==1)
        {
                n=n*-1;
        }
        f=n*dec;
        return f;
}
int main()
{
        float f;
        char str[100];
        printf("enter the string\n");
        gets(str);
        f=my_atof(str);
        if(f!=0)
        {
                printf("%0.5f",f);
        }
        else
        {
                printf("error\n");
        }
}