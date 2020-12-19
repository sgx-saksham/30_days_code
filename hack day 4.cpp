#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2==!0)
    {
    	cout << "Wierd" << endl;
	}
	
	else if (6 <= N <= 20 || N%2==0)
	{
		cout << "Wierd" << endl;
	}
	
	/*else if (N > 20)
	{
		cout << "Not Wierd" << endl;
	}*/

    return 0;
}
