/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

vector < vector < int >>
random (int n, int m)
{
  srand (time (0));
  vector < vector < int >>v (n, vector < int >(m, 0));
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
	{
	  v[i][j] = 0 + (rand () % 101);
	  cout << v[i][j];
	}
    }
  return v;
}
bool mycomp(vector<int>& A, vector<int>& B)
{
    //if first element of first 
    //row<first element of second row
    if (A[0] < B[0])
        return true; //no swap
    //other wise swap the rows
    return false;
}

    int main ()
    {
      int n, m;
      cin >> n;
      cin >> m;
      vector < vector < int >>v;

      v = random (n, m);
    sort(v.begin(), v.end(), mycomp);

      return 0;
    }
