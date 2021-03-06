#pragma once

#include "GpCryptoHDKeyStorage.hpp"

namespace GPlatform {

class GPCRYPTOCORE_API GpCryptoHDKeyGen
{
public:
    CLASS_REMOVE_CTRS(GpCryptoHDKeyGen)

    using SchemeTypeT   = GpCryptoHDSchemeType;
    using SchemeTypeTE  = SchemeTypeT::EnumT;

public:
    static GpCryptoHDKeyStorage     SMasterKeyPairFromSeed  (GpRawPtrByteR          aSeed,
                                                             const SchemeTypeTE     aSchemeType);

    static GpCryptoHDKeyStorage     SChildKeyPair           (const GpCryptoHDKeyStorage&    aParentHDKeyStorage,
                                                             const count_t                  aChildId);
};

}//GPlatform
