#include<stdio.h>
void swap(int *x , int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void shift( int *arr , int size , int position){
    for(int i = position ; i < size ; i++){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int size , i , count=0;
    printf("Enter the size: ");
    scanf("%d" , &size);
    int arr[size];
    printf("Enter the elements of an array:  ");
    for(i=0 ; i < size ; i++){
        scanf("%d" , arr[i]);
    }
    for(i=0 ; i<size ; i++){
        for(int j =0 ; j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
                shift(arr , size , j);
            }
        }
    }
    for(i=(size-1);i=(size-count);i--){
        printf("%d" , arr[i]);
    }
}