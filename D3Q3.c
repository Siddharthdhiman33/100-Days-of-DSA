//Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>
int main() {
    int n, k, i;
    int comparisons = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &k);
    for(i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", comparisons);
            return 0;
        }
    }
    printf("Not Found\n");
    printf("Comparisons = %d\n", comparisons);
    return 0;
}