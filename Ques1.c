#include<stdio.h>

int min_index(int a[], int index, int n)
{   
    if(index==n)
    return n-1;
   
    int min= min_index(a, index+1, n);

    if(a[min]<a[index])
    return min;  
    else     
    return index;
}
void selection_sort( int a[] ,int index, int n)
{   
   
    if(index==n)
    return;
    
    int min=min_index(a, index ,  n );
   
    if(min!=index) {
      int temp=a[min];
      a[min]=a[index];
      a[index]=temp;
      }

    selection_sort(a, index+1 ,  n);
}
int main()
{
  int n ;
    printf("Print no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    for(int i =0; i < n ; ++i)
    {
    scanf("%d",&a[i]);
    }
    selection_sort(a,0,n);
    for(int i=0;i<n;++i)
    printf("%d ",a[i]);
}