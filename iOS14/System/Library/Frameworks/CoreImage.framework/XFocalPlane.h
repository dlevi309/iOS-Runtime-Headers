/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLBuffer;
#import <CoreImage/CoreImage-Structs.h>
@interface XFocalPlane : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLComputePipelineState> _disparityRefinementPreprocessingKernel;
	id<MTLComputePipelineState> _minMax0_kernel;
	id<MTLComputePipelineState> _minMax1_kernel;
	id<MTLComputePipelineState> _minMax2_kernel;
	id<MTLComputePipelineState> _calc_kernel;
	id<MTLBuffer> _minMaxAtomic_buf;
	id<MTLBuffer> _minMaxResult_buf;
	id<MTLBuffer> _zeroShiftResult_buf;
	SCD_Struct_XF70 _config;

}

@property (assign) SCD_Struct_XF70 config;                           //@synthesize config=_config - In the implementation block
@property (readonly) id<MTLBuffer> minMaxAtomic_buf;                 //@synthesize minMaxAtomic_buf=_minMaxAtomic_buf - In the implementation block
@property (readonly) id<MTLBuffer> minMaxResult_buf;                 //@synthesize minMaxResult_buf=_minMaxResult_buf - In the implementation block
@property (readonly) id<MTLBuffer> zeroShiftResult_buf;              //@synthesize zeroShiftResult_buf=_zeroShiftResult_buf - In the implementation block
-(SCD_Struct_XF70)config;
-(int)encodeDisparityRefinementPreprocessingOn:(id)arg1 alphaTexture:(id)arg2 inputDisparityTexture:(id)arg3 outputDisparityTexture:(id)arg4 configuration:(SCD_Struct_XF71)arg5 ;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(int)encodeFocalPlaneCalcOn:(id)arg1 disparityTexture:(id)arg2 ;
-(int)encodeMinMaxOn:(id)arg1 inputTexture:(id)arg2 ;
-(id<MTLBuffer>)minMaxAtomic_buf;
-(id<MTLBuffer>)minMaxResult_buf;
-(id<MTLBuffer>)zeroShiftResult_buf;
-(void)setConfig:(SCD_Struct_XF70)arg1 ;
-(int)allocateResources;
-(void)releaseResources;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(void)dealloc;
@end

