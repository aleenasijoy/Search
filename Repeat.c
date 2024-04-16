// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temp;
int arr[]={1,2,3,4,5,6,7,8,9,1};
 int length = sizeof(arr) / sizeof(arr[0]);
for(int i=0;i<=length-1;i++){
    for(int j=i+1;j<=length-1;j++){
       
        if(arr[i]==arr[j]){
            printf("%d is repeated\n",arr[i]);
            break;
        }
     
        
    }
}

    return 0;
}