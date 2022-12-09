#ifndef __NETWORK_HPP
#define __NETWORK_HPP

namespace Xerxes
{
    
class Network
{
private:
    //
public:
    Network(/* args */);
    ~Network();

    virtual bool sendData(const uint8_t destinationAddress, const uint8_t &data);
    virtual uint16_t readData(uint8_t *receiveBuffer, uint32_t timeoutMs);
};

Network::Network(/* args */)
{
}

Network::~Network()
{
}


} // namespace Xerxes


#endif // !__NETWORK_HPP
