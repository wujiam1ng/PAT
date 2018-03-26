#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
using namespace std; 
int main(){
	string s;	
	while(cin>>s)
		if(s.size()==3&&s[2]=='T')
		cout<<s[0]-'A'+1; 
	return 0;
}
