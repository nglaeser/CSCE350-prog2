/***************************************************************************
 * File: Transaction.h
 * Author: Noemi Glaeser
 * Function: Class to manage transactions
 * Input: 
 * Output: 
 * Created: 4-Dec-2017
 * Last Modified: 4-Dec-2017
 ***************************************************************************/
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "../cpp/glaeser_common.h"

class Transaction 
{
  private:
    std::string sender;
    std::string recipient;
    std::string amount;

  public:
    Transaction();
    Transaction(std::string str);
    Transaction(const Transaction &); //copy constructor
    virtual ~Transaction(); //destructor

    bool isValid();
    std::string toString();
    std::string getSender() const;
    std::string getRecipient() const;
    std::string getAmount() const;
};

#endif
