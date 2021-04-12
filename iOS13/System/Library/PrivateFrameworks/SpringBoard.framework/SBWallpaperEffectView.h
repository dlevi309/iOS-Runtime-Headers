/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlurObserver.h>
#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@protocol _SBFakeBlur;
@class UIColor, UIView, UIImageView, UIImage, SBWallpaperController, NSString;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBApplicationSceneBackgroundView> {

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
	SBWallpaperController* _wallpaperController;

}

@property (nonatomic,retain) UIView*<_SBFakeBlur> blurView;                              //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                 //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                     //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIView*<_SBFakeBlur> transitionBlurView;                    //@synthesize transitionBlurView=_transitionBlurView - In the implementation block
@property (nonatomic,retain) UIView * transitionGrayscaleTintView;                       //@synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView - In the implementation block
@property (nonatomic,retain) UIView * transitionColorTintView;                           //@synthesize transitionColorTintView=_transitionColorTintView - In the implementation block
@property (nonatomic,retain) UIImageView * maskImageView;                                //@synthesize maskImageView=_maskImageView - In the implementation block
@property (nonatomic,retain) UIView * blurMaskingContainer;                              //@synthesize blurMaskingContainer=_blurMaskingContainer - In the implementation block
@property (nonatomic,retain) UIView * tintMaskingContainer;                              //@synthesize tintMaskingContainer=_tintMaskingContainer - In the implementation block
@property (nonatomic,readonly) SBWallpaperController * wallpaperController;              //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                        //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) BOOL forcesOpaque;                                          //@synthesize forcesOpaque=_forcesOpaque - In the implementation block
@property (assign,nonatomic) unsigned long long transformOptions;                        //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
+(id)imageInRect:(CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(BOOL)arg6 masksTint:(BOOL)arg7 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)grayscaleTintView;
-(UIView *)colorTintView;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)appearanceStorage;
-(void)setBarStyle:(long long)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)setBlurView:(UIView*<_SBFakeBlur>)arg1 ;
-(UIView*<_SBFakeBlur>)blurView;
-(BOOL)isFullscreen;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)updateBackgroundImage;
-(void)setAppearanceStorage:(id)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(void)setTransitionState:(SCD_Struct_SB30)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(unsigned long long)transformOptions;
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(void)_configureViews;
-(void)setTransitionBlurView:(UIView*<_SBFakeBlur>)arg1 ;
-(UIView*<_SBFakeBlur>)transitionBlurView;
-(long long)wallpaperStyle;
-(void)setForcesOpaque:(BOOL)arg1 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2 ;
-(void)setWallpaperStyle:(long long)arg1 ;
-(SBWallpaperController *)wallpaperController;
-(BOOL)prepareToAnimateToTransitionState:(inout SCD_Struct_SB30*)arg1 ;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(BOOL)currentTransitionStateIsOpaque;
-(id)initWithWallpaperController:(id)arg1 variant:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2 ;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
-(void)_configureFromScratch;
-(BOOL)_isEffectivelyFullscreen;
-(void)_configureViewsForFullscreen:(BOOL)arg1 ;
-(void)_setTransitionFraction:(double)arg1 ;
-(void)_configureForCurrentBlurStyle;
-(void)_updateWallpaperAverageColor:(id)arg1 ;
-(BOOL)_needsBlurViewForStyle:(long long)arg1 ;
-(void)setMaskImageView:(UIImageView *)arg1 ;
-(void)setTintMaskingContainer:(UIView *)arg1 ;
-(void)setBlurMaskingContainer:(UIView *)arg1 ;
-(void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)arg1 ;
-(void)setTransitionGrayscaleTintView:(UIView *)arg1 ;
-(void)setTransitionColorTintView:(UIView *)arg1 ;
-(UIView *)transitionGrayscaleTintView;
-(UIView *)transitionColorTintView;
-(void)setMaskImage:(id)arg1 masksBlur:(BOOL)arg2 masksTint:(BOOL)arg3 ;
-(BOOL)forcesOpaque;
-(UIImageView *)maskImageView;
-(UIView *)blurMaskingContainer;
-(UIView *)tintMaskingContainer;
@end

