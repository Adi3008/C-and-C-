// Give an Array arr[] of size n ...for every i from a0 to n-i ....output max(a[0],a[1],....a[i]).
// Give an Array arr[] of size n ...for every i from a0 to n-i ....output max(a[0],a[1],....a[i]).
// Give an Array arr[] of size n ...for every i from a0 to n-i ....output max(a[0],a[1],....a[i]).

#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  mx = -1999999;
    int n;
    cout << "Enter no of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}