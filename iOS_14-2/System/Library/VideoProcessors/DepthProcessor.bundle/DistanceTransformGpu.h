/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigMetalContext;

@interface DistanceTransformGpu : NSObject {

	FigMetalContext* _metalCtx;
	id<MTLComputePipelineState> _dtInitKernel;
	id<MTLComputePipelineState> _dtVerticalKernel;
	id<MTLComputePipelineState> _dtHorizontalKernel;
	id<MTLTexture> _tempTexture;
	id<MTLTexture> _maskTexture;
	id<MTLBuffer> _dtScratchBuffers[2];
	unsigned long long _width;
	unsigned long long _height;

}
-(id)init;
-(int)allocateResources;
-(void)releaseResources;
-(void)dealloc;
-(int)computeDistanceWithBuffer:(CVBufferRef)arg1 distance:(CVBufferRef)arg2 waitForScheduled:(BOOL)arg3 ;
-(id)initWithParameters:(SCD_Struct_Fi17*)arg1 metalContext:(id)arg2 ;
-(int)computeDistanceWithTexture:(id)arg1 distance:(id)arg2 waitForScheduled:(BOOL)arg3 ;
-(int)createDTKernels;
@end

