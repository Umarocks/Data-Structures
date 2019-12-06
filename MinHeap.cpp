#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Minheap(int arr[],int n,int i){
    int min=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l < n && arr[l] < arr[min]){
        min=l;
    }
        if(r < n && arr[r] < arr[min]){
        min=r;
    }
    if(min!=i){
        swap(arr[i],arr[min]);
        Minheap(arr,n,min);
    }

}

void buildHeap(int arr[],int n){
    int strind=(n/2)-1;
    for(int i=strind;i>=0;i--){
        Minheap(arr,n,i);
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
    int arr[] = {20 ,18 ,10 ,12 ,9 ,9 ,3 ,5 ,6 ,8  }; 
    //output 3, 5, 9, 6, 8, 20, 10, 12, 18, 9
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    buildHeap(arr, n); 
  
    printHeap(arr, n); 
  
    return 0; 
} 