#pragma once
#include <functional>
#include <vector>

struct MenuItem {
    std::string title;
    std::function<void()> action;
};

class MenuSystem {
public:
    void addItem(const std::string& title, std::function<void()> action);
    void display();
    void run();
    
private:
    std::vector<MenuItem> items;
};