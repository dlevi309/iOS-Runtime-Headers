/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
#import <UB/UB-Structs.h>
@class FigMetalContext;

@interface RegWarpHelper : NSObject {

	FigMetalContext* _metal;
	id<MTLComputePipelineState> _downsampleAndConvert10To8;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetal:(id)arg1 ;
-(int)convertInput10BitPixBuf:(CVBufferRef)arg1 downsampledOutput8BitPixBuf:(CVBufferRef)arg2 mtlCommandBuffer:(id)arg3 ;
@end

