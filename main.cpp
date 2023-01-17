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

vector < vector < int >>transpose (vector < vector < int > >v, int n, int m)
{
  vector < vector < int >>tr (m, vector < int >(n));
  for (int j = 0; j < m; j++)
    {


      tr[j][i] = v[i][j];
    }
}

return tr;
}

void RowWiseSort(vector<vector<int> >& B)
{

    for (int i = 0; i < (int)B.size(); i++) {
 

        sort(B[i].begin(), B[i].end());
    }
}

void sortCol(vector<vector<int> > v, int N, int M)
{
    vector<vector<int> > B= transpose(v, N, M);
    RowWiseSort(B);

    mat = transpose(B, M, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
}   

    int main ()
    {
      int n, m;
      cin >> n;
      cin >> m;
      vector < vector < int >>v;

      v = random (n, m);
    sortCol(v,n,m);

      return 0;
    }
