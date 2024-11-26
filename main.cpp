#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void print (const vector <string> Myvector)
{
    for (const auto& line : Myvector)
    {
        cout<<line<<endl;
    }
}

int main()
{
    vector <string> Myvector;
    print (Myvector);
    return 0;
}
