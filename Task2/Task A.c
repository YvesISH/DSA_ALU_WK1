#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100

void bubbleSort(char names[][50], int n) {
    int i, j;
    char temp[50];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[MAX_NAMES][50];
    int n, i;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    bubbleSort(names, n);

    printf("\nSorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}


/*
Running Time Function of Bubble Sort:
The running time function of the bubble sort algorithm is T(n) = c * n^2, 
where n is the input size (number of names) and c is a constant representing the time taken for comparisons and swaps.

Time Complexity of Bubble Sort:
The time complexity of the bubble sort algorithm is O(n^2) in the average and worst cases, 
as it needs to perform comparisons and swaps for each pair of adjacent elements, leading to a quadratic time complexity.
*/