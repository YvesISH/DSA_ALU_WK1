#include <stdio.h>
#include <string.h>

#define MAX_NAMES 1000

int binarySearch(char names[][20], int left, int right, char *target) {
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index
        int cmp = strcmp(names[mid], target); // Compare the middle name with the target

        if (cmp == 0) {
            return mid; // Return the index if the name is found
        } else if (cmp < 0) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }
    return -1; // Return -1 if the name is not found


    /*
    1. Running Time Function T(n)
        The running time function T(n) for the binary search algorithm can be expressed recursively as:
        T(n) = T(n/2) + c, where c is a constant representing the time taken for the comparison operation (strcmp) and other operations.

In each iteration of the while loop, the algorithm divides the search range in half by updating the left and right indices based on the result of the comparison. 
This effectively reduces the problem size by half in each recursive call.



    2. Using Master's Method to Solve the Equation and Determine the Time Complexity
        To find the time complexity using Master's method, we need to compare the running time function T(n) with the function n^(log_b(a)), where a = 1 and b = 2 (since we are dividing the problem size by 2 in each recursive call).

        n^(log_2(1)) = n^0 = 1
        Since T(n) = T(n/2) + c is smaller than n^(log_2(1)) = 1 for sufficiently large n, the time complexity of the binary search algorithm is O(log n).


    
    3. Comparison between Part A and Part B
        The binary search algorithm (Part B) performs better than the linear search algorithm (Part A) for large input sizes. 
        The time complexity of the binary search algorithm is O(log n), which is more efficient than the linear time complexity O(n) of the linear search algorithm.

        For small input sizes, the linear search algorithm may perform better due to the overhead of sorting the array for binary search. 
        However, as the input size grows larger, the binary search algorithm becomes significantly more efficient than the linear search algorithm.
    */
}

int main() {
    char names[MAX_NAMES][20];
    int n;
    char target[20] = "Patrick";

    // Assume input of names in sorted order
    n = 5;
    strcpy(names[0], "Alice");
    strcpy(names[1], "Bob");
    strcpy(names[2], "Charlie");
    strcpy(names[3], "Eve");
    strcpy(names[4], "Patrick");

    int result = binarySearch(names, 0, n - 1, target);
    if (result == -1) {
        printf("Name not found\n");
    } else {
        printf("Found at index %d\n", result);
    }

    return 0;
}