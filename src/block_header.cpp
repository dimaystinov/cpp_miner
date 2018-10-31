#include <block_header.hpp>

void BlockHeader::serialize(unsigned char serializedHeader[BLOCK_HEADER_SIZE_BYTES])
{

    std::copy(nVersion.begin(), nVersion.begin() + nVersion.size(), serializedHeader);
    std::copy(hashPrevBlock.begin(), hashPrevBlock.begin() + hashPrevBlock.size(), serializedHeader + nVersion.size());
    std::copy(merkleRoot.begin(), merkleRoot.begin() + merkleRoot.size(), serializedHeader + nVersion.size() + hashPrevBlock.size());
    std::copy(time.begin(), time.begin() + time.size(), serializedHeader + nVersion.size() + hashPrevBlock.size() + merkleRoot.size());
    std::copy(nBits.begin(), nBits.begin() + nBits.size(), serializedHeader + nVersion.size() + hashPrevBlock.size() + merkleRoot.size() + time.size());
    std::copy(nonce.begin(), nonce.begin() + nonce.size(), serializedHeader + nVersion.size() + hashPrevBlock.size() + merkleRoot.size() + time.size() + nBits.size());

}

