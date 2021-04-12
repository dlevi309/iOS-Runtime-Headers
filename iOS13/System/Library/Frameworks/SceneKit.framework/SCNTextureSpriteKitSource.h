/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class SKScene;

@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource {

	SKScene* _scene;
	double _lastUpdate;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(void)dealloc;
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)__renderSKScene:(id)arg1 withSKSCNRenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 ;
-(double)__updateTextureWithSKScene:(id)arg1 engineContext:(C3DEngineContextRef)arg2 sampler:(_C3DTextureSampler*)arg3 ;
@end

