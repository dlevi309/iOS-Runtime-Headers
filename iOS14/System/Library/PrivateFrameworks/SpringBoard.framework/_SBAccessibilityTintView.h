/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlur.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>

@protocol _SBFakeBlurObserver;
@class SBWallpaperViewController, NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {

	long long _variant;
	BOOL _fullscreen;
	unsigned long long _transformOptions;
	id<_SBFakeBlurObserver> _observer;
	SBWallpaperViewController* _wallpaperViewController;

}

@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer;                                   //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                                       //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;              //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) unsigned long long transformOptions;                                       //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
-(void)_updateBackgroundColor;
-(double)zoomScale;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)isFullscreen;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(id<_SBFakeBlurObserver>)observer;
-(unsigned long long)transformOptions;
-(void)didMoveToSuperview;
-(void)requestStyle:(long long)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(void)didMoveToWindow;
-(long long)effectiveStyle;
-(SBWallpaperViewController *)wallpaperViewController;
-(void)dealloc;
-(id)initWithVariant:(long long)arg1 wallpaperViewController:(id)arg2 ;
@end

