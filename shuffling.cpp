#include <iostream>
using namespace std;

int main() {
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int o,e;
        if(N%2 == 0)
        {
            o=N/2;
            e=N/2;
        }
        else
        {
            o=N/2 + 1;
            e=N/2;
        }
        int O=0,E=0;
        int in;
        for(int i=0; i<N ; i++)
        {
            cin>>in;
            if(in % 2==0)
            {
              E++;
            }
            else{
                O++;
            }
        }
        cout<<min(o,E)+min(O,e)<<"\n";
    }
	return 0;
}
