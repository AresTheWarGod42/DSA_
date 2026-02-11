#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void findPivot(vector<int> &vec) {
    int n = vec.size();
    int ini = vec[0];
    int fin = vec[n-1];
    int mid = n%2 ? vec[(n-1)/2] : vec[n/2];

    if(ini > fin && ini < mid) vec[n%2 ? vec[(n-1)/2] : vec[n/2]] = ini;
    else if (fin >  && ini < mid
}


int main() {

    vector<int> vec = {5, 6, 10, 3, 8, 0, 2, 7, 9};

    findPivot(vec);
    return 0;
}

