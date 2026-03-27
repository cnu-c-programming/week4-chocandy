#include <stdio.h>

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};

    for (int i = 0; i < 5; i++) {
        printf("address of arr[%d]: %p\n", i, (void*)&arr[i]);
        printf("address of arr[%d+1]: %p\n", i, (void*)&arr[i + 1]);
        printf("&(arr[%d]) - &(arr[%d+1]) = %ld\n", i, i + 1,
               (char*)(&arr[i + 1]) - (char*)(&arr[i]));
        printf("\n");
    }

    return 0;
}