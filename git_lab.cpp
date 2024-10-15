#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter size of vectors:"<<endl;
    cin>>x;
    vector<int> v1(x);
    vector<int> v2(x);
    for(auto &x:v1)
    {
        cout<<"Enter value: "<<endl;
        cin>>x;
    }
    for(auto &x:v2)
    {
        cout<<"Enter value: "<<endl;
        cin>>x;
    }
    int sum=0;
    for(int i=0;i<x;i++)
    {
        sum+=(v1[i]*v2[i]);
    }
    cout<<"Product is: "<<sum;
    cout<<"This is parallelism?"<<endl;
    cout<<"bhai conflict";
    return 0;
}