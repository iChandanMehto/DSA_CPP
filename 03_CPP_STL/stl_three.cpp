#include <bits/stdc++.h>

using namespace std;

void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " <<" "<< p.second;

    pair <int, pair<int, int>> p1 = {1, {3, 4}};

    cout <<p1.first <<" "<<p1.second.second <<" "<<p1.second.first;

    pair <int, int> arr[] = {{1, 2,}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}


int main(){
    explainPair();
    return 0;
}
