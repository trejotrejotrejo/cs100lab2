#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, OneLetter) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "a";
	EXPECT_EQ("a", echo(2, test_val));
}

TEST(EchoTest, HelloMyNameIs) {
	char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "my"; test_val[3] = "name"; test_val[4] = "is"; test_val[5] = "alex";
	EXPECT_EQ("hello my name is alex", echo(6, test_val));
}

TEST(EchoTest, Numbers) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "0123456789";
	EXPECT_EQ("0123456789", echo(2, test_val));
} 

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
