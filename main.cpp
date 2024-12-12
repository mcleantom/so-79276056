#include <boost/asio.hpp>
#include <iostream>
#include <windows.h>

int main() {
    try {
        boost::asio::io_context io_context;
        boost::asio::ip::udp::endpoint server_endpoint(boost::asio::ip::make_address("127.0.0.1"), 12345);
        boost::asio::ip::udp::socket socket(io_context);
        socket.open(boost::asio::ip::udp::v4());
        const std::string message = "Hello, UDP Server!";
        socket.send_to(boost::asio::buffer(message), server_endpoint);
        std::cout << "Message sent to server: " << message << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
