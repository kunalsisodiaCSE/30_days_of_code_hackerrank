#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int p = 0; p < 6; p++) {
        arr[p].resize(6);

        for (int q = 0; q < 6; q++) {
            cin >> arr[p][q];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int max_sum = 0;
    int temp_sum;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            temp_sum = 0;
            // top row
            temp_sum += arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
               
            //if first hourglass, set to max
            if((i==0 && j==0) || (temp_sum>max_sum))
  {   max_sum=temp_sum;}
        }}
    cout << max_sum;

    return 0;
}
    