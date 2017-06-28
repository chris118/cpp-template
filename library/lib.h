/*
 * lib.cpp
 *
 *  Created on: xxxx
 *      Author: wangxiaopeng
 */

#ifndef LIB_H
#define LIB_H

#include <iostream>
#include <cassert>
#include <set>
#include <sys/shm.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <time.h>
#include <stdlib.h>
#include <memory>
#include <iconv.h>
#include <dlfcn.h>


using namespace std;

// #pragma GCC diagnostic ignored "-Wliteral-suffix"

namespace hh {
    
    class Lib {
    public:
        Lib();
        ~Lib();
    public:
        void helloworld(string word);
    };
} //end of namespace  hh

#endif /* LIB_H */
