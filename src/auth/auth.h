#pragma once
#include <map>

struct User {
    std::string username;
    std::string password;
    std::string role;
};

class AuthSystem {
public:
    bool login();
    void logout();
    bool hasPermission(const std::string& permission);
    
private:
    std::map<std::string, User> users;
    void loadUsers();
    void saveUsers();
};