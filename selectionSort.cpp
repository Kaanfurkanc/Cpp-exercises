#include <iostream>

using namespace std;


void    selectionSort(int *array, int length){

    int minimum;
    int temp;

    
    minimum = array[0];

    for (int i = 0; i < length; i++)
    {   
        minimum = array[i];
        for(int j = i; j < length; j++)
        {   
            
            if(minimum > array[j])
            {
                minimum = array[j];
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }  
    }  
}

int main()
{
    int arr[] = {34,14,2,9,22};
    int length = (sizeof(arr)/sizeof(*arr));
    
    cout<<"Array before sorting : "<<endl;

    for(int element:arr)    // foreach loop
        cout<<element<<" ";

    selectionSort(arr,length);

    cout<<"\nSorted Array :"<<endl;
    for(int elemnt : arr)
        cout<<elemnt<<" ";

    return (0);
}