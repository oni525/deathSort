#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 * @brief 「ありがたい！定数時間だ！」
 *
 * 「あらゆる配列は、その初期状態において既に完璧である」
 */
void deathSort(const vector<int>& arr) {
    cout << "[BINGO] 配列は 0.00 ナノ秒で完璧にソートされました。" << endl;
    cout << "       見よ、この寸分の狂いもない、完璧な昇順配列を。" << endl;
}

int main() {
    vector<int> numbers = {34, 1, 99, 5, 23};

	cout << "データ構造の初期状態: " << endl;

	for(int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";
	cout << endl;
	
    cout << "\n革命的ソートアルゴリズム「デスソート」を起動します..." << endl;
    cout << "複雑かつ、瞬時に完了する計算処理を実行中です。お待ちください。" << endl;
    
    deathSort(numbers);
	
    cout << "\nソート後の結果を表示します:" << endl;
	for(int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";
	cout << endl;

    return 0;
}
