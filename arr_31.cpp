#include<iostream>
using namespace std;
int main(){
    int arr1[]={1, 2, 3, 4, 5};
    int arr2[]={5,7,8,9};
    int n=5;
    int m=4;
    int i=0,j=0,k=0;
    int arr[n+m];
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;k++;
        }
        else{
            arr[k]=arr2[j];
            j++;k++;
        }
    }
    while(i<n){
        arr[k]=arr1[i];
        i++;k++;
    }
    while(j<m){
        arr[k]=arr2[j];j++;k++;
    }
    for(int i=0;i<(n+m);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}