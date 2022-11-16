#include <iostream>

int main() {
    long long N;
    std::cin >> N;
    unsigned char* NforBytes = (unsigned char*) &N;
    for (int i = 0; i < 8; i++ ){
        std::cout << i+1 <<" byte " << (long long) *(NforBytes+i) << std::endl;
    }
}
