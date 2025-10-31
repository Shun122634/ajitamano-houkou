
#include <stdio.h>

int main()
{
    int k , c;
    printf("How many days is the deadline report?\n");
    scanf("%d", &k);
    printf("Are you feeling well(=1) or not(=0)\n");
    scanf("%d", &c);
    
    if (k>=7 || c==1 )
    {
        printf("I still have time , so I won't do it now");
    }
    
    else if(k>1)
    {
        printf("I don't want to do it ,but..... ");
    }
    
    else
    {
        printf("I want to do it ,but I have no choice ");
    }
    
    return 0;
}