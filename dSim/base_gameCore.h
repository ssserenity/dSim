//
//  gameCore.h
//  test
//
//  Created by XuHao on 14-4-15.
//  Copyright (c) 2014年 xuhao. All rights reserved.
//

#ifndef __test__gameCore__
#define __test__gameCore__

#include <iostream>
#include "cocoa_gamecore.h"

namespace base_gamecore {
    
    /// Main Copter for control system
    extern stl_copter * cop;
    /// Throttle for the copter
    extern double throttle ;
    /// roll for the copter
    extern double set_yaw_rate ;
    /// pitch for the copter
    extern double set_pitch_rate ;
    /// yaw for the copter
    extern double set_roll_rate;
};



#endif /* defined(__test__gameCore__) */
