#include<iostream>
using namespace std;
int main()
{
    int val, sum;
    while(cin>>val)//正常读入时返回1，否则返回0
    {
        sum += val;
    }
    cout<<sum<<endl;
    return 0;
}