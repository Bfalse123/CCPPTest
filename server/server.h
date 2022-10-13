#include <cstdint>
#include <mutex>
#include <string>

namespace Server {
class Server {
   public:
    Server(uint32_t port, int32_t qlen);
    void Listen();
    ~Server();

   private:
    int32_t socket;
    std::mutex m;
};
}  // namespace Server