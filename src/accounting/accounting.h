#pragma once
#include "../core/helpers.h"

struct Transaction {
    std::string id;
    Date date;
    std::string description;
    double amount;
    std::string account;
};

class AccountingModule {
public:
    void addTransaction();
    void viewTransactions();
    void generateReport();
    
private:
    std::vector<Transaction> transactions;
};