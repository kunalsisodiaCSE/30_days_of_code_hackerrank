#include<iostream>
using namespace std;
class Binary
{
   public:
   int solve(int x) 
   { 
      int ret = 0;
      int len = 0;
      for(int i = 0; i < 32; i++)
     {
         if((x >> i) & 1)
        {
            len++;
         }
        else
        {
            len = 0;
         }
         ret = max(ret, len);
      }
      return ret;
   }
};
int main()
{ 
  int n;
   Binary ob;
   cin>>n;
   cout << ob.solve(n);
}