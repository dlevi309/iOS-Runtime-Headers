/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol OS_dispatch_queue;
#import <ARKit/ARKit-Structs.h>
@class ARGPUCubemapProjector, ARGPUCubemapConverter, ARGPUCubemapHistogram, ARGPUWarper, NSObject;

@interface ARCubemapGenerator : NSObject {

	ARGPUCubemapProjector* _cubemapProjector;
	ARGPUCubemapConverter* _cubemapConverter;
	ARGPUCubemapHistogram* _cubemapHistogram;
	ARGPUWarper* _gpuWarper;
	NSObject*<OS_dispatch_queue> _cubemapQueue;

}
-(id)init;
-(void)cubemapWithTransform:(SCD_Struct_AR1)arg1 extent:(ARLabHistogram)arg2 lastHistogram:(vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)arg3 fromPlanes:(CVBufferRef)arg4 cameraImage:(SCD_Struct_AR1)arg5 cameraTransform:(SCD_Struct_AR24)arg6 cameraIntrinsics:(double)arg7 cameraExposure:(float)arg8 cameraExposureOffset:(/*^block*/id)arg9 ;
@end

