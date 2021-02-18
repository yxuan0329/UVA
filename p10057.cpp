#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n=0, i;
    cin>>n;
    int num[n], sum=0;
    int median=0, median2=0, median_numbers=0, m=1; 
    for(i=0; i<n; i++){
        cin>>num[i];
        sum += num[i];
    }
    sort(num, num+n);
    if(n%2){//odd
        median = num[n/2];
        for(i=0; i<n; i++){
            if(median==num[i])
                median_numbers++;
        }
    }else{
        median = num[(n-1)/2];
        median2 = num[n/2];
        for(i=0;i<n;i++){
            if(num[i]==median || num[i]==median2)
                median_numbers++;
        }
    }
    cout << median <<" "<<median_numbers<<" "<<m;
    return 0;
}
