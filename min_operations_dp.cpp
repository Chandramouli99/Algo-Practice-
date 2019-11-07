#include <iostream>
using namespace std;

int main() {
	
	int t,N,i,n; 
	cin >> t; 
	while (t--)
	{
	   cin >> N; 
	   i = 0; n = N; 
	while (1){
	   	if (n % 2 == 0)
	   		{n = n/2; i++;}
	   	else
	   		{n = n - 1; i++;}
	   	
	   	if (n == 0)
	   		break; 
			
	}
	   cout << i << endl; 
}
	   return 0;
}
