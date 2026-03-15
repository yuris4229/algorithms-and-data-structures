#include <iostream>
#include <queue>
#include <utility>

using namespace std;

const int MAX_SIZE = 100;

int grid[MAX_SIZE][MAX_SIZE];
int visit[MAX_SIZE][MAX_SIZE];

int direction_x[4] = { 0, 1, 0, -1 };
int direction_y[4] = { 1, 0, -1, 0 };

int main() {
	//초기 가로, 세로 값
	int n, m;
	cin >> n >> m;

	//격자 칸 입력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}

	//각각 x좌표값, y좌표값을 의미
	queue<pair<int,int>> q;
	q.push({0, 0});
	visit[0][0] = 1;

	//탐색
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nxt_x = cur.first + direction_x[i];
			int nxt_y = cur.second + direction_y[i];

			if (nxt_x < 0 || nxt_x >= n || nxt_y < 0 || nxt_y >= m) continue;
			if (visit[nxt_x][nxt_y]) continue;
			if (grid[nxt_x][nxt_y]) continue;

			q.push({ nxt_x, nxt_y });
			visit[nxt_x][nxt_y] = 1;
		}
	}
}
