#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int T, n, k, i, j, val;
    cin >> T;
    while (T-- > 0) 
    {
        int maximum = 0;
        scanf("%d%d",&n, &k);
        int max_val = 0;
        int a = 0, b = k - 1;
    
    	for (a = 2; a < n; a++) 
    	{
        	if (a == b)
            continue;
        	if ((a & b) > max_val) 
        	{
            	max_val = a & b;
        	}
    	}
    	cout << max_val <<endl;
  }
  return 0;
}
