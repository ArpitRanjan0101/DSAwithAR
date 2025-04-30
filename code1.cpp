// Q7 solution below
class Solution {
    public:
        void pattern7(int n) {
            for( int i=1;i <= n;i++)
            {
                for(int j=1;j<=n-i;j++) 
                {
                   cout <<" ";
                }
                for( int j=1;j<=2*i-1;j++)// yaha pe exection drop ho jaega kyuki maine agar j=0 liya to start print hi nhi hoga since i=0 hai too 2 se multiply hokr zero aa jeaga that's why so we have to take i=1 initially
                {
                    cout << "*";
                }
                for(int j=1;j<=n-i;j++)
                {
                    cout << " ";
                }
                cout << endl;
            }
    
        }
    };


    --------------------------
    