#include <iostream>
using namespace std;
string week[7] = {
    "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"
};
//Jan1 = Saturday
int month[13] = {
    -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31  
};
int main(){
    int n=0;
    cin>>n;
    while(n--){
        int m, d, i, j, daysum =0;
        cin>>m>>d;
        while(m-->1){
            daysum += month[m];
        }
        daysum  = (daysum+d)%7;
        cout<<week[daysum] <<endl;
    }
    return 0;
    
}
