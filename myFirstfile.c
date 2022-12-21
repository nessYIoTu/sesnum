#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // false
        }
    }
    return 1; // true
}

int main() {
    char str1[] = "racecar";
    char str2[] = "hello";

    printf("%s is a palindrome: %d\n", str1, is_palindrome(
