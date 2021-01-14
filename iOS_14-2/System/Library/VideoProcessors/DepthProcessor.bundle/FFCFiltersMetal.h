/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState, MTLDevice, MTLCommandQueue, MTLCommandBuffer;
@class FigMetalContext;

@interface FFCFiltersMetal : NSObject {

	id<MTLComputePipelineState> _FFCFiltersComputePipelinesStates[2];
	id<MTLDevice> _mtlDevice;
	id<MTLCommandQueue> _mtlCommandQueue;
	id<MTLCommandBuffer> _mtlCommandBuffer;
	FigMetalContext* _mtlContext;

}
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 ;
-(void)_newCommandBuffer;
-(void)_commitNoWait;
-(int)boxFilterFrom:(id)arg1 To:(id)arg2 ;
-(int)erosionFilterFrom:(id)arg1 To:(id)arg2 ;
@end

