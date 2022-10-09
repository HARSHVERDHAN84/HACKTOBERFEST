//find duplicate in an array of N+1 Integers

//solution 1  o(n^2) time
// if array is unsorted
/*#include <iostream>
using namespace std;

int main()
{
   int a[8]={2,3,7,3,6,3,2,4};
   int count;
   for(int i=0;i<8;i++)
   {
       count=1;
       if(a[i]!=-1)
       for(int j=i+1;j<8;j++)
       {

           if(a[i]==a[j])
           {
               count++;
               a[j]=-1;
           }
       }
       if(count>1)
       cout<<" "<<a[i];
   }

    return 0;
}*/
//solution 2  o(n) time
// if array is sorted
/*#include <iostream>
using namespace std;

int main()
{
   int a[8]={2,2,3,5,5,5,6,8};
   int lastduplicate=0;
   for(int i=0;i<8;i++)
   {

           if(a[i]==a[i+1]&&lastduplicate!=a[i])
           {
               cout<<" "<<a[i];
             lastduplicate=a[i];

    }}



    return 0;
}*/
// //solution 3  o(nlogn) time
// if array is unsorted first convert it into sorted array then use solution approach

//solution 4  o(n) time extra space complexity o(n) hash mapping
// if array maybe sorted or maybe unsorted

/*#include <iostream>
using namespace std;

int main()
{
  // int a[8]={2,2,3,5,5,5,6,8};
   int a[8]={2,3,7,3,6,3,2,4};
   int H[9]={0};

   for(int i=0;i<8;i++)
   {
      H[a[i]]++;
   }
   for(int i=1;i<9;i++)
   {
       if(H[i]>1)
        printf("%d %d",i,H[i]);  // i is repeated H[i] times
   }




    return 0;
}*/
 //find duplicate in an array of N+1 Integers
 //array of each elements range is 0 to n-1
// time complexity is o(n) and extra space complexity is o(1)
//int a[8]={2,3,7,3,6,3,2,4};
#include <iostream>
using namespace std;


int main()
{
    int a[]={2,7,1,6,8,2,1,7,8};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    a[a[i]%n]+=n;
    for(int i=0;i<n;i++)
    {
        if(a[i]/n>1)
        cout<<i<<endl;
    }
    for(int i=0;i<n;i++)
    a[i]=a[i]%n;
    for(int i=0;i<n;i++)
    cout<<a[i];


    return 0;
}



