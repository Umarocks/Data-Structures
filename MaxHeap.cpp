#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l < n && arr[l] > arr[largest]){
        largest=l;
    }
        if(r < n && arr[r] > arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }

}

void buildHeap(int arr[],int n){
    int strind=(n/2)-1;
    for(int i=strind;i>=0;i--){
        heapify(arr,n,i);
    }
}

void printHeap(int arr[], int n) 
{ 
    cout << "Array representation of Heap is:\n"; 
  
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 


int main() 
{ 
    int arr[] = { 3, 5, 9, 6, 8, 20, 10, 12, 18, 9 }; 
    //output 20 18 10 12 9 9 3 5 6 8
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    buildHeap(arr, n); 
  
    printHeap(arr, n); 
  
    return 0; 
} 