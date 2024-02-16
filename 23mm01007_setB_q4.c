#include<stdio.h>
int main()
{
    int num,i,j,p,k,count;
    printf("Enter the number:");
    scanf("%d",num);
    for(i=4;i<=num;i++)
    {
        for(j=2;i<i;j++)
        {
            if((i%j)==0)
            {
                break;

            }
            else 
            {
            continue;
        }
        if(j!= 1)
        {
            p=num-i;
            for(k=2;k<p;k++)
            {
                if((p%k)==0)
                {
                    break;

                }
                if(k !=p && p>=i)
                {
                    printf("%d \n ",p);
                    count ++;
                }}}
                if(count ==0)
                printf("The given numbers cannot be expressed as sum of composite numbers");
                }
                return 0;
            }
        }

        
