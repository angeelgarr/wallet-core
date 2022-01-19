// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWEthereumClassicCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeClassic));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x66004165d3901819dc22e568931591d2e4287bda54995f4ce2701a12016f5997"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeClassic, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x9eab4b0fc468a7f5d46228bf5a76cb52370d068d"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeClassic, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeClassic));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeClassic));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeClassic), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeClassic));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeClassic));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeClassic));
    assertStringsEqual(symbol, "ETC");
    assertStringsEqual(txUrl, "https://blockscout.com/etc/mainnet/tx/0x66004165d3901819dc22e568931591d2e4287bda54995f4ce2701a12016f5997");
    assertStringsEqual(accUrl, "https://blockscout.com/etc/mainnet/address/0x9eab4b0fc468a7f5d46228bf5a76cb52370d068d");
    assertStringsEqual(id, "classic");
    assertStringsEqual(name, "Ethereum Classic");
}
