#include <boost/test/unit_test.hpp>

#include "CookProgram.h"

BOOST_AUTO_TEST_SUITE(ProjectTest)

BOOST_AUTO_TEST_CASE(CookProgram_getPower) {
        const int power = 666;
        CookProgram* obj = new CookProgram(power);
        BOOST_CHECK_EQUAL(obj->getPower(), power);
}

BOOST_AUTO_TEST_SUITE_END()
