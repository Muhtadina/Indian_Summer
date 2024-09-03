/* 
 * Indian Summer - Codefore: Problem 44/A 
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int L; // Number of Leaves
    cin >> L;
    string l, c;  // Input strings: l = leaf; c = color; 
    vector<pair<string,string>> A; // Vector using Pair
    for(int i=0; i<L; i++)
    {
        cin >> l >> c;
        A.push_back({l,c}); // Strings l = A.first; c = A.second;
    }
    sort(A.begin(),A.end()); // Sort before unique()
    int u = unique(A.begin(), A.end()) - A.begin(); // Unique Number of Leaves
    cout << u; 
    return 0;
}
