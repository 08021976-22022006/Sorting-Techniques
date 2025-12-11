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
    for(int i=0;i<=n-1;i++){
        int j=i;
        // while(j>0 && arr[j]>arr[j-1]){ // decreasing order
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
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