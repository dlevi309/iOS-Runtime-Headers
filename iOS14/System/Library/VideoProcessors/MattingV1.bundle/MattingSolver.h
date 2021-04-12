/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture, MattingFilter;
#import <MattingV1/MattingV1-Structs.h>
@class MPSImageThresholdBinary, MPSImageThresholdBinaryInverse, MPSImageAreaMin;

@interface MattingSolver : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLComputePipelineState> _applySolverConstraintsKernel;
	id<MTLComputePipelineState> _solverConstraintsKernel;
	id<MTLTexture> _tmpSegmentation;
	id<MTLTexture> _fgErodedSegmentation;
	id<MTLTexture> _bgErodedSegmentation;
	id<MattingFilter> _mattingFilter;
	MPSImageThresholdBinary* _fgThresholdFilter;
	MPSImageThresholdBinaryInverse* _bgThresholdFilter;
	MPSImageAreaMin* _erosionFilter;
	SCD_Struct_Ma0 _config;

}

@property (assign,nonatomic) SCD_Struct_Ma0 config;              //@synthesize config=_config - In the implementation block
-(SCD_Struct_Ma0)config;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(int)encodeConstraintsOn:(id)arg1 segmentation:(id)arg2 constraints:(id)arg3 ;
-(int)encodeApplySolverConstraintsOn:(id)arg1 constraints:(id)arg2 filteredSegmentation:(id)arg3 segmentation:(id)arg4 ;
-(void)setConfig:(SCD_Struct_Ma0)arg1 ;
-(void)releaseResources;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(int)allocateResources:(SCD_Struct_Ma0)arg1 ;
-(int)enqueueSolveOn:(id)arg1 constraints:(id)arg2 colorGuide:(id)arg3 extraGuide:(id)arg4 inputTexture:(id)arg5 outputTexture:(id)arg6 ;
@end

