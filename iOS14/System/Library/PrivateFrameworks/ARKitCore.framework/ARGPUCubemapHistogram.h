/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUCubemapHistogram : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapHistogramPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(ARLabHistogram)colorHistogramForCubemap:(id)arg1 ;
@end

