#include <iostream>

using namespace std;

int main()
{
    int n, e, f, c=0;

    cin >>n;
    while(n--){
        cin >> e>> f>> c ;
        int sodas = 0;//how many bottles drank
        while((e+f)>=c){
            sodas += (e+f)/c;
            e = (e+f)/c;
            f = (e+f)%c;
        }
        cout<<sodas<<endl;
    }
    return 0;
}
