#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_SIZE = 10000;
vector<int> graph[MAX_SIZE];
int visit[MAX_SIZE];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
	}

	queue<int> q;
	q.push(0);
	visit[0] = 1;
	
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (auto it : graph[cur]) {
			if (visit[it]) continue;
			q.push(it);
			visit[it] = 1;
		}
	}
}
