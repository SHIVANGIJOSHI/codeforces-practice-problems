#include<bits/stdc++.h>

using namespace std;

int calculate(const vector<int>&golds,int k){
    int current_gold = 0, helped_people_count = 0;
    for(int g: golds){
        if(g >= k){
            current_gold += g;
        }else if(g == 0 && current_gold > 0){
            helped_people_count++;
            current_gold--;
        }
    }
    return helped_people_count;
}

int main(){
    int t;
    cin>>t;
    for (size_t i = 0; i < t; i++)
    {
        int n,k;
        cin>>n>>k;
        vector<int> golds(n,0);
        for (size_t j = 0; j < n; j++)
        {
            int gold_value = 0;
            cin>>gold_value;
            golds[j] = gold_value;
        }
        cout<<calculate(golds,k)<<"\n";
        
    }
    
    return 0;
}