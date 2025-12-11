#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void sort(int arr[], int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nUnsorted Array: ";
    print(arr, n);
    sort(arr,n);
    cout<<"Sorted Array: ";
    print(arr, n);
}