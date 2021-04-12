/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) long long backgroundStyle;                                                              //@synthesize style=_style - In the implementation block
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle;              //@synthesize transitioning=_transitioning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backdropView;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1 ;
-(void)completeTransitionToBackgroundStyle:(long long)arg1 ;
-(void)modifyAllViewsWithChanges:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(long long)backgroundStyle;
-(double)_tintColorAlphaForBackgroundStyle:(long long)arg1 ;
-(void)setReduceTransparencyBackingColor:(id)arg1 ;
-(void)_updateReduceTransparencyTintingWithProgressWeighting:(double)arg1 ;
-(void)_updateAppearanceForBackgroundStyle:(long long)arg1 transitionToSettings:(BOOL)arg2 ;
-(double)_darkenValueForBackgroundStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(id)_backgroundColorForDarkenAlpha:(double)arg1 andProgress:(double)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(double)_valueFromStart:(double)arg1 toEnd:(double)arg2 withFraction:(double)arg3 ;
-(void)_tintWithProgress:(double)arg1 backgroundColorAlpha:(double)arg2 ;
-(void)_lightenSourceOverWithProgress:(double)arg1 ;
-(BOOL)_shouldApplyReducedTransparencyTintForBackgroundStyle:(long long)arg1 ;
-(void)_updateAppearanceForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 withProgress:(double)arg3 ;
-(double)_tintValueForBackgroundStyle:(long long)arg1 ;
-(double)_lightenSourceOverValueForBackgroundStyle:(long long)arg1 ;
-(void)_luminanceWithProgress:(double)arg1 ;
-(void)_reduceTransparencyEnabledStateDidChange:(id)arg1 ;
-(void)_darkenWithProgress:(double)arg1 ;
-(double)_reducedTransparencyValueForBackgroundStyle:(long long)arg1 ;
-(void)beginTransitionToBackgroundStyle:(long long)arg1 ;
-(double)_luminanceValueForBackgroundStyle:(long long)arg1 ;
-(void)_updateReduceTransparencyTinting;
-(BOOL)isTransitioningBackgroundStyle;
-(void)_reduceTransparencyWithProgress:(double)arg1 ;
@end

