#include<bits10_1.h>/stdc++.h>
using namespace std;

int largestElement(int arr[],int n){
     int largest=arr[0];
     for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
     }
     return largest;
}
