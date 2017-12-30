#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numrows) {
        //cout<<"hey"<<endl;
				int N = 1000;
        int n = s.length();

        int a[numrows][N];
        
        for(int i=0 ;i<numrows ;i++){
            for(int j=0;j<N;j++)
                a[i][j]=0;
        }
    
        int in=1;
        for(int j=0; in <= n && j < N ; j++ ){
            for(int i = 0; i < numrows && in <= n ; i++){
                if(j%2 == 0) {
                    a[i][j]=in++;
                }
                else {
                    if(i%2){
                        a[i][j] = in++;
                    }
                    else{
                        a[i][j] = -999;
                    }
                }
            }
        }
        
        /*for (int i = 0; i < numrows; i++){
            for(int j = 0; j < 30; j++ )
                cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
        string ans;
        for (int i = 0; i < numrows; i++){
            for(int j = 0; j < N; j++ ){
                if(a[i][j]==0) break;
                else if(a[i][j] != -999)ans.push_back(s[a[i][j]-1]);
            }
        }
        
        return ans;
}

int main(){
	string s;
	int x;
	//cout<<"hello"<<endl;
	cin>>s;
	//cout<<"Worlds"<<endl;
	cin>>x;

	cout<<convert(s,x)<<endl;
	return 0;	
}
