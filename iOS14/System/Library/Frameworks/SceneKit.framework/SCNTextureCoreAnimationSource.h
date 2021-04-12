/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource {

	CALayer* _layer;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(void)dealloc;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL*)arg6 ;
-(BOOL)requiresMainThreadUpdates;
-(id)layerToFocusForRenderedLayer:(id)arg1 ;
-(void)_resizeLayer:(id)arg1 toSize:(CGSize)arg2 updateLayer:(BOOL)arg3 updateTransform:(BOOL)arg4 caRenderer:(id)arg5 ;
-(float)clearValue;
-(double)__renderLayerUsingMetal:(id)arg1 withCARenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL*)arg6 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(CGSize)layerSizeInPixels;
-(C3DTextureRef)_textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(C3DEngineContextRef)arg3 sampler:(_C3DTextureSampler*)arg4 ;
-(BOOL)supportsMetal;
-(BOOL)prefersGL3;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(double)layerContentsScaleFactor;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
@end

