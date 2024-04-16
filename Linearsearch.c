// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[] = {23,34,45,67,90};
    int low = 0;
    int high = 4;
    int target =90;
    while(low<=high){
        int mid  = low +(high - low)/2;
        if(arr[mid]==target){
            printf("target found at %d",mid);
            break;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}
