#include<iostream>
using namespace std;
//[5,2,4,6,1,3]
// function that applies insertion sort algorithm
void insertionsort(int A[],int n){
    //making the main for loop for i =2 to n 
    for (int i =1;i<=n;i++){
        //define the key key = A[i]
        int key = A[i];
        //define the sorted subarray for j  A[1:i-1]
        int j = i-1;
        //making the while loop 
        while (j>=0&& A[j]>key)
        {
            //if the condition is achieved which is the current is smaller than the previous then
            //we replace both of them so if it was 4  3  it will be  3 4 
            A[j+1]=A[j];
            //changing the index suppose that 
            j=j-1;
        }
        
    }
}

int main () {
    int n;
    cin>>n;
    int A[n];
    for (int i =0;i<n;i++){
        cin>>A[i];
    }
    insertionsort(A,n);
}