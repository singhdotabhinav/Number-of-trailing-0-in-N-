#include <iostream>
using namespace std;

Program to find number of trailing zeroes in N!
We can't go for brute force approach to solve the problem
as it will be have n! complexiety

The other approach can be finding the number of ocuurrence 
of 10 in it, which can be calculated as adding number of 
10's + number of 5's and 2's. Its quite easy to observe that 
5 will occurs the number of times less than number of 2's
So, now we will calculate no. of 5's.

Step to calculate number of 5's in N 
count=floor(N/5) + floor(N/5^2) + floor(N/5^3)......

Ex if N is 100
then count=floor(100/5) + floor(100/5^2) + floor(100/5^3).....
           =20+ 4 + 0
           =24
            
        



int findzero(int n){
    int ans=0;
    int p=5;
    while(n/p>0){
        ans+=(n/p);
        p=p*5;
    }

    return ans;

}


int main(){

    double ans=findzero(10);
    cout<<ans;
}

