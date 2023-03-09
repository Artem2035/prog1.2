#ifndef KVADRAT_H
#define KVADRAT_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "kvadrat.h"
}

TEST(kvadratTest, correctness) {

    double x1,x2;
    x1 = x2 = 0;
    kvadrat(1,3,-4,&x1,&x2);
    ASSERT_EQ(x1+x2, -3);
    kvadrat(1,-4,4,&x1,&x2);
    ASSERT_EQ(x1-x2, 0);
    ASSERT_EQ(kvadrat(1,-5,9,&x1,&x2), 1);
}

TEST(kvadratTest, num0) {
    double x1,x2;
    ASSERT_EQ(kvadrat(0,0,0,&x1,&x2), 3);
    ASSERT_EQ(kvadrat(0,0,1,&x1,&x2), 1);
    ASSERT_EQ(kvadrat(0,1,0,&x1,&x2), 2);
    ASSERT_EQ(kvadrat(1,0,0,&x1,&x2), 2);
}
#endif // KVADRAT_H
