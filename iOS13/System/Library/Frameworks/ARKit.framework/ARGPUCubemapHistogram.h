/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARGPUCubemapHistogram : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapHistogramPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(ARLabHistogram)colorHistogramForCubemap:(id)arg1 ;
@end

