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
    long long movingSum = 0;
    long long prevMovingSum = 156546354646;
    for (int i = 1; i < data.size()-2; i++)
    {
        movingSum = data[i] + data[i+1] + data [i+2];
        if (movingSum > prevMovingSum)
        {
            count ++;
        }
        prevMovingSum = movingSum;
    }
    
    cout << count << endl;
}