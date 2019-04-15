#include <iostream>
#include <algorithm>

using namespace std;

#define STANDARD 9
#define MAX 100

int main()
{
	int sum = 0;
	int inputData[9];
	for (int i = 0; i < 9; i++){
		cin >> inputData[i];
		sum += inputData[i];
	}

	for (int i = 0; i < STANDARD - 1; i++){
		for (int j = i + 1; j < STANDARD; j++){
			if (sum - (inputData[i] + inputData[j]) == MAX){
				inputData[i] = -1;
				inputData[j] = -1;
				break;
			}
		}
		if (inputData[i] == -1)
			break;
	}

	sort(inputData, inputData + STANDARD);

	for (int i = 2; i < STANDARD; i++){
		cout << inputData[i] << endl;
	}

	return 0;
}