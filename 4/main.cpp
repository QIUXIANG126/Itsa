#include <iostream>
using namespace std;

int main(){
    int h1,m1,h2,m2,m;
    cin >> h1 >> m1 >> h2 >> m2;
    m = (h2-h1)*60 + (m2-m1);
    m -= m%30;
    if(m <= 2*60){
        cout << m << endl;
    }else if(m < 4*60){
        cout << 120 + (m-120)/30*40 << endl;
    }else{
        cout << 120 + 160 + (m-4*60)/30*60 << endl;
    }
}