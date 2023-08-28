#include <stdio.h>  
   
int main()  
{  
    
    int arr[] = {1,1,4,56,75,76,75,76,76,75};   
      
   
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    printf("repeatd elements in given array: \n");  
    
    for(int i = 0; i < length; i++) {  
        for(int j = i + 1; j < length; j++) {  
            if(arr[i] == arr[j])  
                printf("%d\n", arr[j]);  
        }  
    }  
    return 0;  
}  
