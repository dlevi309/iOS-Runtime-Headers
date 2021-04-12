/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlur.h>
#import <libobjc.A.dylib/SBWallpaperReachabilityObserving.h>

@protocol _SBFakeBlurObserver, SBWallpaperReachabilityCoordinating;
@class SBFWallpaperView, UIImageView, SBWallpaperViewController, NSString;

@interface _SBFakeBlurView : UIView <_SBFakeBlur, SBWallpaperReachabilityObserving> {

	unsigned long long _transformOptions;
	long long _requestedStyle;
	long long _effectiveStyle;
	SBFWallpaperView* _wallpaperView;
	BOOL _fullscreen;
	UIImageView* _imageView;
	CGPoint _wallpaperOffset;
	id<_SBFakeBlurObserver> _observer;
	SBWallpaperViewController* _wallpaperViewController;
	id<SBWallpaperReachabilityCoordinating> _reachabilityCoordinator;

}

@property (nonatomic,readonly) long long variant; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                                            //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;                   //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (nonatomic,readonly) id<SBWallpaperReachabilityCoordinating> reachabilityCoordinator;              //@synthesize reachabilityCoordinator=_reachabilityCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer;                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) unsigned long long transformOptions;                                            //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 ;
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 overrideTraitCollection:(id)arg3 ;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
-(double)zoomScale;
-(void)handleReachabilityYOffsetDidChange;
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(id<_SBFakeBlurObserver>)observer;
-(long long)variant;
-(unsigned long long)transformOptions;
-(id)initWithVariant:(long long)arg1 wallpaperViewController:(id)arg2 transformOptions:(unsigned long long)arg3 reachabilityCoordinator:(id)arg4 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 ;
-(id<SBWallpaperReachabilityCoordinating>)reachabilityCoordinator;
-(void)reconfigureWithSource:(id)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)updateImageWithSource:(id)arg1 ;
-(long long)effectiveStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SBWallpaperViewController *)wallpaperViewController;
-(void)dealloc;
@end

