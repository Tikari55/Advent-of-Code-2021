#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    // Reading input file
    ifstream fin("input.txt");
    vector<int> data;
    int element;
    while (fin >> element)
    {
        data.push_back(element);
    }
    // Solving puzzle
    int count = 0;
    int firstNum, secondNum;
    for (int i = 0; i < data.size(); i++)
    {
        if (i < data.size())
        {
            firstNum = data[i];
            secondNum = data[i+1];
        }
        if (secondNum-firstNum > 0)
        {
            count++;
        }
    }
    cout << count << endl;
}