/*
*Pushkin Feleke
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include <random>
#include <ctime>
#include <iomanip>
 
using namespace std;

// this code will show how much the total permutaion is 
void  numbersOfPermutation(int n , int k){

        //initalize permutaion
        int  perm = 0;
        //initalize n!
        int factorialN = 1;
        //initalize (n-k)!
        int nMinusK = n - k;
        
        int factorialNK = 1;
        //n!
        for(int i = 1; i <= n ; i++ )
                factorialN *= i;
        //(n-k)!
        for(int i = 1; i <= nMinusK  ; i++ )
                factorialNK *= i;
       //perm = n!/(n-k)!
        perm = factorialN / factorialNK;

        cout<<"\n"<<"Total Permutation = "<<perm<<endl;
}//close numbersOfPermutation()



int main(int argc, char **argv  )
{
        //this will start the clock 
        int start_s=clock();
        
        //this is where the users inout is taken 
        int n = atoi(argv[1]);
        int k = atoi(argv[2]);
    
        //initilize the vector perm with the size of n    
        vector<int> perm(n);
   
   
       iota(perm.begin(),perm.end(), 0);

   do
    {
        for (int i = 0; i < k; i++)
        {
        //this will print out the diffrent sort
            cout << perm[ i] << " " ;
        }
        //this will create a line between next permutation
        cout << endl;
        reverse(perm.begin()+k,perm.end());
        
       //this will output all of the permutan
    } while (next_permutation(perm.begin(),perm.end()));//close do-while
   
        // this condition will not allow the permutation to display if its in the decimal
        //for exsample n=10 k=10 will cause an error  
        //you can uncomment if you run into such problem 
      //  if(n>k){
	numbersOfPermutation (n ,k);
	//}//close if
	//else{
	//cout<<endl;
	//}//close else
	
	int stop_s=clock();//this will stop the clock 
	
	//totalTime will equal the beging and the end of the timer
        double totalTime = (stop_s-start_s)/double(CLOCKS_PER_SEC);
        //this code will print the
        //setprecision(2) will place the decimal in the proper location  
	cout << "Total time = " <<fixed << setprecision(2)<<totalTime<<" sec" << endl;
	return 0;
}//close main()

