 #include<iostream>
 #include<cctype> 
 using namespace std;
 int main(){
 	string str("Hello, World!!!");
 	decltype(str.size()) i=0;
 	for(auto c:str){
 		if(ispunct(c)) i++;
 		
 	}
 	cout<<i<<"��������in"<<str<<endl;
 	return 0;
 }
