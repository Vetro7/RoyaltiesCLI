// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2014-2017 XDN developers
// Copyright (c) 2016-2017 BXC developers
// Copyright (c) 2017 Royalties developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "CryptoNote.h"

namespace CryptoNote {
class IBlock {
public:
  virtual ~IBlock();

  virtual const Block& getBlock() const = 0;
  virtual size_t getTransactionCount() const = 0;
  virtual const Transaction& getTransaction(size_t index) const = 0;
};
}
