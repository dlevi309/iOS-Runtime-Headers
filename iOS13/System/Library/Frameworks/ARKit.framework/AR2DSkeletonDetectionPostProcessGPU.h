/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLBuffer;
#import <ARKit/ARKit-Structs.h>
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
-(float*)process:(float*)arg1 counter:(unsigned*)arg2 shape:(CGSize)arg3 ;
-(void)_copyToInputAsFloat16:(float*)arg1 shape:(CGSize)arg2 ;
@end

