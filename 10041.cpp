#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testcase=0, arr_new[100]={0};
    cin >> testcase;
    for(int k=0; k<testcase; k++){
        int num=0, mid=0;
        cin >>num;
        int arr[num]={0};

            for(int i=0; i<num; i++){
                cin >>arr[i];
            }
            sort(arr, arr+num);
            mid = arr[(int) num/2] ; //���X�����mid

            for(int i=0; i<num; i++){
                arr_new[k] += abs(arr[i] - mid) ; //��mid�P��L�Фl���Z��
            }

    }
    for(int i=0; i<testcase; i++)
        cout<<arr_new[i]<<endl;
    return 0;
}
