#include "gtest/gtest.h"

#include "foo.h"

TEST(FooTest, Add) {
  Foo foo;
  EXPECT_EQ(foo.add(2, 1), 3);
}
