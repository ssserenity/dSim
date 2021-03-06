//
//  PhysEngine.h
//  test
//
//  Created by XuHao on 14-4-15.
//  Copyright (c) 2014年 xuhao. All rights reserved.
//

#ifndef __test__PhysEngine__
#define __test__PhysEngine__

#include <iostream>
#define NDEBUG
#include "PxPhysicsAPI.h"
#include "phys_model.h"

using namespace physx;

/// \brief base physics engine
///
/// use PhysX
class PhysEngine
{
    /// \brief make random value
    /// \return a random value from 0 to 1
    float random()
    {
        float i=rand()%1000; 
        return i/1000.0f;
    }
    
public:
    PxDefaultErrorCallback gDefaultErrorCallback;
    PxDefaultAllocator gDefaultAllocatorCallback;
    physx::PxPhysics *mPhysics; ///>Physics environment for PhysX
    
    PxSimulationFilterShader gDefaultFilterShader=PxDefaultSimulationFilterShader;
    PxScene* mScene; ///>Physics Scene for Physics
    void *mScratchBlock;
    physx::PxFoundation * mFoundation;
    /// \brief init PhysX Engine
    /// \return  return 0 for success
    int init();
    
    /// \brief default PhysX environmet , come with an Plane
    /// on z = 0
    PhysEngine();
  
    PxSceneDesc *sceneDesc;
    
    /// add a demo of xmodel to Engine
    xmodel* addDemo();
    
    /// \brief run simulation for given time with per second 10000 steps
    /// \param time given time
    /// \return  return 0 for success
    virtual int sim(double time);
    /// \brief run the pre step of simulation
    virtual void pre_sim() = 0;
    
};
#endif /* defined(__test__PhysEngine__) */
