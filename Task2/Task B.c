#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100

void merge(char names[][50], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;
    while (i < leftSize && j < rightSize) {
        if (strcmp(left[i], right[j]) < 0) {
            strcpy(names[k++], left[i++]);
        } else {
            strcpy(names[k++], right[j++]);
        }
    }
    while (i < leftSize) {
        strcpy(names[k++], left[i++]);
    }
    while (j < rightSize) {
        strcpy(names[k++], right[j++]);
    }
}

void mergeSort(char names[][50], int n) {
    if (n < 2) {
        return;
    }
    int mid = n / 2;
    int left[mid];
    int right[n - mid];
    int i;
    for (i = 0; i < mid; i++) {
        strcpy(left[i], names[i]);
    }
    for (i = mid; i < n; i++) {
        strcpy(right[i - mid], names[i]);
    }
    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(names, left, mid, right, n - mid);
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

    mergeSort(names, n);

    printf("\nSorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

/*
Running Time Function of Merge Sort:
The running time function of the merge sort algorithm is T(n) = 2T(n/2) + cn, 
where n is the input size (number of names) and c is a constant representing the time taken for the merge operation.


Time Complexity of Merge Sort:
The time complexity of the merge sort algorithm is O(n log n) in the average and worst cases. 
This is because the algorithm divides the problem into two halves recursively, leading to a logarithmic number of divisions, 
and the merge operation takes linear time for each division.
*/