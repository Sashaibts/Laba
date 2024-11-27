#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void readFile(vector <string> Myvector)
{
    string line;
    ifstream in;
    in.open("text.txt");
    if (in.is_open())
    {
        while (getline(in, line)) {
            Myvector.push_back(line);
        }
        in.close();
    }
    else
    {
        cout << "Ошибка открытия файла: "<< endl;
    }
}
void print(vector <string> Myvector)
{

}
void writeFile(vector <string> Myvector)
{

}
int main()
{
    vector <string> Myvector;
    readFile(Myvector);
    print(Myvector);
    writeFile(Myvector);

    return 0;
}
