#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write Your Code Here
    int n, i, j;
    cin>>n;
    vector<int> a(n);
    
    for ( i = 0; i <n; i++) 
    {
        cin>>a[i];
    } 
    int temp, count=0, swap = 0;
    for (i = n-1; i >0; i--) 
    {
        
        for ( j = 0; j <i; j++) 
        {           
        if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
                count++;
            }
        }
        if (swap == 0) 
        {
            break;
        }
    }   
    cout<<"Array is sorted in "<<count<<" swaps.\n";
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}
