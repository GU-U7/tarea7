//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "p4.h"
using namespace std;

TEST_CASE("Pregunta #4_1") {
    execute_test("test_4_1.in", pregunta_4);
}