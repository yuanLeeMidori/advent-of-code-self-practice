#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *args[]) {

    char *filename;
    string line;
    int num;
    vector<int> numList;
    filename = args[1];
    int sum;
    cout << "file name: " << filename << endl;
    ifstream file(filename);
    if (file.is_open()) {
        while (getline(file, line)) {
            num++;
            int x = stoi(line);
            
            numList.push_back(x);
        }

        for (int i = 0; i <= num; i++) {
            for (int j = 1; j < num; j++) {
                sum = numList[i] + numList[i + j];
                if (sum == 2020) {
                    cout << numList[i] << " + " << numList[i + j] << endl;
                    cout << numList[i] << " x " << numList[i + j] << " = " << numList[i] * numList[i + j] << endl;
                }
            }
        }
        file.close();
    } else {
        cout << "file can't open" << endl;
    }
    


    return 0;
}