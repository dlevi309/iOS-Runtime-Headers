/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlur.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>

@protocol _SBFakeBlurObserver;
@class SBWallpaperController, NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {

	long long _variant;
	BOOL _fullscreen;
	unsigned long long _transformOptions;
	id<_SBFakeBlurObserver> _observer;
	SBWallpaperController* _wallpaperController;

}

@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer;                           //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                               //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperController * wallpaperController;              //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) unsigned long long transformOptions;                               //@synthesize transformOptions=_transformOptions - In the implementation block
-(void)dealloc;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)_updateBackgroundColor;
-(void)requestStyle:(long long)arg1 ;
-(BOOL)isFullscreen;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(unsigned long long)transformOptions;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(SBWallpaperController *)wallpaperController;
-(id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2 ;
-(long long)effectiveStyle;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
@end

