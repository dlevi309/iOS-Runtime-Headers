/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/MattingFilter.h>

@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;
@class XMattingBoxTensorFilter, NSArray;

@interface XMattingRGBDFilter : NSObject <MattingFilter> {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLTexture> _guideStack;
	id<MTLTexture> _guideStackTexture2DView;
	id<MTLTexture> _alphaStack;
	id<MTLTexture> _alphaStackTexture2DView;
	id<MTLTexture> _mean_I;
	id<MTLTexture> _mean_alpha;
	NSArray* _var_I;
	NSArray* _coefficients;
	NSArray* _coefficientsTexture2DView;
	id<MTLTexture> _constraints;
	id<MTLTexture> _constraintsTexture2DView;
	id<MTLComputePipelineState> _nearestNeighborDownsamplingKernel;
	id<MTLComputePipelineState> _halfToAlphaBLKernel;
	id<MTLComputePipelineState> _computeInverted4DGuideCovarianceMatrixKernel;
	id<MTLComputePipelineState> _compute4DCoefficientsKernel;
	id<MTLComputePipelineState> _applyDepthAwareCoefficientsKernel;
	id<MTLComputePipelineState> _applyDepthAwareCoefficientsNoConstraintsKernel;
	id<MTLComputePipelineState> _applyDepthAwareCoefficientsSamplingKernel;
	id<MTLComputePipelineState> _applyDepthAwareCoefficientsSamplingNoConstraintsKernel;
	BOOL _supportsReadWriteTextures;
	id<MTLTexture> _tmp_RGBA;
	BOOL stateComputed;
	BOOL coefficientsComputed;
	XMattingBoxTensorFilter* boxTensorFilter;
	SCD_Struct_XM89 config;

}

@property (assign) SCD_Struct_XM89 config; 
@property (retain) XMattingBoxTensorFilter * boxTensorFilter; 
@property (readonly) BOOL stateComputed; 
@property (readonly) BOOL coefficientsComputed; 
-(void)dealloc;
-(SCD_Struct_XM89)config;
-(void)setConfig:(SCD_Struct_XM89)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(int)allocateResources:(SCD_Struct_XM89)arg1 ;
-(void)releaseResources;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(int)encodeNearestNeighborDownSamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 ;
-(int)encodeDisparityToAlphaOn:(id)arg1 disparityTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(int)encodeCoefficientsOn:(id)arg1 guideStack:(id)arg2 alphaStack:(id)arg3 mean_I:(id)arg4 var_I:(id)arg5 coefficients:(id)arg6 ;
-(int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5 ;
-(int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5 ;
-(int)encodeStepOn:(id)arg1 ;
-(int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5 ;
-(XMattingBoxTensorFilter *)boxTensorFilter;
-(void)setBoxTensorFilter:(XMattingBoxTensorFilter *)arg1 ;
-(BOOL)stateComputed;
-(BOOL)coefficientsComputed;
-(void)encodePushOn:(id)arg1 textureArray:(id)arg2 texture:(id)arg3 ;
@end

