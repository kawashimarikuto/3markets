#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// パスワードの条件を確認する関数
void check_password_strength(const char *password) {
int length = strlen(password);
int has_upper = 0, has_lower = 0;

// 各文字をチェック
for (int i = 0; i < length; i++) {
if (isupper(password[i])) has_upper = 1;
else if (islower(password[i])) has_lower = 1;

}

// 条件を確認
printf("パスワード: %s\n", password);
if (length >= 8 && has_upper && has_lower ) {
printf("このパスワードは強いです。\n");
} else {
printf("このパスワードは強くありません。改善点:\n");
if (length < 8)
printf("- パスワードの長さを8文字以上にしてください。\n");
if (!has_upper)
printf("- 少なくとも1つの大文字を含めてください。\n");
if (!has_lower)
printf("- 少なくとも1つの小文字を含めてください。\n");

}
}

int main() {
char password[256];

printf("パスワードを入力してください: ");
scanf("%255s", password); // 最大255文字の入力を受け付ける

check_password_strength(password);

return 0;
}


