#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
	
	if (argc == 1)
	{
		fs::path cur_path(fs::current_path());
		std::cout << "Path\n"
			  << "----\n"
			  << cur_path.string() << '\n';
	}	else if (argc == 2){
		fs::path cur_argv_path{fs::absolute(argv[1])};
		std::cout << "Path\n"
			  << "----\n"
			  << cur_argv_path.string() << '\n';
	} else {
		std::cerr << "TO MANY ARGUMENTS";
		return -1;
	}
}
