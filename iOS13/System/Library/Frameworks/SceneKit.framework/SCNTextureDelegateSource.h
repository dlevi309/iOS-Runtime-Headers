/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@interface SCNTextureDelegateSource : SCNTextureOffscreenRenderingSource {

	id _delegate;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)__updateTextureWithDelegate:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
@end

