#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("Less than 10\n");
    } else if (num < 20) {
        printf("Between 10 and 19\n");
    } else if (num < 30) {
        printf("Between 20 and 29\n");
    } else {
        printf("30 or greater\n");
    }

    printf("Thank you for using this program.\n");

    return 0;
}
