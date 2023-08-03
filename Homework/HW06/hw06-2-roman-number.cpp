/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>
#include <string.h>

void convertToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    char romanNumeral[100];
    memset(romanNumeral, '\0', sizeof(romanNumeral)); // Initialize with null characters

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(romanNumeral, romanNumerals[i]);
            num -= values[i];
        }
    }

    printf("%d = %s\n", num, romanNumeral);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    convertToRoman(num);
    return 0;
}