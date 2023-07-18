#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int zero = 0 , one = 0 , two = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == 0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
        if(arr[i]==2){
            two++;
        }
    }
    int k = 0;
    while(zero--){
        arr[k++] = 0;
    }
    while(one--){
        arr[k++] = 1;
    }
    while(two--){
        arr[k++] = 2;
    }
}
