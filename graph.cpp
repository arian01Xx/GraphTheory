#include "solution.hpp"

int main(){
	Solution solution;
	std::vector<std::vector<int>> input={{1},{2},{3},{}};
	bool output=solution.canVisitAllRooms(input);
	std::cout<<"Key Found ? = "<<output<<std::endl;

	return 0;
}