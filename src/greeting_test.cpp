#include <greeting.hpp>

#include <userver/utest/utest.hpp>

using TochkaVhoda::UserType;

UTEST(SayHelloTo, Basic) {
    EXPECT_EQ(TochkaVhoda::SayHelloTo("Developer", UserType::kFirstTime), "Hello, Developer!\n");
    EXPECT_EQ(TochkaVhoda::SayHelloTo({}, UserType::kFirstTime), "Hello, unknown user!\n");

    EXPECT_EQ(TochkaVhoda::SayHelloTo("Developer", UserType::kKnown), "Hi again, Developer!\n");
    EXPECT_EQ(TochkaVhoda::SayHelloTo({}, UserType::kKnown), "Hi again, unknown user!\n");
}