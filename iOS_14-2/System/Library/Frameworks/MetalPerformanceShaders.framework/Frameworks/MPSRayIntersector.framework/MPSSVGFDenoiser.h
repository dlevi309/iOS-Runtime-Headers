/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
*/


@protocol MTLTexture, MPSSVGFTextureAllocator;
@class MPSSVGF;

@interface MPSSVGFDenoiser : NSObject {

	id<MTLTexture> _prevFrameCountTexture;
	id<MTLTexture> _prevMomentsTexture;
	id<MTLTexture> _prevMomentsTexture2;
	id<MTLTexture> _prevTexture;
	id<MTLTexture> _prevTexture2;
	unsigned long long _bilateralFilterIterations;
	BOOL _clear;
	MPSSVGF* _svgf;
	id<MPSSVGFTextureAllocator> _textureAllocator;

}

@property (nonatomic,readonly) MPSSVGF * svgf;                                            //@synthesize svgf=_svgf - In the implementation block
@property (nonatomic,readonly) id<MPSSVGFTextureAllocator> textureAllocator;              //@synthesize textureAllocator=_textureAllocator - In the implementation block
@property (assign,nonatomic) unsigned long long bilateralFilterIterations; 
-(id)initWithDevice:(id)arg1 ;
-(MPSSVGF *)svgf;
-(void)dealloc;
-(id)initWithSVGF:(id)arg1 textureAllocator:(id)arg2 ;
-(void)releaseTemporaryTextures;
-(void)encodeClearToCommandBuffer:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id*)arg3 sourceTexture2:(id)arg4 destinationTexture2:(id*)arg5 motionVectorTexture:(id)arg6 depthNormalTexture:(id)arg7 previousDepthNormalTexture:(id)arg8 ;
-(unsigned long long)bilateralFilterIterations;
-(void)setBilateralFilterIterations:(unsigned long long)arg1 ;
-(void)clearTemporalHistory;
-(id)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 motionVectorTexture:(id)arg3 depthNormalTexture:(id)arg4 previousDepthNormalTexture:(id)arg5 ;
-(id<MPSSVGFTextureAllocator>)textureAllocator;
@end

