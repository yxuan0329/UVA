#include <iostream>

using namespace std;

int main()
{
    int n, e, f, c=0;

    cin >>n;
    while(n--){
        cin >> e>> f>> c ;
        int sodas = 0, remain=0; //how many bottles drank, remain
        while((e+f)>=c){
            sodas += (e+f)/c;
            remain = (e+f)/c;
            f = (e+f)%c;
            e = remain;
            cout<<"sodas="<<sodas<<",e="<<e<<",f="<<f<<endl;
        }
        cout<<sodas<<endl;
    }
    return 0;
}
