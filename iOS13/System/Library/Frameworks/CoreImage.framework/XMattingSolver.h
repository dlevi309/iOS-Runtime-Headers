/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture, MattingFilter;
#import <CoreImage/CoreImage-Structs.h>
@class MPSImageThresholdBinary, MPSImageThresholdBinaryInverse, MPSImageAreaMin;

@interface XMattingSolver : NSObject {

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
	SCD_Struct_XM90 _config;

}

@property (assign) SCD_Struct_XM90 config;              //@synthesize config=_config - In the implementation block
-(SCD_Struct_XM90)config;
-(void)setConfig:(SCD_Struct_XM90)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(int)allocateResources:(SCD_Struct_XM90)arg1 ;
-(int)enqueueSolveOn:(id)arg1 constraints:(id)arg2 colorGuide:(id)arg3 extraGuide:(id)arg4 inputTexture:(id)arg5 outputTexture:(id)arg6 ;
-(void)releaseResources;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(int)encodeConstraintsOn:(id)arg1 segmentation:(id)arg2 constraints:(id)arg3 ;
-(int)encodeApplySolverConstraintsOn:(id)arg1 constraints:(id)arg2 filteredSegmentation:(id)arg3 segmentation:(id)arg4 ;
@end

