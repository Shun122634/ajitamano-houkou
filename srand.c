#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    srand(time(0));

    int intelligence = (rand() % 18) + 1;
    int stamina = (rand() % (19 - intelligence)) + 1;
    int charisma = 20 - stamina - intelligence;
    
    
    printf("INT: %d\n",intelligence);
    printf("STA: %d\n",stamina);
    printf("CHA: %d\n",charisma);
    
    if(intelligence>stamina && intelligence>charisma){
        printf("mage");
    }
    else if(stamina>intelligence && stamina>charisma){
        printf("knight");
    }
    else if(charisma>intelligence && charisma>stamina){
        printf("thief");
    }
    return 0;
}