/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBOrientationTransformWrapperView.h>

@class SBIconView, UIView, UIViewFloatAnimatableProperty, CAMediaTimingFunction;

@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView {

	SBIconView* _iconOverlayView;
	UIView* _iconCrossfadeView;
	UIView* _iconOverlayContainerView;
	CGRect _initialIconOverlayViewBounds;
	UIView* _crossfadeView;
	CGRect _crossfadeViewFrame;
	UIViewFloatAnimatableProperty* _iconCrossfadeAnimatableProperty;
	CAMediaTimingFunction* _iconCrossfadeTimingFunction;
	double _cornerRadius;

}

@property (nonatomic,readonly) CGRect crossfadeViewFrame; 
@property (nonatomic,readonly) SBIconView * iconView; 
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(double)cornerRadius;
-(id)initWithIconView:(id)arg1 crossfadeView:(id)arg2 crossfadeViewFrame:(CGRect)arg3 contentOrientation:(long long)arg4 containerOrientation:(long long)arg5 ;
-(void)layoutSubviews;
-(SBIconView *)iconView;
-(double)_iconOverlayScale;
-(CGRect)crossfadeViewFrame;
-(void)invalidate;
-(void)_setUpIconCrossfadeAnimatableProperty;
-(void)_setUpIconCrossfadeView;
-(void)setCornerRadius:(double)arg1 ;
-(void)_applyIconOverlayViewOverlayScaleProperties;
-(double)_currentFadeValue;
-(void)dealloc;
@end

