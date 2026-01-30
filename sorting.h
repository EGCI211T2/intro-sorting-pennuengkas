void swap(int &f,int &s);
void bubblesort(int *a,int n);
void display(int *a,int n);
void selectionsort(int *a, int n);
void insertionsort(int *a, int n);
#include <iomanip>


void display(int *a, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<setw(3)<<a[i];
    }
    cout<<endl;
}

void bubblesort(int *a, int n) // compare to the neighbor and swap if need be
{
    int i,j;
    int sorted;
    //bubble sort - compare 7 element 6 times to get all pair so n elements compare n-1 times
    for (j=0;j<n-1;j++)
    {
        sorted = 0;
        for(i = 0; i<n-1-j; i++)
        {
            /*for ascending order*/
            if(a[i]>a[i+1]) 
            {
                swap(a[i],a[i+1]);
                sorted=1;
            }
        }
        display(a,n);
        if(sorted==0) break;
    }
}

void selectionsort(int *a, int n) //find smallest put in front the proceed
{
    int *p;
    for (int j=0; j<n; j++)
    {
        p=&a[j];
        for (int i=1+j;i<n;i++)
        {
            if (*p > a[i]){
                p=&a[i];
            }
        }
        swap(a[j], *p);
        display(a,n);
    }
}

void insertionsort(int *a, int n) //while adding element push all that is more than it backward, no swaping involve. only work if the origial array is sorted
/*The initial list can only be 1 number to start with, and sort from there. as we add number the sorted list grows bigger*/
{
    int i, j, new_num;
    for(j=1; j<n; j++)
    {
        cout<<"==Round: "<<j<<" : Inserting "<<a[j]<<endl;
        new_num = a[j];
        for(i=j-1; i>=0 && new_num < a[i]; i--)
        {
            a[i+1] = a[i];
            display(a,n); // to move the element backward
        }
        a[i+1] = new_num;
        display(a,n);
    }
}

void swap(int &f, int &s)
{
    int temp;
    temp = f;
    f = s;
    s = temp;
}
