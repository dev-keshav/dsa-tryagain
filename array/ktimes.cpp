#include<iostream>
#include<map>
using namespace std;


void printElements(int arr[], int n, int k){

    map<int, int>mp;
    int m=n/k;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(int i=0; i<mp.size(); i++){
        if(mp[i]>m){
            cout<<i<<endl;
        }
    }
}



int main(){
     int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
 
    printElements(arr, n, k);
}