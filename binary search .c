#include<stdio.h>
int main() {
    int size, i, j, key ;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the sorted elements of the array:\n");
    for(i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    int low = 0;
    int high = size - 1;
    int mid;
     int found = -1;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            found = mid;
            break;
        }
        if(arr[mid] < key){
            low = mid + 1;
        }
        if(arr[mid] > key){
            high = mid - 1;
        }
    }
    if(found != -1){
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found in the array.\n");
    }
return 0;
}