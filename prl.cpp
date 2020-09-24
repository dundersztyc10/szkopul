#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int>v, int p){
    vector<int>temp;
    sort(v.begin(),v.end());
    for(int i=p-1; i>=0; --i){
        temp.push_back(v[i]);
    }
    v = temp;
    return v;
}

void test(vector<int>v, int p){
    v = sort_vector(v,p);
    int boat_counter = 0;
    int on_boat = 0;
    for(int i=0; i<p; ++i){
        if(v[i]==4){
            boat_counter++;
            v[i]=0;
            continue;
        }
        for(int j=0; j<p; ++j){
            if(4-on_boat >= v[j] && v[j] != 0){
                on_boat+=v[j];
                v[j]=0;
            }
        }
        if(on_boat!=0){
            boat_counter++;
            on_boat=0;
        }
        bool check_vector = true;
        for(int k=0; k<p; ++k){
            if(v[k]!=0){
                check_vector = false;
            }
        }
        if(check_vector==true){
            cout<<boat_counter;
            exit(0);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    test(v,n);
    return 0;
}
