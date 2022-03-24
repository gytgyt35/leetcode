
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> obj;

    for (int i=0;i<=9;i++)
    {
        obj.push_back(i);
        cout<<obj[i]<<",";
    }

for (int i=0;i<4;i++)
{
    obj.pop_back();
}

cout<<"\n"<<endl;


for(int i=0;i<obj.size();i++)
{
    cout<<obj[i]<<",";
}

obj.clear();

for(int i=0;i<obj.size();i++)
{
    cout<<obj[i]<<",";
}
cout<<endl;
cout<<obj.size();

vector<int> obj1;

obj1.push_back(1);
obj1.push_back(3);
obj1.push_back(0);

sort(obj1.begin(),obj1.end());
cout<<endl;
for (int i=0;i<obj1.size();i++)
{
    cout<<obj1[i]<<",";
}

cout<<"\n"<<endl;

reverse(obj1.begin(),obj1.end());

for(int i=0;i<obj1.size();i++)
{

    cout<<obj1[i]<<",";
}
return 0;

}
