#include <iostream>
using namespace std;

int main() {
	int t,m;
	cin >> t;
	
	while(t--){
	    cin >> m;
	    int cost[m][m],final[m][m]; 
	    for (int i = 0; i < m; i++)
	        for (int j = 0; j < m; j++)
	            cin >> cost[i][j];
	   
	  final[0][0] = cost[0][0];
	  
	  for (int i = 1; i < m; i++)
	        final[i][0] = final [i-1][0] + cost[i][0];
	  for (int j = 1; j < m; j++)
	        final[0][j] = final[0][j-1] + cost[0][j];
	 for(int i = 1; i < m; i++)
	        for (int j = 1; j < m; j++)
	            final[i][j] = min(min(final[i-1][j-1],final[i-1][j]),final[i][j-1]) + cost[i][j];
	
	cout << final[m-1][m-1];
}
	return 0;
}
