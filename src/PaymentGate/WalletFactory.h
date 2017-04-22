// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "IWallet.h"
#include "INode.h"
#include <System/Dispatcher.h>

#include <string>
#include <memory>

namespace CryptoNote {
class Currency;
}

namespace PaymentService {

class WalletFactory {
public:
  static CryptoNote::IWallet* createWallet(const CryptoNote::Currency& currency, CryptoNote::INode& node, System::Dispatcher& dispatcher);
private:
  WalletFactory();
  ~WalletFactory();

  static WalletFactory factory;
};

} //namespace PaymentService
