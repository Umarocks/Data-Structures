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
void mergeheap(int arr[],int arr2[],int arrm[],int n,int m){
    for(int i=0;i<n;i++){
        arrm[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        arrm[n+i]=arr2[i];
    }
    
    
}


int main() 
{ 
    int arr[] = { 10, 5, 6, 2  }; 
    
    int arr2[]={12, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int m =sizeof(arr2)/sizeof(arr2[0]);
    int arrm[m+n];
    mergeheap(arr,arr2,arrm,n,m);
    int y=sizeof(arrm)/sizeof(arrm[0]); 
    buildHeap(arrm,y);
    printHeap(arrm, y); 
  
    return 0; 
} 