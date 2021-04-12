/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBOrientationTransformWrapperView.h>

@class SBIconView, UIView, UIViewFloatAnimatableProperty, CAMediaTimingFunction;

@interface SBFluidSwitcherIconOverlayView : SBOrientationTransformWrapperView {

	SBIconView* _iconOverlayView;
	UIView* _iconCrossfadeView;
	UIView* _iconOverlayContainerView;
	UIView* _crossfadeView;
	CGRect _crossfadeViewFrame;
	UIViewFloatAnimatableProperty* _iconCrossfadeAnimatableProperty;
	CAMediaTimingFunction* _iconCrossfadeTimingFunction;
	double _cornerRadius;

}

@property (nonatomic,readonly) CGRect crossfadeViewFrame; 
@property (nonatomic,readonly) SBIconView * iconView; 
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(SBIconView *)iconView;
-(CGRect)crossfadeViewFrame;
-(id)initWithIconView:(id)arg1 crossfadeView:(id)arg2 crossfadeViewFrame:(CGRect)arg3 contentOrientation:(long long)arg4 containerOrientation:(long long)arg5 ;
-(void)_setUpIconCrossfadeView;
-(void)_setUpIconCrossfadeAnimatableProperty;
-(void)_applyIconOverlayViewOverlayScaleProperties;
-(double)_iconOverlayScale;
@end

