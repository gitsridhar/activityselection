#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    vector<int> a = {0,2,5,7,6,2};
    vector<int> b = {3,4,6,8,9,6};

    vector<pair<int,int>> result;

    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> p;

    for(int i=0; i<a.size(); i++) {
        p.push(make_pair(a[i], b[i]));
    }

    auto it = p.top();

    int start = it.first;
    int end   = it.second;

    p.pop();

    result.push_back(make_pair(start,end));

    while(!p.empty()) {
        it = p.top();
        cout << "Processing " << (it).first << " " << (it).second << endl;

        p.pop();
        if(it.second >= end) {
            start = it.first;
            end   = it.second;
            result.push_back(make_pair(start,end));
        }
    }

    for(auto it=result.begin();it!=result.end();it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return(0);
}
