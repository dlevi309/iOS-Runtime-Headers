/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


@protocol MTLComputePipelineState, MTLBuffer;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigMetalContext;

@interface DepthProcUtilitiesMetal : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _kernelPreprocessData;
	id<MTLComputePipelineState> _kernelPostErosion;
	id<MTLComputePipelineState> _kernelGetFarDistanceMin;
	id<MTLComputePipelineState> _kernelSetFarDistance;
	id<MTLComputePipelineState> _kernelPostFbs;
	id<MTLComputePipelineState> _kernelPrepareFbsPart1;
	id<MTLComputePipelineState> _kernelPrepareFbsPart2;
	id<MTLComputePipelineState> _kernelDisparityDataOverride;
	id<MTLComputePipelineState> _kernelmakeForegroundMask;
	id<MTLComputePipelineState> _kernelBuildFindMask;
	id<MTLBuffer> _setFarDistFurthestDisparityArray;

}
-(id)initWithMetalContext:(id)arg1 ;
-(int)allocateResources;
-(void)releaseResources;
-(void)dealloc;
-(int)preprocessData:(float)arg1 inputDisparity:(id)arg2 outputDisparity:(id)arg3 outputConfidence:(id)arg4 ;
-(int)makeForegroundMask:(id)arg1 bodyProbabilityMap:(id)arg2 validForegroundMask:(id)arg3 ;
-(int)postErosion:(id)arg1 outputConfidence:(id)arg2 outputDisparity:(id)arg3 ;
-(int)setFarWithDistance:(SCD_Struct_Fi23)arg1 inputDistanceTransformMap:(id)arg2 inputLandmarkProcessingDisparity:(id)arg3 inputBodyProbabilityMap:(id)arg4 inoutConfidenceMap:(id)arg5 outputDistanceTransformDisparity:(id)arg6 ;
-(int)buildFindMask:(id)arg1 value:(float)arg2 outputBuffer:(id)arg3 ;
-(int)disparityDataOverrideOnGpu:(id)arg1 To:(id)arg2 ;
-(id)prepareForFbs:(id)arg1 toF32:(id)arg2 confidenceInF16:(id)arg3 confidenceOutF32:(id)arg4 ;
-(int)postFbs:(id)arg1 toF16:(id)arg2 prepareBuffer:(id)arg3 ;
@end

