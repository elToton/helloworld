#include <iostream>

int main(){
    int arr[] = {5,2,7,28,72,0,-1};
    int n = sizeof(arr) / sizeof(*arr);
    for(int a = 0; a < n-1;a++)
        for(int b = 0; b < n - a - 1; b++)
            if (arr[b + 1] > arr[b])
                std::swap(arr[b+1],arr[b]);
    for(int c = 0; c < n; c++)
        std::cout << arr[c] <<  " ";    
}