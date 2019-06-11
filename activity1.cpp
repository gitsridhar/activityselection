#include <iostream>

using namespace std;

int main() {
    int a[] = {0,2,5,7,6,2};
    int b[] = {3,4,6,8,9,6};

    int numberofstarts = sizeof(a)/sizeof(a[0]);

    int i = 0;
    cout << i << endl;

    for (int j=1; j < numberofstarts; j++) {
        if(a[j] >= b[i]) {
            cout << j << endl;
            i = j;
        }
    }

    return(0);
}
