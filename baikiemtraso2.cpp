#include <stdio.h>
float average(int s[],int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; ++i) {
        sum += s[i];
    }
    float avg = sum / n;
    return avg;
    
}
int main() {
    int n, i;
    int num[100], avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &num[i]);
    }
    float avg_result = average(num, n);
    printf("Average = %.2f", avg_result);
    return 0;
}
