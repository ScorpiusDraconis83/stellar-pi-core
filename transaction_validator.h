#ifndef TRANSACTION_VALIDATOR_H
#define TRANSACTION_VALIDATOR_H

#include "transaction.h"
#include "pi_value_policy.h"

class TransactionValidator {
public:
    bool validate(const Transaction& tx) const;
    void assignBadge(Transaction& tx) const;
};

#endif // TRANSACTION_VALIDATOR_H
