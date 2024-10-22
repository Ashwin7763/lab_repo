#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1,5,7};
    vector<int> v2 = {3,8,2};
    int result = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        result+=v1[i]*v2[i];
    }
    cout<<"answer:"<<result<<endl;
 	cout<<"modified"<<endl;
    return 0;

}
