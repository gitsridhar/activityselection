#include <iostream>

using namespace std;

struct Activity {
    int start, finish;
};

bool comparefunctionfinish(Activity one, Activity two) {
    return(one.finish < two.finish);
}

bool comparefunctionstart(Activity one, Activity two) {
    return(one.start < two.start);
}

int main() {
    int a[] = {0,2,5,7,6,2};
    int b[] = {3,4,6,8,9,6};

    Activity data[] = {{0,3},{2,4},{5,6},{7,8},{6,9},{2,6}};

    int numberofstarts = sizeof(data)/sizeof(data[0]);

    sort(data, data+numberofstarts, comparefunctionstart);

    cout << "Sorted " << endl;
    for (int i=0; i<numberofstarts; i++)
        cout << data[i].start << " " << data[i].finish << endl;

    int i = 0;
    cout << data[i].start << " " << data[i].finish << endl;

    for (int j=1; j < numberofstarts; j++) {
        cout << "Processing " << j << endl;
        if(data[j].start >= data[i].finish) {
            cout << data[j].start << " " << data[j].finish << endl;
            i = j;
        }
    }

    return(0);
}
