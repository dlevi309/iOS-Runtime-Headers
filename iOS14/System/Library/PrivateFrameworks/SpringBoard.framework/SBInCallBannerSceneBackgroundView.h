/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@class _UIBackdropView, SBWallpaperEffectView, NSString;

@interface SBInCallBannerSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {

	_UIBackdropView* _backdropView;
	unsigned long long _transformOptions;
	SBWallpaperEffectView* _wallpaperEffectView;
	long long _wallpaperVariant;
	BOOL _fullscreen;
	double _wallpaperAlpha;
	long long _wallpaperStyle;

}

@property (assign,nonatomic) double wallpaperAlpha;                            //@synthesize wallpaperAlpha=_wallpaperAlpha - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle;                         //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;              //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullscreen;
-(long long)wallpaperStyle;
-(void)setFullscreen:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)_updateBackdropView;
-(id)initWithFrame:(CGRect)arg1 wallpaperVariant:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(void)setWallpaperAlpha:(double)arg1 ;
-(double)wallpaperAlpha;
@end

