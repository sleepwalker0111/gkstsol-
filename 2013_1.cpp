#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main()
{
        cout<<"enter the valueT";
        int T,N,B;
        cin>>T;
        for(int i=0;i<T;i++)
        {
                cout<<"keep entering the values of N,B";
                cin>>N;
                cin>>B;
                vector<int>A;
                for(int j=0;j<N;j++)
                {
                        int x;
                        cin>>x;
                        A.push_back(x);
                }
                sort(A.begin(),A.end());
                        int sum=0;int p=0,k=0;
                while(p<=N)
                {
                    if((A[p]+sum)<=B)
                       {
                               sum=sum+A[p];
                               k++;
                               }
                            p++;
                }
                cout<<k<<endl;
                return 0;
        }
}
~                 