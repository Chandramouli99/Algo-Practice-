#include <bits/stdc++.h>
using namespace std;
vector <int> subarray(int A[], int size, int req)
{
    int sum = 0;
    vector<int> v; 
    for (int i = 0; i < size; i++){
	        sum = A[i];
	        for (int j = i+1; j < size; j++)
	        {
	            sum = sum+A[j];
	            if (sum > req)
	                break; 
	            if (sum == req){
	                v.push_back(i+1);
	                v.push_back(j+1);
	                return v; }
	        }
	    }
	 return v;
}
int main() {
	int t, size, req, A[size];
	vector <int> v;
	cin >> t;
while(t>0)
	{
	    t--;
	    cin >> size; 
	    cin >> req; 
	    for (int i = 0; i < size; i++){
	       cin >> A[i];}
	   v = subarray(A,size,req);
	   if (v.size() > 0)
	        cout << v[0] << " " << v[1] << endl;
	   else 
	        cout << "-1" << endl; 
	}
	return 0;
}
