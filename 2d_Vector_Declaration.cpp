#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[3][4];
    // vector<int> v(5,2);
    vector< vector<int> > v(3,vector<int> (4,5));
    cout<<v[0][0]<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<v.size()<<endl;
    cout<<v[0].size();
}