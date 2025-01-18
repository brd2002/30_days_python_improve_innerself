#include <bits/stdc++.h>
using namespace std;
int fun(){
    static int num = 16;
    return num--;
}
int main(){
    // cout << "Hello, World!" << endl;
    for(fun(); fun(); fun()){
        cout << fun() << " ";
    }
    return 0;
}