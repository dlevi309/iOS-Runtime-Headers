/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState;
@class FigMetalContext;

@interface ANEDepthScalingProcessor : NSObject {

	id<MTLComputePipelineState> _aneScalerComputePipelinesState;
	FigMetalContext* _mtlContext;

}
-(int)_compileShaders;
-(id)initWithMetalContext:(id)arg1 ;
-(int)scaleFromDepth:(id)arg1 toDisparity:(id)arg2 ;
@end

