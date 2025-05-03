// Problems set.03 - All in one file

#include <stdio.h>
#include <string.h>

// 1. Get_Max Function
int Get_Max(int a, int b) {
    return (a > b) ? a : b;
}

// 2. Swap two global variables
int a = 5, b = 10;
void swap() {
    int temp = a;
    a = b;
    b = temp;
}

// 3. Count number of digits
int count_digits(int num) {
    int count = 0;
    if (num == 0) return 1;
    if (num < 0) num *= -1;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// 4. Login function
int login(char username[], char password[]) {
    char correct_user[] = "admin";
    char correct_pass[] = "1234";
    return strcmp(username, correct_user) == 0 && strcmp(password, correct_pass) == 0;
}

// 5. Fibonacci function
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Main function to test all features
int main() {
    // 1. Get Max
    int x, y;
    printf("Enter two numbers for Get_Max: ");
    scanf("%d %d", &x, &y);
    printf("Max: %d\n\n", Get_Max(x, y));

    // 2. Swap
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap();
    printf("After swap: a = %d, b = %d\n\n", a, b);

    // 3. Count digits
    int num;
    printf("Enter number to count digits: ");
    scanf("%d", &num);
    printf("Number of digits: %d\n\n", count_digits(num));

    // 4. Login
    char user[20], pass[20];
    printf("Enter username: ");
    scanf("%s", user);
    printf("Enter password: ");
    scanf("%s", pass);
    if (login(user, pass)) {
        printf("Login successful! Welcome %s.\n\n", user);
    } else {
        printf("Login failed.\n\n");
    }

    // 5. Fibonacci
    int fib_num;
    printf("Enter number for Fibonacci: ");
    scanf("%d", &fib_num);
    printf("Fibonacci(%d) = %d\n", fib_num, fibonacci(fib_num));

    return 0;
}
