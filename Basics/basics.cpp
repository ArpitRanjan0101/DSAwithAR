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
//Count number of odd digits in a number

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

---------------------------------------
//Reverse number

class Solution {
public:
    int reverseNumber(int n) {
        int reverseNumber=0;
        while(n>0)
        {
           int lastDigit=n%10;
            reverseNumber=(reverseNumber*10)+lastDigit;
            n=n/10;
        }
        return reverseNumber;
        
    }
   
};

----------------------------------------------
//Palindrome Number

class Solution {
public:
    bool isPalindrome(int n) {
        int copy=n;
        int reverseNumber=0;
        while(n>0)
        {
           int lastDigit=n%10;
            reverseNumber=(reverseNumber*10)+lastDigit;
            n=n/10;
        }
        if(reverseNumber==copy)
        return true;
        return false;
        
    }
};

-----------------------------------------
//Return the Largest Digit in a Number

class Solution {
public:
    int largestDigit(int n) {
        int largestDigit=0;
        while(n>0)
        {
            int lastDigit=n%10;
            if(lastDigit>largestDigit)
            {
                largestDigit=lastDigit;
            }
            n=n/10;
        }
        return largestDigit;

    }
};

----------------------------------------------
//Factorial of a given number

class Solution {
public:
    int factorial(int n) {
        long long ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*i;
        }
        return ans;

    }
};

---------------------------------------------
//Check if the Number is Armstrong

class Solution {
public:
    bool isArmstrong(int n) {
        int sum =0;
        int count=log10(n)+1;
        int dupNum=n;
        while(n>0){
           int lastDigit=n%10;
            sum=sum+pow(lastDigit,count);
            n=n/10;
        }
        return(dupNum==sum);// yaha pe mistake kiya maine sum ke equl lena tha maine n ke le liya

    }
};

-------------------------------------------------
//Check for Perfect Number
class Solution {
public:
    bool isPerfect(int n) {
        int sum=0;
        for(int i=1;i<=n-1;i++){
            if(n%i==0){
                sum=sum+i;
            }
        }
        return(sum==n);

    }
};

----------------------------------------------------
