#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int i;
    int length;
    int has_upper = 0;
    int has_lower = 0;

    printf("パスワードを入力してください: ");
    scanf("%s", password);

    length = strlen(password);

    for (i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            has_upper = 1;
        }
        if (password[i] >= 'a' && password[i] <= 'z') {
            has_lower = 1;
        }
    }

    printf("パスワード判定結果：\n");

    if (length >= 8 && has_upper == 1 && has_lower == 1) {
        printf("このパスワードは強いパスワードです！\n");
    } else {
        if (length < 8) {
            printf("8文字以上にしてください。\n");
        }
        if (has_upper == 0) {
            printf("大文字（A〜Z）を含めてください。\n");
        }
        if (has_lower == 0) {
            printf("小文字（a〜z）を含めてください。\n");
        }
    }

    return 0;
}
