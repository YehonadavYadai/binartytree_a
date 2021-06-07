#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
using namespace std;

#include "BinaryTree.hpp"
using namespace ariel;

TEST_CASE("int Binary tree"){
    BinaryTree<char> btc;
    CHECK_NOTHROW(btc.add_root('a'));
    CHECK_NOTHROW(btc.add_root('c'));
    CHECK_NOTHROW(btc.add_left('a', 'v'));
    CHECK_NOTHROW(btc.add_left('c', 'z'));
    CHECK_NOTHROW(btc.add_right('z', 'h'));
    CHECK_THROWS(btc.add_left(':',',')); 
    CHECK_THROWS(btc.add_left('f','r')); 
    CHECK_THROWS(btc.add_left('j','k')); 
    CHECK_THROWS(btc.add_left('l','r'));
     BinaryTree<int> btInt;
    CHECK_NOTHROW(btInt.add_root(5));
    CHECK_NOTHROW(btInt.add_right(5,3));
    CHECK_NOTHROW(btInt.add_right(3,7));
    CHECK_NOTHROW(btInt.add_left(7,6));
    CHECK_NOTHROW(btInt.add_right(6, 8));
    CHECK_NOTHROW(btInt.add_left(8, 4));
    CHECK_NOTHROW(btInt.add_right(4,240));
    CHECK_NOTHROW(btInt.add_right(240,45));
    CHECK_NOTHROW(btInt.add_left(45,66));
    CHECK_NOTHROW(btInt.add_right(66, 88));
    CHECK_NOTHROW(btInt.add_left(88, 477));



    
}