// Goldman Sachs 
1.Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. 

// n*nlogn approarch
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        

        map<string,vector<string>> m;
        for(int i=0;i<string_list.size();i++)
        {
            
            string tmp=string_list[i];
            sort(tmp.begin(),tmp.end());
            m[tmp].push_back(string_list[i]);
            
        }
        
        vector<vector<string>> ans;
        for(auto x: m)
        {
            ans.push_back(x.second);
        }
       return ans; 
        
    }
};

2.Overlapping rectangles

//O(1)
class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if(L1[0]>R2[0] || L1[1]<R2[1] || L2[0]>R1[0] || L2[1]<R1[1])
        {
            return 0;
        }
        return 1;
    }
};

3.

