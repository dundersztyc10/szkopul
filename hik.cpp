#include <iostream>
#include <vector>

using namespace std;


int main()
{
int tab[501];
for(int i=0; i<501; ++i){
    tab[i] = 0;
}
int n;

cin >> n;
for(int i=0; i<n; ++i){
    int number;
    cin >> number;
    tab[number]++;
}
vector<int>max_numb;
int max_n = 1;
for(int i=0; i<501; ++i){
    if(tab[i]==max_n){
        max_numb.push_back(i);
    }
    if(tab[i]>max_n){
        max_n = tab[i];
        max_numb.clear();
        max_numb.push_back(i);
    }
}

int final_max = max_numb[0];
for(int i=0; i<max_numb.size(); ++i){
    if(max_numb[i]>final_max){
        final_max = max_numb[i];
    }
}
cout << final_max;


    return 0;
}
