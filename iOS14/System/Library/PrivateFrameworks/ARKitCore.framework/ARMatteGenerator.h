/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture;
@class ARDualGuidedFilter;

@interface ARMatteGenerator : NSObject {

	id<MTLDevice> _device;
	ARDualGuidedFilter* _dualGuidedFilter;
	unsigned long long _uncertaintyRadius;
	unsigned long long _erodeRadius;
	unsigned long long _dilationRadius;
	float _depthScale;
	id<MTLLibrary> _mattingLibrary;
	id<MTLComputePipelineState> _mattingDual;
	id<MTLComputePipelineState> _resampleAlpha;
	id<MTLComputePipelineState> _depthDilation;
	id<MTLTexture> _overlayCoefficientsFG;
	id<MTLTexture> _overlayCoefficientsBG;
	id<MTLTexture> _cameraImageTexture;
	id<MTLTexture> _alphaTexture;
	id<MTLTexture> _occluderDepthDilatedTexture;
	id<MTLTexture> _stencilTexture;
	long long _matteResolution;
	BOOL _enableDoubleMLResolutionMatting;

}

@property (assign,nonatomic) unsigned long long uncertaintyRadius;              //@synthesize uncertaintyRadius=_uncertaintyRadius - In the implementation block
@property (assign,nonatomic) unsigned long long erosionRadius;                  //@synthesize erodeRadius=_erodeRadius - In the implementation block
@property (assign,nonatomic) unsigned long long dilationRadius;                 //@synthesize dilationRadius=_dilationRadius - In the implementation block
-(void)_commonInitWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(BOOL)arg3 ;
-(void)setUncertaintyRadius:(unsigned long long)arg1 ;
-(void)setErosionRadius:(unsigned long long)arg1 ;
-(void)setupBuffersForFrame:(id)arg1 ;
-(void)setupAlphaBufferForFrame:(id)arg1 ;
-(void)encodeCoefficients:(id)arg1 frame:(id)arg2 coefficientsForeground:(id)arg3 coefficientsBackground:(id)arg4 ;
-(void)setupDepthBufferForFrame:(id)arg1 ;
-(id)initWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg1 matteResolution:(long long)arg2 ;
-(void)setDilationRadius:(unsigned long long)arg1 ;
-(id)generateMatteFromFrame:(id)arg1 commandBuffer:(id)arg2 ;
-(id)generateDilatedDepthFromFrame:(id)arg1 commandBuffer:(id)arg2 ;
-(unsigned long long)uncertaintyRadius;
-(unsigned long long)erosionRadius;
-(unsigned long long)dilationRadius;
@end

