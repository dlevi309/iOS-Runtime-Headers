/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUICelebrationsRendering.h>

@protocol MTLDevice, MTLLibrary, MTLBuffer, MTLTexture, ARUICompositeRendering, ARUIBlurRendering;
@class ARUIAngularSparksComputeState, ARUIKineticSparksComputeState, ARUIAngularSparksRenderState, ARUIKineticSparksParticleRenderState, NSString;

@interface ARUISparksRenderer : NSObject <ARUICelebrationsRendering> {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	BOOL _prewarmed;
	id<MTLBuffer> _quadVertexBuffer;
	id<MTLBuffer> _quadIndexBuffer;
	unsigned long long _quadIndexCount;
	id<MTLTexture> _particleTexture;
	ARUIAngularSparksComputeState* _angularSparksComputeState;
	ARUIKineticSparksComputeState* _kineticSparksComputeState;
	ARUIAngularSparksRenderState* _angularSparksRenderState;
	ARUIKineticSparksParticleRenderState* _kineticSparksRenderState;
	id<ARUICompositeRendering> _compositeRenderer;
	id<ARUIBlurRendering> _blurRenderer;

}

@property (assign,nonatomic,__weak) id<ARUICompositeRendering> compositeRenderer;              //@synthesize compositeRenderer=_compositeRenderer - In the implementation block
@property (assign,nonatomic,__weak) id<ARUIBlurRendering> blurRenderer;                        //@synthesize blurRenderer=_blurRenderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prewarm;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id<ARUIBlurRendering>)blurRenderer;
-(id<ARUICompositeRendering>)compositeRenderer;
-(void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3 ;
-(id)_particlesTextureWithCommandBuffer:(id)arg1 sparksMap:(id)arg2 uniformType:(unsigned long long)arg3 ;
-(long long)_largeBlurRadiusForSize:(float)arg1 ;
-(long long)_smallBlurRadiusForSize:(float)arg1 ;
-(void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3 uniformsType:(unsigned long long)arg4 ;
-(id)sparksTextureWithCommandBuffer:(id)arg1 sparksMap:(id)arg2 ;
-(void)setCompositeRenderer:(id<ARUICompositeRendering>)arg1 ;
-(void)setBlurRenderer:(id<ARUIBlurRendering>)arg1 ;
@end

