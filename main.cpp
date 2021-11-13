#include <iostream>
using namespace std;

int main() {
    int n=0, x=0, y=1, z=x+y;
    cin>>n;
    cout<<1<<endl;
    for (int i = 0; i< (n-1); ++i) {
        z=x+y;
        x=y;
        y=z;
        cout<<z<<endl;
    }
   return 0;
}
