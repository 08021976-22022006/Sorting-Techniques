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
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini])
                swap(arr[j], arr[mini]);
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