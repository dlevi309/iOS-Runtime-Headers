/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUICelebrationsRendering.h>

@protocol MTLDevice, MTLLibrary, ARUICompositeRendering, ARUIBlurRendering, ARUIRingsRendering;
@class ARUIWavesComputeState, ARUIWavesRenderState, NSString;

@interface ARUIWavesRenderer : NSObject <ARUICelebrationsRendering> {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	BOOL _prewarmed;
	ARUIWavesComputeState* _wavesComputeState;
	ARUIWavesRenderState* _wavesRenderState;
	id<ARUICompositeRendering> _compositeRenderer;
	id<ARUIBlurRendering> _blurRenderer;
	id<ARUIRingsRendering> _ringsRenderer;

}

@property (assign,nonatomic,__weak) id<ARUICompositeRendering> compositeRenderer;              //@synthesize compositeRenderer=_compositeRenderer - In the implementation block
@property (assign,nonatomic,__weak) id<ARUIBlurRendering> blurRenderer;                        //@synthesize blurRenderer=_blurRenderer - In the implementation block
@property (assign,nonatomic,__weak) id<ARUIRingsRendering> ringsRenderer;                      //@synthesize ringsRenderer=_ringsRenderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prewarm;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(void)setRingsRenderer:(id<ARUIRingsRendering>)arg1 ;
-(id<ARUIBlurRendering>)blurRenderer;
-(id<ARUICompositeRendering>)compositeRenderer;
-(void)setCompositeRenderer:(id<ARUICompositeRendering>)arg1 ;
-(void)setBlurRenderer:(id<ARUIBlurRendering>)arg1 ;
-(void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3 ;
-(id)_wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 ;
-(id<ARUIRingsRendering>)ringsRenderer;
-(void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3 ;
-(id)wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 ;
-(float)_revealPercentFromWavesMap:(id)arg1 ;
@end

