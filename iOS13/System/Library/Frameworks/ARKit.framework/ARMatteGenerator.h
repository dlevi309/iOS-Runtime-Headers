/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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
-(unsigned long long)uncertaintyRadius;
-(void)setUncertaintyRadius:(unsigned long long)arg1 ;
-(unsigned long long)erosionRadius;
-(void)setErosionRadius:(unsigned long long)arg1 ;
-(void)_commonInitWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(BOOL)arg3 ;
-(void)setupBuffersForFrame:(id)arg1 ;
-(void)setupAlphaBufferForFrame:(id)arg1 ;
-(void)encodeCoefficients:(id)arg1 frame:(id)arg2 coefficientsForeground:(id)arg3 coefficientsBackground:(id)arg4 ;
-(void)setupDepthBufferForFrame:(id)arg1 ;
-(id)initWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg1 matteResolution:(long long)arg2 ;
-(void)setDilationRadius:(unsigned long long)arg1 ;
-(id)generateMatteFromFrame:(id)arg1 commandBuffer:(id)arg2 ;
-(id)generateDilatedDepthFromFrame:(id)arg1 commandBuffer:(id)arg2 ;
-(unsigned long long)dilationRadius;
@end

