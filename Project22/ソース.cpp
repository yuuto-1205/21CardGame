/*
【ゲームの概要】

プレイヤーとCPUがカードを使って対戦します。

カードの合計点を21に近づけることが目的です。

ただし、合計が22以上になるとバーストとなり、そのプレイヤーの負けになります。
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MIN = 1;
const int MAX = 11;

void Game(int answer)
{
	int Player = 0;
	int	CPU = 0;
	int	judg = 0;
	int card = 44;
}

int main(void)
{
	//変数
	int ans;
	//乱数の初期化
	srand((unsigned int)time(NULL));

	ans = rand() % MAX + MIN;
	//ゲームのインフォメーション
	cout << "プレイヤーとCPUがカードを使って対戦します。\n";
	cout << "カードの合計点を21に近づけることが目的です。\n";
	cout << "ただし、合計が22以上になるとバーストとなり、そのプレイヤーの負けになります。\n";

	Game(ans);
	return 0;
}