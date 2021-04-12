/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/


@protocol MTLDevice, MTLComputePipelineState, MTLBuffer;
#import <MattingV2/MattingV2-Structs.h>
@class FigMetalContext;

@interface FocalPlaneV2 : NSObject {

	id<MTLDevice> _device;
	id<MTLComputePipelineState> _disparityRefinementPreprocessingKernel;
	id<MTLComputePipelineState> _minMax0_kernel;
	id<MTLComputePipelineState> _minMax1_kernel;
	id<MTLComputePipelineState> _minMax2_kernel;
	id<MTLComputePipelineState> _calc_kernel;
	FigMetalContext* _metalContext;
	id<MTLBuffer> _minMaxAtomic_buf;
	id<MTLBuffer> _minMaxResult_buf;
	id<MTLBuffer> _zeroShiftResult_buf;
	SCD_Struct_Fo1 _config;

}

@property (assign,nonatomic) SCD_Struct_Fo1 config;                            //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> minMaxAtomic_buf;                 //@synthesize minMaxAtomic_buf=_minMaxAtomic_buf - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> minMaxResult_buf;                 //@synthesize minMaxResult_buf=_minMaxResult_buf - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> zeroShiftResult_buf;              //@synthesize zeroShiftResult_buf=_zeroShiftResult_buf - In the implementation block
-(void)dealloc;
-(SCD_Struct_Fo1)config;
-(void)setConfig:(SCD_Struct_Fo1)arg1 ;
-(int)allocateResources;
-(int)encodeDisparityRefinementPreprocessingOn:(id)arg1 alphaTexture:(id)arg2 inputDisparityTexture:(id)arg3 outputDisparityTexture:(id)arg4 configuration:(SCD_Struct_Fo2)arg5 ;
-(void)releaseResources;
-(int)encodeFocalPlaneCalcOn:(id)arg1 disparityTexture:(id)arg2 ;
-(int)encodeMinMaxOn:(id)arg1 inputTexture:(id)arg2 ;
-(id<MTLBuffer>)minMaxAtomic_buf;
-(id<MTLBuffer>)minMaxResult_buf;
-(id<MTLBuffer>)zeroShiftResult_buf;
-(id)initWithMetalContext:(id)arg1 ;
-(int)compileShaders;
@end
