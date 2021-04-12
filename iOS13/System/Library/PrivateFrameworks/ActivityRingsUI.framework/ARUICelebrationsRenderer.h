/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIBlurRendering.h>
#import <libobjc.A.dylib/ARUICelebrationsRendering.h>
#import <libobjc.A.dylib/ARUICompositeRendering.h>

@protocol MTLDevice, MTLLibrary, MTLBuffer, ARUIRingsRendering;
@class ARUISparksRenderer, ARUIWavesRenderer, ARUICompositingRenderState, ARUIHorizontalBlurRenderState, ARUIVerticalBlurRenderState, ARUIDownsampleRenderState, NSString;

@interface ARUICelebrationsRenderer : NSObject <ARUIBlurRendering, ARUICelebrationsRendering, ARUICompositeRendering> {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	ARUISparksRenderer* _sparksRenderer;
	ARUIWavesRenderer* _wavesRenderer;
	ARUICompositingRenderState* _compositingRenderState;
	ARUIHorizontalBlurRenderState* _horizontalBlurRenderState;
	ARUIVerticalBlurRenderState* _verticalBlurRenderState;
	ARUIDownsampleRenderState* _downsampleRenderState;
	id<MTLBuffer> _quadVertexBuffer;
	id<MTLBuffer> _quadIndexBuffer;
	unsigned long long _quadIndexCount;
	id<ARUIRingsRendering> _ringsRenderer;

}

@property (assign,nonatomic,__weak) id<ARUIRingsRendering> ringsRenderer;              //@synthesize ringsRenderer=_ringsRenderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)celebrationsTextureWithCommandBuffer:(id)arg1 forRingGroupControllers:(id)arg2 ;
-(void)compositeWithCommandEncoder:(id)arg1 texture:(id)arg2 ;
-(void)setRingsRenderer:(id<ARUIRingsRendering>)arg1 ;
-(void)prewarmCelebrationPipelineForType:(unsigned long long)arg1 ;
-(void)prewarmBlurRenderPipeline;
-(void)prewarmCompositeRenderPipeline;
-(id)gaussianBlurredTexture:(id)arg1 withCommandBuffer:(id)arg2 andSize:(unsigned long long)arg3 blurRadius:(float)arg4 initialDownsampleFraction:(float)arg5 ;
-(id)compositeTexturesWithCommandBuffer:(id)arg1 textures:(id)arg2 ;
-(id<ARUIRingsRendering>)ringsRenderer;
-(void)_prewarmQuadBuffers;
-(void)compositeWithCommandEncoder:(id)arg1 textures:(id)arg2 ;
-(id)_downsampledTexture:(id)arg1 withCommandBuffer:(id)arg2 ;
@end

