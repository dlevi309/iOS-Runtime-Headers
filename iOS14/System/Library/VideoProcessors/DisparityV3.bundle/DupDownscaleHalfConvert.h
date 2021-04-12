/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


@protocol MTLComputePipelineState;
#import <DisparityV3/DisparityV3-Structs.h>
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
-(id)initWithMetalContext:(id)arg1 ;
-(void)dealloc;
-(int)ReleaseResources;
-(int)GenerateImageYUVA:(CVBufferRef)arg1 outYuvaWidth:(unsigned)arg2 outYuvaHeight:(unsigned)arg3 outY:(CVBufferRef)arg4 inYuv420:(CVBufferRef)arg5 gainToApplyToOutputs:(float)arg6 waitForCompletion:(BOOL)arg7 ;
-(int)AllocateResources;
-(int)GenerateImageYUVA:(CVBufferRef)arg1 outY:(CVBufferRef)arg2 inYuv420:(CVBufferRef)arg3 waitForCompletion:(BOOL)arg4 ;
-(int)GenerateImageY:(id)arg1 inYuv420:(id)arg2 waitForCompletion:(BOOL)arg3 ;
-(int)DownscaleConvertAndCenterCrop:(CVBufferRef)arg1 outCroppedLuma:(CVBufferRef)arg2 inYuv420:(CVBufferRef)arg3 ;
-(int)DownscaleAndCrop:(float)arg1 outY:(CVBufferRef)arg2 inYuv420:(CVBufferRef)arg3 ;
@end

