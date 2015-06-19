#include "CRC/CRC16IBM.h"
#include "catch.hh"
#include "test_crc.h"

TEST_CASE("CRC16IBM patch appending works", "[crc16]")
{
    test_appending(std::unique_ptr<CRC>(new CRC16IBM), 0xdead);
}