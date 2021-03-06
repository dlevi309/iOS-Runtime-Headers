/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureCoreAnimationSource.h>

@class UIWindow, UIView, CALayer;

@interface SCNTextureUIKitSource : SCNTextureCoreAnimationSource {

	BOOL _windowReady;
	id _source;
	UIWindow* _uiWindow;
	UIView* _uiView;
	CGSize _sizeCache;
	unsigned _textureID;
	CALayer* _uiWindowLayer;
	BOOL _isOpaque;
	C3DEngineContextRef _engineContext;
	_C3DTextureSampler* _textureSampler;

}

@property (nonatomic,retain) UIView * uiView;                      //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;                  //@synthesize uiWindow=_uiWindow - In the implementation block
@property (nonatomic,retain) CALayer * uiWindowLayer;              //@synthesize uiWindowLayer=_uiWindowLayer - In the implementation block
@property (nonatomic,retain) id source;                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL isOpaque;                        //@synthesize isOpaque=_isOpaque - In the implementation block
-(void)setup;
-(BOOL)isOpaque;
-(id)layer;
-(void)setSource:(id)arg1 ;
-(UIView *)uiView;
-(void)dealloc;
-(id)source;
-(void)setIsOpaque:(BOOL)arg1 ;
-(BOOL)requiresMainThreadUpdates;
-(id)layerToFocusForRenderedLayer:(id)arg1 ;
-(BOOL)shouldFlip;
-(float)clearValue;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(CGSize)layerSizeInPixels;
-(BOOL)supportsMetal;
-(double)layerContentsScaleFactor;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(UIWindow *)uiWindow;
-(void)setUiWindowLayer:(CALayer *)arg1 ;
-(void)_layerTreeDidUpdate;
-(CALayer *)uiWindowLayer;
@end

