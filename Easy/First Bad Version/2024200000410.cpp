//https://leetcode.com/u/DesignToCode/

#include <bits/stdc++.h>
using namespace std;

vector <int> productBad = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1};
bool isBadVersion(int version) {
    return productBad[version-1];
}
class Solution {
public:
    int firstBadVersion(int n)
    {
        long x = 1;
        long y = n;

        while(x < y)
        {
            long mid = x + (y - x) / 2;

            if(isBadVersion(mid))
            {
                y = mid;
            }
            else
            {
                x = mid + 1;
            }

        }
        return x;
    }
};

int main()
{
    Solution sol;
    int n = 10;
    cout <<sol.firstBadVersion(n);
}