// Q1) solution below
class Solution {
    public:
        void pattern1(int n) {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
    
        }
    };

    ------------------------------
// Q2 solution is below

class Solution {
    public:
        void pattern2(int n) {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    cout<< "*";
                }
                cout <<endl;
            }
    
        }
    };

    -----------------------------

    // Q3) solution below
    class Solution {
        public:
            void pattern3(int n) {
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout << j;
                    }
                    cout<< endl;
                }
        
            }
        };

        -----------------------------
        // Q4) solution below

        class Solution {
            public:
                void pattern4(int n) {
                    for(int i=1;i<=n;i++)
                    {
                        for(int j=1;j<=i;j++)
                        {
                            cout << i;
                        }
                        cout <<endl;
                    }
            
                }
            };

            --------------------------------
            // Q5) solution below
            class Solution {
                public:
                    void pattern5(int n) {
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<n-i;j++)
                            {
                                cout <<"*";
                            }
                            cout<< endl;
                        }
                
                
                    }
                };

                -----------------------------
                // Q6) solution below
                class Solution {
                    public:
                        void pattern6(int n) {
                            for(int i=1;i<=n;i++)
                            {
                                for(int j=1;j<=n-i+1;j++)
                                {
                                    cout << j ;
                                }
                                cout <<endl;
                            }
                    
                        }
                    };

                    --------------------------------
                // Q7) solution below
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

                    -------------------------------






























































































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
