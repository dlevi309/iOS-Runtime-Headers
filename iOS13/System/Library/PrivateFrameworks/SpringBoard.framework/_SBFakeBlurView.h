/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlur.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@protocol _SBFakeBlurObserver;
@class SBFWallpaperView, UIImageView, SBWallpaperController, NSString;

@interface _SBFakeBlurView : UIView <_SBFakeBlur, SBReachabilityObserver> {

	unsigned long long _transformOptions;
	long long _requestedStyle;
	long long _effectiveStyle;
	SBFWallpaperView* _wallpaperView;
	BOOL _fullscreen;
	UIImageView* _imageView;
	CGPoint _wallpaperOffset;
	id<_SBFakeBlurObserver> _observer;
	SBWallpaperController* _wallpaperController;

}

@property (nonatomic,readonly) long long variant; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                               //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperController * wallpaperController;              //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer;                           //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) unsigned long long transformOptions;                               //@synthesize transformOptions=_transformOptions - In the implementation block
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 rootSettings:(id)arg3 overrideTraitCollection:(id)arg4 ;
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 rootSettings:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(id<_SBFakeBlurObserver>)observer;
-(long long)variant;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(BOOL)isFullscreen;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(unsigned long long)transformOptions;
-(void)handleReachabilityYOffsetDidChange;
-(SBWallpaperController *)wallpaperController;
-(void)reconfigureWithSource:(id)arg1 ;
-(void)updateImageWithSource:(id)arg1 ;
-(id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2 transformOptions:(unsigned long long)arg3 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 ;
-(void)_updateImageWithSource:(id)arg1 overrideTraitCollection:(id)arg2 notifyObserver:(BOOL)arg3 ;
-(void)_setImage:(id)arg1 style:(long long)arg2 notify:(BOOL)arg3 ;
-(void)_createOrRemoveMatchMoveAnimationIfNeeded;
-(void)updateImageWithSource:(id)arg1 overrideTraitCollection:(id)arg2 ;
-(long long)effectiveStyle;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
@end

