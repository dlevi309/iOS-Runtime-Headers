/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState, MTLDevice, MTLCommandQueue, MTLCommandBuffer, MTLTexture;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class slicMetalParameters, FigMetalContext;

@interface SLICMetal : NSObject {

	id<MTLComputePipelineState> _slicComputePipelinesStates[5];
	slicMetalParameters* _parameters;
	id<MTLDevice> _mtlDevice;
	id<MTLCommandQueue> _mtlCommandQueue;
	id<MTLCommandBuffer> _mtlCommandBuffer;
	FigMetalContext* _mtlContext;
	id<MTLTexture> _slicTextures[9];
	int _no_grid_per_center;

}
-(int)allocateResources;
-(void)releaseResources;
-(void)dealloc;
-(int)_slicCompileShadersWithLibrary:(id)arg1 ;
-(id)_createTextureOfSize:(CGSize)arg1 withFormat:(unsigned long long)arg2 ;
-(void)_newCommandBuffer;
-(int)_slicInitClusterCenters;
-(int)_slicFindCenterAssociation:(SCD_Struct_SL1*)arg1 ;
-(int)_slicUpdateClusterCenter;
-(int)_slicFinalReductionResult;
-(int)_slicEnsureConnectivity;
-(void)_commitNoWait;
-(void)_swapTexturesAtIndex:(int)arg1 and:(int)arg2 ;
-(id)initWithParameters:(id)arg1 andMetalContext:(id)arg2 ;
-(int)processSLICToOutputSPixelCentersIdsAndCounts:(id)arg1 outputSPixelColor:(id)arg2 outputIndexes:(id)arg3 inputImage:(id)arg4 parameters:(SCD_Struct_SL1*)arg5 ;
-(void)_commitAndWait;
-(void)_waitForCompletion;
@end

