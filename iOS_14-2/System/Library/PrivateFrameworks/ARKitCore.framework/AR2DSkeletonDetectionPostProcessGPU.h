/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLBuffer;
#import <ARKitCore/ARKitCore-Structs.h>
@interface AR2DSkeletonDetectionPostProcessGPU : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _pipelineStateInterpolate;
	id<MTLComputePipelineState> _pipelineStateMaxFilter;
	id<MTLBuffer> _input;
	id<MTLBuffer> _intermediate;
	id<MTLBuffer> _output;

}
-(id)init;
-(void)dealloc;
-( *)process:(IOSurfaceRef)arg1 counter:(unsigned*)arg2 shape:(CGSize)arg3 ;
@end

