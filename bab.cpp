#include <iostream>
#include <iomanip>

using namespace std;

void check(string s){
int a_counter = 0;
int b_counter = 0;

for(int i=0; i<s.size(); ++i){
    char a = s[i];
    if(a=='a'&&a_counter<b_counter){
        a_counter++;
    }
    else if(a=='b'&&b_counter>=a_counter){
        b_counter++;
    }
}
if(a_counter>=2 && b_counter>=2){
    cout<<"Tak"<<endl;
}
else{
    cout<<"Nie"<<endl;
}
}

int main()
{
int a;
string t;
cin >> a;
for(int i=0; i<a; ++i){
    cin >> t;
    check(t);
}



    return 0;
}
