#include <iostream>
#include <vector>

using namespace std;

void check_min_max(long int tab[], int s){

for(int i=0; i<s; ++i){
    int min_ = 10000000000000;
    int max_ = -10000000000000;
    for(int j=0; j<s; ++j){
        if(tab[i]>=tab[j]){
            if(tab[i]-tab[j] < min_ && tab[i]-tab[j]!=0){
                min_ = tab[i]-tab[j];
            }
            if(tab[i]-tab[j] > max_ && tab[i]-tab[j]!=0){
                max_ = tab[i]-tab[j];
            }
        }
        else if(tab[i]<tab[j]){
            if(tab[j]-tab[i] < min_ && tab[j]-tab[i]!=0){
                min_ = tab[j]-tab[i];
            }
            if(tab[j]-tab[i] > max_ && tab[j]-tab[i]!=0){
                max_ = tab[j]-tab[i];
            }
        }

    }
cout << min_ <<" "<<max_<<endl;
}
}


int main()
{
    int n;
    cin >> n;
    long int tab[n];
    for(int i=0; i<n; ++i){
        cin >> tab[i];
    }
    check_min_max(tab,n);
    return 0;
}
