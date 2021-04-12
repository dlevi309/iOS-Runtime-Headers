/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <DisparityV4/DisparityV4-Structs.h>
@class FigMetalContext;

@interface PyrGPU : NSObject {

	FigMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[2];
	id<MTLComputePipelineState> _KernelDownscaleImage1[3][3];
	CGSize _input_res;
	CGSize _max_input_res;
	SCD_Struct_Py12 _pyrInfoArray[32];
	CGSize _pyr_int_dims[32];
	CGSize _pyr_real_dims[32];
	_CVBuffer* _pyr_pxbuf[32];
	id<MTLTexture> _pyr_tex[32];
	id<MTLTexture> _pyr_u32_alias_tex[32];
	_CVBuffer* _antialiasing_pxbuf[2];
	BOOL _isValid;
	BOOL _useAntialiasingForDownsamplingToFinestResolution;
	int _countScales;

}

@property (nonatomic,readonly) BOOL isValid;                                                     //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) int countScales;                                                  //@synthesize countScales=_countScales - In the implementation block
@property (nonatomic,readonly) CGSize* pyramidDimensions; 
@property (nonatomic,readonly) CGSize* realPyramidDimensions; 
@property (assign,nonatomic) BOOL useAntialiasingForDownsamplingToFinestResolution;              //@synthesize useAntialiasingForDownsamplingToFinestResolution=_useAntialiasingForDownsamplingToFinestResolution - In the implementation block
+(SCD_Struct_Py13)_determineFilterFromResolution:(CGSize)arg1 toResolution:(CGSize)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
-(void)releaseResources;
-(void)_setupPipelines;
-(id)initWithMetalContext:(id)arg1 ;
-(int)_createTextureViewsFromResolution:(CGSize)arg1 ;
-(int)_downscaleAntialiasingWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 in_ref_res:(CGSize)arg4 out_ref_res:(CGSize)arg5 ;
-(int)_downscale2XEqualWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(int)_doRPDDownscale1WithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(int)_downscale2XBelowWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(CGSize*)realPyramidDimensions;
-(CGSize*)pyramidDimensions;
-(int)allocateResourcesWithMaxInputResolution:(CGSize)arg1 ;
-(int)populatePyramidSchemeFromReference:(id)arg1 inputResolution:(CGSize)arg2 ;
-(int)populatePyramidSchemeFromResolution:(CGSize)arg1 toResolution:(CGSize)arg2 scalingFactor:(float)arg3 scales:(int)arg4 allowSuccessiveDownscale2x:(BOOL)arg5 ;
-(int)doImagePyramidWithCommandBuffer:(id)arg1 in_tex:(id)arg2 ;
-(id)textureRGBAU8AtScale:(int)arg1 ;
-(id)textureU32AliasAtScale:(int)arg1 ;
-(int)countScales;
-(BOOL)useAntialiasingForDownsamplingToFinestResolution;
-(void)setUseAntialiasingForDownsamplingToFinestResolution:(BOOL)arg1 ;
@end

