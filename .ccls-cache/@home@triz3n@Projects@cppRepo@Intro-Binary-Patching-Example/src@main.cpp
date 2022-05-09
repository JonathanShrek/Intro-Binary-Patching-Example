#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
    // check to see if user provided 1 argument
    if (argc != 2) {
        std::cout << "You must provide exactly one argument." << std::endl;

        return EXIT_FAILURE;
    }

    if (strcmp(argv[1],"AAAA-1234-5678-9012") == 0) {
        std::cout << "Access granted" << std::endl;
    }
    else {
        std::cout << "Access denied" << std::endl;
    }

    return EXIT_SUCCESS;
}
