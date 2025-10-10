
/**文字を支配するためのプログラム
寒いので、新しい服（長袖の服）が欲しいなと考えています**/

#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存しとく**/
    int nameko = 777;
    nameko = 10;
    printf("namekoが%d個割引されます！\n",nameko);
    /**printfは、””の間に、表記したい文字を書くよ
    なんでnなのかはnewlineだから**/
    printf("あ！ごめん！namekoが%d個割引されます！",nameko);

    return 0;
}
