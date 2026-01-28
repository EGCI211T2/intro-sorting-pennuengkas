//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
#include <iomanip>
using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
    int i,N;
    int *a;
    a= new int[argc-1];
    for(i=1;i<argc;i++){
        cout<<"argv[" << i<<"]" <<argv[i]<<endl;
        a[i-1] =atoi(argv[i]);
    }
    /* Convert to numbers*/
    N=argc-1;
    cout<<"Before sorting:";
    display(a,N);
    
    sort(a,N);
    cout<<"After sorting:";
    display(a,N);
    
    
    return 0;
}
