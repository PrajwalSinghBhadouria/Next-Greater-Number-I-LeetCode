class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num2, vector<int>& num1) {
        vector<int> v;
	int j;
	for(int i=0; i<num1.size()-1; i++){
		for(j=i+1; j<num1.size(); j++){
			if(num1[i]<num1[j]){
				v.push_back(num1[j]);
				break;
			}
			
		}
		if(j==num1.size()){
			v.push_back(-1);
		}
	}
	v.push_back(-1);
	map<int,int> mp;
	for(int i=0; i<num1.size(); i++){
		mp[num1[i]]=i;
	}	
	vector<int> k;
	for(int i=0; i<num2.size(); i++){
		if(mp.find(num2[i])!=mp.end()){
			k.push_back(v[mp[num2[i]]]);
		}
	}
    return k;
	
    }
};
