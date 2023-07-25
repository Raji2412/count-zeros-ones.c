#include <stdio.h>
void number(int num,int *zeroscount,int *onescount)
{
    *zeroscount=0;
    *onescount=0;
    while(num)
    {
        if(num & 1)
        {
            (*onescount)++;
        }
        else{
            (*zeroscount)++;
        }
        num>>=1;
        
    }
}


int main() {
    int num;
    scanf("%d",&num);
    int zeros,ones;
    number(num,&zeros,&ones);
    printf("No of ones=%d\n",ones);
    printf("No of zeros=%d",zeros);

    return 0;
}
