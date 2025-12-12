#include<bits/stdc++.h>
using namespace std;

//with sorting 
int secondlargest(int arr[],int n){
        sort(arr,arr+n);
        for(int i=n-2;i>=0;i--){
            if(arr[i]!=arr[n-1]){
                return arr[i];
            }
        }
        return -1;
}

//without sorting 
int secondlargestelement(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=largest&&arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}

//bestsolution
int secondlargestoptimal(int arr[],int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
}