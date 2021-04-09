#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;
int main()
 {
int n;
string name;
long pnum;
cin >> n;
cin.ignore();
map <string, long> p; 
for (int i = 0; i < n; i++)
{ 
cin >> name; 
cin >> pnum; 
p[name] = pnum; 
} 
while(cin>>name) 
{ 
if (p.find(name)!= p.end())
{ 
cout << name << "=" << p.find(name)->second << endl; 
} 
else 
{ 
cout << "Not found" << endl; 
} 
}
    return 0;
}