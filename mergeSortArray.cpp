int k = 0 , i = 0 , j = 0 ;
int arr1[n] , arr2[m] , arr3[m+n];

while(i < n && j < m){
    if(arr1[i]<arr2[j])
        arr3[k++] = arr1[i++];
    else
        arr3[k++] = arr2[j++];
}
while(i<n)
    arr3[k++] = arr1[i++];
while(j<m)
    arr3[k++] = arr1[j++];