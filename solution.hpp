#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <queue>
#include <vector>

class Solution{

public:
	bool canVisitAllRooms(std::vector<std::vector<int>>& rooms){
		int n=rooms.size();
		std::vector<int> visited (n,0);
		visited[0]=1;
		std::queue<int> q;
		for(int i=0; i<rooms[0].size(); i++){
			q.push(rooms[0][i]);
		}
		while(!q.empty()){
			int t=q.front();
			q.pop();
			if(visited[t]==0){
				visited[t]=1;
				for(int i=0; i<rooms[t].size(); i++){
					q.push(rooms[t][i]);
				}
			}
		}
		for(int i=0; i<n; i++){
			if(visited[i] == 0){
				return false;
			}
		}
		return true;
	}
};

#endif // SOLUTION_HPP