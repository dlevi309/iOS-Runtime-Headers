/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlurObserver.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>

@protocol _SBFakeBlur, SBWallpaperPresentingSBWallpaperLegibilityProviding;
@class UIColor, UIView, UIImageView, UIImage, NSString;

@interface SBWallpaperEffectViewBase : UIView <_SBFakeBlurObserver, SBWallpaperObserver> {

	long long _variant;
	UIColor* _wallpaperAverageColor;
	long long _startStyle;
	long long _endStyle;
	double _transitionFraction;
	UIView*<_SBFakeBlur> _blurView;
	UIView* _grayscaleTintView;
	UIView* _colorTintView;
	UIView*<_SBFakeBlur> _transitionBlurView;
	UIView* _transitionGrayscaleTintView;
	UIView* _transitionColorTintView;
	UIImageView* _maskImageView;
	UIView* _blurMaskingContainer;
	UIView* _tintMaskingContainer;
	UIImage* _maskImage;
	BOOL _shouldMaskBlur;
	BOOL _shouldMaskTint;
	BOOL _fullscreen;
	BOOL _forcesOpaque;
	unsigned long long _transformOptions;
	BOOL _accessibilityReduceTransparencyEnabled;
	id<SBWallpaperPresenting><SBWallpaperLegibilityProviding> _wallpaperPresenter;

}

@property (nonatomic,retain) UIView*<_SBFakeBlur> blurView;                                                               //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                                                  //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                                                      //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIView*<_SBFakeBlur> transitionBlurView;                                                     //@synthesize transitionBlurView=_transitionBlurView - In the implementation block
@property (nonatomic,retain) UIView * transitionGrayscaleTintView;                                                        //@synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView - In the implementation block
@property (nonatomic,retain) UIView * transitionColorTintView;                                                            //@synthesize transitionColorTintView=_transitionColorTintView - In the implementation block
@property (nonatomic,retain) UIImageView * maskImageView;                                                                 //@synthesize maskImageView=_maskImageView - In the implementation block
@property (nonatomic,retain) UIView * blurMaskingContainer;                                                               //@synthesize blurMaskingContainer=_blurMaskingContainer - In the implementation block
@property (nonatomic,retain) UIView * tintMaskingContainer;                                                               //@synthesize tintMaskingContainer=_tintMaskingContainer - In the implementation block
@property (nonatomic,readonly) id<SBWallpaperPresenting><SBWallpaperLegibilityProviding> wallpaperPresenter;              //@synthesize wallpaperPresenter=_wallpaperPresenter - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                                                         //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) BOOL forcesOpaque;                                                                           //@synthesize forcesOpaque=_forcesOpaque - In the implementation block
@property (assign,nonatomic) unsigned long long transformOptions;                                                         //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureForCurrentBlurStyle;
-(void)_configureFromScratch;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
-(void)setForcesOpaque:(BOOL)arg1 ;
-(BOOL)currentTransitionStateIsOpaque;
-(UIView *)blurMaskingContainer;
-(void)setMaskImageView:(UIImageView *)arg1 ;
-(void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)arg1 ;
-(void)_configureViewsForFullscreen:(BOOL)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(BOOL)forcesOpaque;
-(id<SBWallpaperPresenting><SBWallpaperLegibilityProviding>)wallpaperPresenter;
-(void)setTransitionBlurView:(UIView*<_SBFakeBlur>)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(UIView*<_SBFakeBlur>)transitionBlurView;
-(double)zoomScale;
-(void)_configureViews;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(BOOL)_needsBlurViewForStyle:(long long)arg1 ;
-(void)setBlurMaskingContainer:(UIView *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)prepareToAnimateToTransitionState:(inout SCD_Struct_SB20*)arg1 ;
-(void)_setTransitionFraction:(double)arg1 ;
-(id)initWithWallpaperPresenter:(id)arg1 variant:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(UIView *)tintMaskingContainer;
-(void)_updateWallpaperAverageColor:(id)arg1 ;
-(BOOL)_isEffectivelyFullscreen;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)setMaskImage:(id)arg1 masksBlur:(BOOL)arg2 masksTint:(BOOL)arg3 ;
-(BOOL)isFullscreen;
-(void)setTransitionState:(SCD_Struct_SB20)arg1 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)setBlurView:(UIView*<_SBFakeBlur>)arg1 ;
-(long long)wallpaperStyle;
-(UIView*<_SBFakeBlur>)blurView;
-(UIImageView *)maskImageView;
-(void)setBarStyle:(long long)arg1 ;
-(void)setTintMaskingContainer:(UIView *)arg1 ;
-(void)updateBackgroundImage;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setTransitionGrayscaleTintView:(UIView *)arg1 ;
-(void)setZoomScale:(double)arg1 ;
-(UIView *)transitionGrayscaleTintView;
-(void)setTransitionColorTintView:(UIView *)arg1 ;
-(void)setAppearanceStorage:(id)arg1 ;
-(void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2 ;
-(UIView *)transitionColorTintView;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(UIView *)grayscaleTintView;
-(void)setHidden:(BOOL)arg1 ;
-(UIView *)colorTintView;
-(unsigned long long)transformOptions;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)appearanceStorage;
-(void)dealloc;
@end

