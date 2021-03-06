#ifndef BANKINGACCOUNTS_ACCOUNTFACTORYIMPL_H_
#define BANKINGACCOUNTS_ACCOUNTFACTORYIMPL_H_

#include <functional>
#include <unordered_map>
#include <vector>
#include <memory>
#include <string>
#include "IAccount.h"
#include "IAccountFactory.h"

class AccountFactoryImpl : public IAccountFactory {
 public:
  AccountFactoryImpl();

  std::shared_ptr<IAccount> make(std::string accountType) override;

  std::vector<std::string> getAccountNames() override;

 private:
  std::unordered_map<std::string, std::function<std::shared_ptr<IAccount>()>>
      makeMap;
};

#endif  // BANKINGACCOUNTS_ACCOUNTFACTORYIMPL_H_
