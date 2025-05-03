#include <stdio.h>
#include <iostream>
// P 01
void Problem01() {
    int num = 10;
    printf("Initial value: %d\n", num);
    int* ptr = &num;
    *ptr = 20;
    printf("Updated value: %d\n\n", num);
}

// P 02
int Sum(int* num1, int* num2) {
    return *num1 + *num2;
}

void Problem02() {
    int num1, num2;
    printf("Enter two numbers : ");
    scanf_s("%d %d", &num1, &num2);
    printf("Sum: %d\n\n", Sum(&num1, &num2));
}

// P 03
int scalarMultiply(int a[], int b[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += a[i] * b[i];

    return sum;
}

void Problem03() {

    int a[] = { 1, 2, 3 };
    int b[] = { 4, 5, 6 };
    printf("Scalar multiplication result: %d\n\n", scalarMultiply(a, b, 3));
}

// P 04
void SortingAndPrint(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void Problem04() {
    printf("Problem 4:\n");
    int arr[] = { 5, 3, 8, 1, 2 };
    SortingAndPrint(arr, 5);
}



// P 05
void Problem05() {
    int num1 = 5, num2 = 10, num3 = 15;
    int* ptrnum1 = &num1;
    int* ptrnum2 = &num2;
    int* ptrnum3 = &num3;

    printf("Before swapping pointers:\n");
    printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    printf("ptrnum1 = %p, ptrnum2 = %p, ptrnum3 = %p\n", (void*)ptrnum1, (void*)ptrnum2, (void*)ptrnum3);
    printf("*ptrnum1 = %d, *ptrnum2 = %d, *ptrnum3 = %d\n", *ptrnum1, *ptrnum2, *ptrnum3);

    printf("Swapping pointers.\n");
    ptrnum3 = ptrnum1;
    ptrnum1 = ptrnum2;
    ptrnum2 = ptrnum3;

    printf("After swapping pointers:\n");
    printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    printf("ptrnum1 = %p, ptrnum2 = %p, ptrnum3 = %p\n", (void*)ptrnum1, (void*)ptrnum2, (void*)ptrnum3);
    printf("*ptrnum1 = %d, *ptrnum2 = %d, *ptrnum3 = %d\n", *ptrnum1, *ptrnum2, *ptrnum3);
}

int main() {
    Problem01();
    Problem02();
    Problem03();
    Problem04();
    Problem05();

    printf("\033[1;34m \033[1;32m   تحياتي 🌹    \033[1;34m\033[0m\n");

    return 0;
}
