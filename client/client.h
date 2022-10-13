#include <cstdint>
#include <string>

namespace Client {
class Client {
   public:
    Client(const std::string& host, uint32_t port);
    std::string SendMessage(const std::string& data);
    ~Client();

   private:
    void Send(const std::string& data) const;
    std::string Read() const;
    int32_t socket;
};
}  // namespace Client