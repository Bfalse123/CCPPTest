#include <thread>

#include "server.h"
void Start() {
    Server::Server s(8888, 5);
    s.Listen();
}

int main() {
    std::thread th(Start);
    th.join();
    return 0;
}