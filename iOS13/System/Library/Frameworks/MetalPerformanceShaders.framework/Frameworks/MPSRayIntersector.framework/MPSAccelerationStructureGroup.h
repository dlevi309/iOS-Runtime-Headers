/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/


#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
@interface MPSAccelerationStructureGroup : NSObject {

	MPSBVHGroup* _bvhGroup;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
-(MPSBVHGroup*)bvhGroup;
-(id)initWithDevice:(id)arg1 storageMode:(unsigned long long)arg2 ;
@end

