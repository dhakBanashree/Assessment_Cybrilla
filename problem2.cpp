#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
   cin >> n;
   vector<int> arr(n);
   for(auto &i : arr)
   {
      cin >> i;
   }
   
	if (n < 3) 
		return 0;
		
	sort(arr.begin(),arr.end());

	vector<vector<int>> output;

	for (int i = 0; i < n - 2; i ++) {
		if ( i == 0 || (i > 0 && arr[i] != arr[i-1])) {
			
			int low = i + 1, high = n - 1, target = 0-arr[i];
			
			while (high > low) {
				if (arr[high]+arr[low] == target) {
					cout  << arr[i] << ", " << arr[low] << ", " << arr[high] << endl;
					
					// Pass the duplicates
					while (high > low && arr[low] == arr[low+1]) low ++;
					while (high > low && arr[high] == arr[high-1]) high --;
					
					low ++;
					high --;
				} else if (arr[high]+arr[low] > target)
					high --;
				else 
					low ++;
			}
		}
	}
	return 0;
}