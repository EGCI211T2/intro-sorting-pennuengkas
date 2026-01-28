void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);



void display(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<setw(3)<<a[i];
    }
    cout<<endl;
}

void sort(int a[], int n)
{
    int i,j;
    //bubble sort - compare 7 element 6 times to get all pair so n elements compare n-1 times
    for (j=0;j<n;j++)
    {
        for(i = 0; i<n-1; i++)
        {
            /*for ascending order*/
            if(a[i]>a[i+1]) swap(a[i],a[i+1]);
        }
        display(a,n);
    }
}

void swap(int &f, int &s)
{
    int temp;
    f = temp;
    f = s;
    s = temp;
}
