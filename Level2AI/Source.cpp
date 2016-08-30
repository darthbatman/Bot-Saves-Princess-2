#include <iostream>
#include <vector>
#include <string>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
	//your logic here
	int y;
	int x;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (grid[i][j] == 'm'){
				r = i;
				c = j;
				//cout << "m (" << r << ", " << c << ")" << endl;
			}
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){

			if (grid[i][j] == 'p'){
				/*	cout << i << ", " << j << endl;
				cout << ((m - 1) / 2) << ", " << ((m - 1) / 2) << endl;
				cout << i - ((m - 1) / 2) << ", " << j - ((m - 1) / 2) << endl;*/

				y = i - r;
				x = j - c;

				//cout << "p (" << i << ", " << j << ")" << endl;
				//cout << "m (" << r << ", " << c << ")" << endl;
				//cout << "p (" << i << ", " << j << ")" << endl;

				if (y < 0){
					for (int k = 0; k < (y * -1); k++){
						cout << "UP" << endl;
						grid[r][c] = '-';
						grid[r - 1][c] = 'm';
						/*for (int g = 0; g < n; g++){
						for (int h = 0; h < n; h++){
						cout << grid[g][h];
						}
						cout << endl;
						}*/
						break;
					}
				}
				else if (y > 0) {
					for (int k = 0; k < (y * 1); k++){
						cout << "DOWN" << endl;
						grid[r][c] = '-';
						grid[r + 1][c] = 'm';
						/*for (int g = 0; g < n; g++){
						for (int h = 0; h < n; h++){
						cout << grid[g][h];
						}
						cout << endl;
						}*/
						break;
					}
				}

				else if (x < 0){
					for (int k = 0; k < (x * -1); k++){
						cout << "LEFT" << endl;
						grid[r][c] = '-';
						grid[r][c - 1] = 'm';
						/*for (int g = 0; g < n; g++){
						for (int h = 0; h < n; h++){
						cout << grid[g][h];
						}
						cout << endl;
						}*/
						break;
					}
				}
				else {
					for (int k = 0; k < (x * 1); k++){
						cout << "RIGHT" << endl;
						grid[r][c] = '-';
						grid[r][c + 1] = 'm';
						/*for (int g = 0; g < n; g++){
						for (int h = 0; h < n; h++){
						cout << grid[g][h];
						}
						cout << endl;
						}*/
						break;
					}
				}



			}

		}
	}
}
int main(void) {

	int n, r, c;
	vector <string> grid;

	cin >> n;
	cin >> r;
	cin >> c;

	for (int i = 0; i < n; i++) {
		string s; 
		cin >> s;
		//getline(cin, s);
		grid.push_back(s);
	}

	nextMove(n, r, c, grid);
	return 0;
}
