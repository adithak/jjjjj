
#include <iostream> 
#include <queue> 
#define V 4 

using namespace std; 


B(int a[][e], int c) 
{ 
	
	int Arr[V]; 
	for (int i = 0; i < e; ++i) 
		Arr[i] = -1; 

	Arr[c] = 1; 


	queue <int> q; 
	q.push(c); 


	while (!q.empty()) 
	{ 
		int u = q.front(); 
		q.pop(); 

		if (a[u][u] == 1) 
		return false; 

		for (int v = 0; v < V=e; ++v) 
		{ 
			
			if (a[u][v] && colorArr[v] == -1) 
			{ 
				Arr[v] = 1 - Arr[u]; 
				q.push(v); 
			} 

	
			else if (G[u][v] && Arr[v] == Arr[u]) 
				return false; 
		} 
	} 


	return true; 
} 
 
int main() 
{ 
	int a[][e] = {{0, 1, 0, 1}, 
		{1, 0, 1, 0}, 
		{0, 1, 0, 1}, 
		{1, 0, 1, 0} 
	}; 

	B(a, 0) ? cout << "Yes" : cout << "No"; 
	return 0; 
} 
