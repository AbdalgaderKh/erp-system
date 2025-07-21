#pragma once
#include <string>
#include <vector>

class ERPSystem {
public:
    void initialize();
    void run();
    void shutdown();
    
private:
    bool running = true;
};