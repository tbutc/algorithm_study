/*�� N���� �־����� �� i��° ������ j��° �������� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �� �迭 ���� : S[i] = S[i-1] + A[i]

 ���� �� ���� : S[j] - S[i-1]
 */

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arrNum, quizNum;
	int arr[100000];
	
	cin >> arrNum >> quizNum;

	for (int i = 1; i <= arrNum; i++) {	//�迭�� �ε����� 1�� �����ϴ°� ���ϴ�
		int currNum;
		cin >> currNum;
		arr[i] = arr[i - 1] + currNum;
	}

	for (int i = 0; i < quizNum; i++) {
		int j, k;
		cin >> j >> k;
		cout << arr[k] - arr[j - 1] << "\n";
	}

}