#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void readFile(vector <string> Myvector)
{

}
void print(vector <string> Myvector)
{

}
void writeFile(vector <string> Myvector)
{
    ofstream fileout;
    fileout.open("textout.txt");

    if (!fileout.is_open())
    {
        cout << "Error" << endl;
    }
    else
    {
        for (const auto& line : Myvector) {
            fileout << line << endl;
        }
    }
    fileout.close();

}
int main()
{
    vector <string> Myvector;
    readFile(Myvector);
    print(Myvector);
    writeFile(Myvector);
    return 0;
}
