
#include <iostream>
#include <string>

struct Address
{
    std::string city;
    std::string street;
    std::string numberHouse;
    int numberAppartment;
    int index;
};
void InAddress(Address& address)
{
    std::cout << "Enter info about your address:" << std::endl;
    std::cout << "City: ";
    std::cin >> address.city;
    std::cout << "Street: ";
    std::cin >> address.street;
    std::cout << "House: ";
    std::cin >> address.numberHouse;
    std::cout << "Appartment: ";
    std::cin >> address.numberAppartment;
    std::cout << "Index: ";
    std::cin >> address.index;
}
void OutAddress(Address& address)
{
    std::cout << '\n';
    std::cout << "City: " << address.city << std::endl;
    std::cout << "Street: " << address.street << std::endl;
    std::cout << "House: " << address.numberHouse << std::endl;
    std::cout << "Appartment: " << address.numberAppartment << std::endl;
    std::cout << "Index: " << address.index << std::endl;
}

int main()
{
    Address address;
    InAddress(address);
    OutAddress(address);
    
}
