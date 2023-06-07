/*
* @title    : 10811번 바구니 뒤집기(브론즈 5)
* @content  : 1차원 배열
* @author   : 신세은
* @date     : 230527
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/
#include <iostream>

using namespace std;

int main() {

	int n, m, a, b;
	int arr[100];
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	while (m--) {
		cin >> a >> b;

		for (int i = 0; i <= (b - a) / 2; i++) {
			swap(arr[a + i], arr[b - i]);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}