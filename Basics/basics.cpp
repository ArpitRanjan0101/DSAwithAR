// Count all Digits of a Number

class Solution {
public:
    int countDigit(int n) {
        if(n==0)
        return 1;// if n==0 hai too return 1 ke baad code execute nhi hoga
        int count=0;
        while(n>0)
        {
           n=n/10;
           count+=1; 
        }
        return count ;

    }
};

----------------------------------------------------
Count number of odd digits in a number

class Solution {
public:
    int countOddDigit(int n) {
        int cOdd =0;
        while(n>0){
             int lastDigit =n%10;
              if(lastDigit%2!=0){
                cOdd+=1;
              }
              n/=10;
        }
        return cOdd;
    }
};
