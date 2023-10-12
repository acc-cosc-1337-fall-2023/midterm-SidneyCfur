#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test 02"){
	REQUIRE((get_cookie_ingredients(48)[0] == 1.5 && get_cookie_ingredients(48)[1] == 1 && get_cookie_ingredients(48)[2] == 2.75));
	REQUIRE((get_cookie_ingredients(96)[0] == 3 && get_cookie_ingredients(96)[1] == 2 && get_cookie_ingredients(96)[2] == 5.5));
	REQUIRE((get_cookie_ingredients(24)[0] == .75 && get_cookie_ingredients(24)[1] == 0.5 && get_cookie_ingredients(24)[2] == 1.375));
}
