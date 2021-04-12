/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/

#import <MattingV1/MattingV1-Structs.h>
#import <MattingV1/MattingFilter.h>

@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;
@class XMattingBoxTensorFilter, NSArray, MattingBoxTensorFilter;

@interface MattingRGBFilter : NSObject <MattingFilter> {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLTexture> _guideStack;
	id<MTLTexture> _guideStackTexture2DView;
	id<MTLTexture> _alphaStack;
	id<MTLTexture> _alphaStackTexture2DView;
	id<MTLTexture> _mean_I;
	id<MTLTexture> _mean_alpha;
	NSArray* _var_I;
	id<MTLTexture> _coefficients;
	id<MTLTexture> _coefficientsTexture2DView;
	id<MTLTexture> _constraints;
	id<MTLTexture> _constraintsTexture2DView;
	id<MTLComputePipelineState> _nearestNeighborDownsamplingKernel;
	id<MTLComputePipelineState> _computeInverted3DGuideCovarianceMatrixKernel;
	id<MTLComputePipelineState> _compute3DCoefficientsKernel;
	id<MTLComputePipelineState> _applyCoefficientsKernel;
	id<MTLComputePipelineState> _applyCoefficientsSamplingKernel;
	BOOL stateComputed;
	BOOL coefficientsComputed;
	MattingBoxTensorFilter* boxTensorFilter;
	SCD_Struct_Ma2 config;

}

@property (assign,nonatomic) SCD_Struct_Ma2 config; 
@property (nonatomic,retain) MattingBoxTensorFilter * boxTensorFilter; 
@property (nonatomic,readonly) BOOL stateComputed; 
@property (nonatomic,readonly) BOOL coefficientsComputed; 
-(SCD_Struct_Ma2)config;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(void)setBoxTensorFilter:(MattingBoxTensorFilter *)arg1 ;
-(int)encodeStepOn:(id)arg1 ;
-(void)encodeNearestNeighborDownSamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 ;
-(int)encodeCoefficientsOn:(id)arg1 guideStack:(id)arg2 alphaStack:(id)arg3 mean_I:(id)arg4 var_I:(id)arg5 coefficients:(id)arg6 ;
-(BOOL)coefficientsComputed;
-(int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5 ;
-(MattingBoxTensorFilter *)boxTensorFilter;
-(int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5 ;
-(BOOL)stateComputed;
-(int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5 ;
-(id)initWithMetalContext:(id)arg1 ;
-(void)setConfig:(SCD_Struct_Ma2)arg1 ;
-(void)releaseResources;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(void)dealloc;
-(int)allocateResources:(SCD_Struct_Ma2)arg1 ;
@end

