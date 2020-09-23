//cpp 17 needed
#include <iostream>

using namespace std;


int main()
{
int a,b;
cin >> a >> b;
int counter = 0;
for(int i=a; i<=b; ++i){
    if(i%7==0){
        counter++;
    }
    if(i%7!=0){
        string s = to_string(i);
        int sum = 0;
        for(int j=0; j<s.size(); ++j){
            char d = s[j];
            int e = int(d-'0');
            sum+=e;
        }
        if(sum%7==0){
            counter++;
        }
    }
}
cout<<counter;

    return 0;
}
