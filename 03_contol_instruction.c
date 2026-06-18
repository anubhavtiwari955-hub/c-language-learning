#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can drive!\n");
    } else {
        printf("You cannot drive yet.\n");
    }

    return 0;
}
