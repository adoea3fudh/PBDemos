/* Problem 1 */
#include <stdio.h>
int main() {
    int hours;
    float salary;
    printf("Enter working hours: ");
    scanf("%d", &hours);
    salary = hours * 50;
    if (hours < 40) {
        salary *= 0.9; // 10% deduction
    }
    printf("Salary = %.2f\n", salary);
    return 0;
}

 
/* Problem 2 */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0; 
}


/* Problem 3 */
#include <stdio.h>
int main() {
    int id;
    printf("Enter your ID: ");
    scanf("%d", &id);
    if (id == 1234)
        printf("Harry\n");
    else if (id == 5678)
        printf("Ron\n");
    else if (id == 1145)
        printf("Hermione\n");
    else
        printf("Wrong ID\n");
    return 0;
}


/* Problem 4 */
#include <stdio.h>
int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade >= 90)
        printf("Excellent\n");
    else if (grade >= 80)
        printf("Very Good\n");
    else if (grade >= 70)
        printf("Good\n");
    else if (grade >= 60)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}


/* Problem 5 */
#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Maximum number is %d\n", max);
    return 0;
}
