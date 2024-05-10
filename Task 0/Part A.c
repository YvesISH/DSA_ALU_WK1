#include <stdio.h>
#include <string.h>

#define MAX_NAMES 1000

int linearSearch(char names[][20], int n, char *target) {
    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], target) == 0) {
            return i;  // Return the index if the name is found
        }
    }
    return -1;  // Return -1 if the name is not found




    /*
    1. Running Time Function (T(n))

The running time function T(n) for the linear search algorithm is directly proportional to the size of the input (n). 
This is because the for loop iterates through the entire array of names, and the number of iterations is equal to n. 
Therefore, the running time function is T(n) = n + c, where c is a constant representing the time taken for any other operations, such as the comparison using strcmp.


    2. Asymptotic Notation of the Running Time Function (T(n))

The asymptotic notation of the running time function T(n) = n + c is O(n), which represents the linear time complexity. 
This means that as the input size n increases, the running time of the algorithm grows linearly.


    3. Best Case, Average Case, and Worst Case Scenarios

Best Case: If the target name "Patrick" is the first element in the array (names[0]), the algorithm will find it immediately after the first iteration of the for loop. In this case, the time complexity is O(1), which is constant time.
Average Case: On average, the algorithm will need to traverse half of the array before finding the target name "Patrick" or determining that it is not present. The average-case time complexity is O(n/2), which is still linear time.
Worst Case: In the worst case, the target name "Patrick" is not present in the array of names. The algorithm will need to iterate through all the elements in the array until the end of the for loop. The worst-case time complexity is O(n), which is linear time.

    */


}

int main() {
    char names[MAX_NAMES][20];
    int n;
    char target[20] = "Patrick";

    // Assume input of names
    n = 5;
    strcpy(names[0], "Alice");
    strcpy(names[1], "Bob");
    strcpy(names[2], "Charlie");
    strcpy(names[3], "Patrick");
    strcpy(names[4], "Eve");

    int result = linearSearch(names, n, target);
    if (result == -1) {
        printf("Name not found\n");
    } else {
        printf("Found at index %d\n", result);
    }

    return 0;
}
