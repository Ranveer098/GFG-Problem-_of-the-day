#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int maxInstance(string s)
  {
    int n_b = 0, n_a = 0, n_l = 0, n_o = 0, n_n = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'b')
      {
        n_b++;
      }
      else if (s[i] == 'a')
      {
        n_a++;
      }
      else if (s[i] == 'l')
      {
        n_l++;
      }
      else if (s[i] == 'o')
      {
        n_o++;
      }
      else if (s[i] == 'n')
      {
        n_n++;
      }
    }
    n_o = n_o / 2;
    n_l = n_l / 2;
    int min = n_b;
    if (min > n_a)
    {
      min = n_a;
    }
    if (min > n_l)
    {
      min = n_l;
    }
    if (min > n_o)
    {
      min = n_o;
    }
    if (min > n_n)
    {
      min = n_n;
    }
    return min;
  }
};
int main()
{
  int t;
  cin>> t;
  while (t--)
  {
string s;
cin>> s;
Solution ob;
cout<<ob.maxInstance(s)<<endl;
  
  }
}