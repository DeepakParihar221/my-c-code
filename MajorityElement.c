#include<stdio.h>

void merge(long int a[],long int l,long int mid,long int r)
{
    long int i,j,k,n1=mid-l+1,n2=r-mid;
    long int L[n1],R[n2];
    for(i=0;i<n1;++i)
    L[i]=a[l+i];
    for(j=0;j<n2;++j)
    R[j]=a[mid+1+j];
    
    i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        a[k++]=L[i++];
        else
        a[k++]=R[j++];
    }
    
    while(i<n1)
    a[k++]=L[i++];
    while(j<n2)
    a[k++]=R[j++];
}
// merge sort function
void mergesort(long int a[],long int l,long int r)
{
    long int mid;
    if(l<r)
    {
        mid=l+(r-l)/2;
        
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        
        merge(a,l,mid,r);
    }
=======

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 0; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 

}
int main()
{
    long int n;
    scanf("%ld",&n);
    long int a[n];
    for(long int i=0;i<n;++i)
    scanf("%ld",&a[i]);
    mergesort(a,0,n-1);








    
=======
    mergesort(a, n-1);
    long int mid=n/2;
    if(a[mid]==a[mid+1]||a[mid]==a[mid-1])
    printf("1");
    else
    printf("0");
    return 0;
}
