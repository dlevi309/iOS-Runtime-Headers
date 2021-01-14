/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol OS_dispatch_queue;
#import <ARKitCore/ARKitCore-Structs.h>
@class ARGPUCubemapProjector, ARGPUCubemapConverter, ARGPUCubemapHistogram, ARGPUWarper, NSObject;

@interface ARCubemapGenerator : NSObject {

	ARGPUCubemapProjector* _cubemapProjector;
	ARGPUCubemapConverter* _cubemapConverter;
	ARGPUCubemapHistogram* _cubemapHistogram;
	ARGPUWarper* _gpuWarper;
	NSObject*<OS_dispatch_queue> _cubemapQueue;

}
-(id)init;
-(void)cubemapWithTransform:(SCD_Struct_AR1)arg1 extent:(ARLabHistogram)arg2 lastHistogram:(id)arg3 fromMeshes:(CVBufferRef)arg4 cameraImage:(SCD_Struct_AR1)arg5 cameraTransform:(SCD_Struct_AR25)arg6 cameraIntrinsics:(double)arg7 cameraExposure:(float)arg8 cameraExposureOffset:(/*^block*/id)arg9 ;
@end

