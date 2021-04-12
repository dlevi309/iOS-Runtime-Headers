/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLComputePipelineState;
#import <DisparityV4/DisparityV4-Structs.h>
@class FigMetalContext;

@interface DupDownscaleHalfConvert : NSObject {

	FigMetalContext* _MetalContext;
	id<MTLComputePipelineState> _KernelYUVA;
	id<MTLComputePipelineState> _KernelY;
	id<MTLComputePipelineState> _KernelDownscaleConvertAndCenterCrop;
	id<MTLComputePipelineState> _KernelDownscaleAndCrop;
	BOOL _ContextAvailable;
	BOOL _ResourcesAvailable;

}
-(void)dealloc;
-(id)initWithMetalContext:(id)arg1 ;
-(int)ReleaseResources;
-(int)GenerateImageYUVA:(CVBufferRef)arg1 outYuvaWidth:(unsigned)arg2 outYuvaHeight:(unsigned)arg3 outY:(CVBufferRef)arg4 inYuv420:(CVBufferRef)arg5 gainToApplyToOutputs:(float)arg6 waitForCompletion:(BOOL)arg7 ;
-(int)AllocateResources;
-(int)GenerateImageYUVA:(CVBufferRef)arg1 outY:(CVBufferRef)arg2 inYuv420:(CVBufferRef)arg3 waitForCompletion:(BOOL)arg4 ;
-(int)GenerateImageY:(id)arg1 inYuv420:(id)arg2 waitForCompletion:(BOOL)arg3 ;
-(int)DownscaleConvertAndCenterCrop:(CVBufferRef)arg1 outCroppedLuma:(CVBufferRef)arg2 inYuv420:(CVBufferRef)arg3 ;
-(int)DownscaleAndCrop:(float)arg1 outY:(CVBufferRef)arg2 inYuv420:(CVBufferRef)arg3 ;
@end

