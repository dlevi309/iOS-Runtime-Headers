/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureCoreAnimationSource.h>

@class UIWindow, UIView;

@interface SCNTextureUIKitSource : SCNTextureCoreAnimationSource {

	BOOL _setup;
	BOOL _windowReady;
	id _source;
	UIWindow* _uiWindow;
	UIView* _uiView;
	CGSize _sizeCache;
	unsigned _textureID;
	C3DEngineContextRef _engineContext;
	_C3DTextureSampler* _textureSampler;

}

@property (nonatomic,retain) UIView * uiView;                  //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
@property (nonatomic,retain) id source;                        //@synthesize source=_source - In the implementation block
-(void)dealloc;
-(void)setSource:(id)arg1 ;
-(id)source;
-(id)layer;
-(void)setup;
-(id)layerToFocusForRenderedLayer:(id)arg1 ;
-(float)clearValue;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(CGSize)layerSizeInPixels;
-(BOOL)supportsMetal;
-(double)layerContentsScaleFactor;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(UIView *)uiView;
-(UIWindow *)uiWindow;
-(void)_layerTreeDidUpdate;
@end

