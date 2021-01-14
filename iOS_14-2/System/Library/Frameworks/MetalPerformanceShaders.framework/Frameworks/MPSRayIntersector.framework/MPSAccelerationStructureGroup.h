/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/


#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
@interface MPSAccelerationStructureGroup : NSObject {

	MPSBVHGroup* _bvhGroup;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)dealloc;
-(MPSBVHGroup*)bvhGroup;
-(id)initWithDevice:(id)arg1 storageMode:(unsigned long long)arg2 ;
@end

