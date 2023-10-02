#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , m  , i , j = 0;
    cout<<"Enter the size of both the array: ";
    cin>>n>>m;
    int arr1[n] , arr2[m];
    vector<int> ans ;
    cout<<"Enter the elements of array 1: ";
    for(i = 0 ; i < n ; i++)
        cin>>arr1[i];
    cout<<"Enter the elements of array 2: ";
    for(i = 0 ; i < n ; i++)
        cin>>arr2[i];
    i = 0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j])
            j++;
        else
            i++;
    }
    return ans;
}