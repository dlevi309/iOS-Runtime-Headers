/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUIBackgroundStyleTransitioning.h>
#import <libobjc.A.dylib/SBUIWallpaperOverlay.h>

@class BSUIBackdropView, UIView, UIColor, MTMaterialView, NSString;

@interface SBUIBackgroundView : UIView <SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay> {

	long long _style;
	long long _transitionStyle;
	BOOL _transitioning;
	double _progress;
	BSUIBackdropView* _backdropView;
	BOOL _isReducedTransparencyEnabled;
	UIView* _reduceTransparencyView;
	UIView* _reduceTransparencyTintingView;
	UIView* _sourceOverView;
	UIView* _darkenSourceOverView;
	UIView* _tintView;
	UIView* _lightenSourceOverView;
	UIColor* _reduceTransparencyBackingColor;
	MTMaterialView* _luminanceView;

}

@property (nonatomic,retain) NSString * groupName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundStyle;                                                              //@synthesize style=_style - In the implementation block
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle;              //@synthesize transitioning=_transitioning - In the implementation block
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)backdropView;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setReduceTransparencyBackingColor:(id)arg1 ;
-(void)_reduceTransparencyEnabledStateDidChange:(id)arg1 ;
-(void)modifyAllViewsWithChanges:(/*^block*/id)arg1 ;
-(void)beginTransitionToBackgroundStyle:(long long)arg1 ;
-(void)completeTransitionToBackgroundStyle:(long long)arg1 ;
-(void)_updateAppearanceForBackgroundStyle:(long long)arg1 transitionToSettings:(BOOL)arg2 ;
-(void)_updateReduceTransparencyTintingWithProgressWeighting:(double)arg1 ;
-(void)_updateAppearanceForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 withProgress:(double)arg3 ;
-(BOOL)_shouldApplyReducedTransparencyTintForBackgroundStyle:(long long)arg1 ;
-(double)_reducedTransparencyValueForBackgroundStyle:(long long)arg1 ;
-(double)_darkenValueForBackgroundStyle:(long long)arg1 ;
-(void)_darkenWithProgress:(double)arg1 ;
-(double)_tintValueForBackgroundStyle:(long long)arg1 ;
-(double)_tintColorAlphaForBackgroundStyle:(long long)arg1 ;
-(void)_tintWithProgress:(double)arg1 backgroundColorAlpha:(double)arg2 ;
-(void)_reduceTransparencyWithProgress:(double)arg1 ;
-(void)_updateReduceTransparencyTinting;
-(double)_luminanceValueForBackgroundStyle:(long long)arg1 ;
-(void)_luminanceWithProgress:(double)arg1 ;
-(double)_lightenSourceOverValueForBackgroundStyle:(long long)arg1 ;
-(void)_lightenSourceOverWithProgress:(double)arg1 ;
-(double)_valueFromStart:(double)arg1 toEnd:(double)arg2 withFraction:(double)arg3 ;
-(id)_backgroundColorForDarkenAlpha:(double)arg1 andProgress:(double)arg2 ;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1 ;
-(BOOL)isTransitioningBackgroundStyle;
@end

