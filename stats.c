#include <stdio.h>
#include <stdlib.h>



void calculate_mean(int arr[], int n) {
    long sum = 0;
    int i;
    for (i = 0; i < n; i++)
        sum += arr[i];
    printf("Mean = %.2f\n", (double)sum / n);
}

void calculate_median(int arr[], int n) {
    // Sort the array for median calculation
   
    double med;
    if (n % 2 == 0)
        med = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        med = arr[n/2];
    printf("Median = %.2f\n", med);
}

void calculate_mode(int arr[], int n) {
    int maxCount = 0, modeValue = arr[0];
    int i,j;
    for (i = 0; i < n; i++) {
        int count = 0;
        for ( j = 0; j < n; j++)
            if (arr[j] == arr[i]) count++;
        if (count > maxCount || (count == maxCount && arr[i] < modeValue)) {
            maxCount = count;
            modeValue = arr[i];
        }
    }
    if (maxCount <= 1)
        printf("Mode: no unique mode (all values occur once)\n");
    else
        printf("Mode = %d (occurred %d times)\n", modeValue, maxCount);
}

int main() {
    int n, choice;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    int i;
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\nMenu:\n");
        printf(" 1. Mean\n 2. Median\n 3. Mode\n 4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculate_mean(arr, n);
                break;
            case 2:
                calculate_median(arr, n);
                break;
            case 3:
                calculate_mode(arr, n);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

