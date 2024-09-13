#include<iostrem>
using namespace std;
void sortfast(int arr[],int i,int j)
{
    int val=arr[i];
    int l=i;
    int r=j;
    while(l<r)
    {
        while(l<r&&arr[r]>=val)
        {
            r--;
        }
        if(l<r)
        {
            arr[l++]=arr[r];
        }
        while(l<r&&arr[l]<=val)
        {
            l++;
        }
        if(l<r)
        {
            arr[r--]=arr[l];
        }
    }
    arr[l]=val;
    sort(arr,i,l-1);
    sort(arr,l+1,j)
}

void sort(int arr[],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={12,2,45,68,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortbubble(arr,size);
    sortfast(arr,0,size);
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;
    return 0;
}