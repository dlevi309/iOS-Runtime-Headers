/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, CAMAnimationDelegate;

@interface CAMTimerIndicatorView : UIView {

	BOOL __performingStyleAnimation;
	long long _style;
	UIView* __dimmingView;
	UILabel* __countdownLabel;
	long long __startingTicks;
	long long __remainingTicks;
	long long __labelOrientation;
	CAMAnimationDelegate* __animationDelegate;
	long long __deferredLabelOrientation;

}

@property (nonatomic,readonly) UIView * _dimmingView;                                                                                             //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (nonatomic,readonly) UILabel * _countdownLabel;                                                                                         //@synthesize _countdownLabel=__countdownLabel - In the implementation block
@property (nonatomic,readonly) long long _startingTicks;                                                                                          //@synthesize _startingTicks=__startingTicks - In the implementation block
@property (nonatomic,readonly) long long _remainingTicks;                                                                                         //@synthesize _remainingTicks=__remainingTicks - In the implementation block
@property (assign,setter=_setLabelOrientation:,nonatomic) long long _labelOrientation;                                                            //@synthesize _labelOrientation=__labelOrientation - In the implementation block
@property (nonatomic,readonly) CAMAnimationDelegate * _animationDelegate;                                                                         //@synthesize _animationDelegate=__animationDelegate - In the implementation block
@property (assign,setter=_setPerformingStyleAnimation:,getter=_isPerformingStyleAnimation,nonatomic) BOOL _performingStyleAnimation;              //@synthesize _performingStyleAnimation=__performingStyleAnimation - In the implementation block
@property (assign,setter=_setDeferredOrientation:,nonatomic) long long _deferredLabelOrientation;                                                 //@synthesize _deferredLabelOrientation=__deferredLabelOrientation - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                     //@synthesize style=_style - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)decrement;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)layoutSubviews;
-(id)font;
-(UIView *)_dimmingView;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CAMAnimationDelegate *)_animationDelegate;
-(UILabel *)_countdownLabel;
-(void)cam_rotateWithInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)stopCountdown;
-(void)resetWithNumberOfTicks:(long long)arg1 ;
-(void)startCountdownWithAnimationDelegate:(id)arg1 ;
-(id)_fontForStyle:(long long)arg1 ;
-(void)_updateCountdownLabelWithTicksRemaining;
-(void)_commonCAMTimerIndicatorViewInitialization;
-(void)_layoutCountdownLabelForStyle:(long long)arg1 ;
-(CGRect)_landscapeSwapBoundsCoordinates:(CGRect)arg1 ;
-(BOOL)_isPerformingStyleAnimation;
-(void)_layoutCountdownLabelForSmallStyle;
-(void)_layoutCountdownLabelForLargeStyle;
-(void)_updateFromChangeToStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setPerformingStyleAnimation:(BOOL)arg1 ;
-(void)_transitionDimmingViewFromStyle:(long long)arg1 ;
-(long long)_deferredLabelOrientation;
-(void)_handleOrientationChange:(long long)arg1 ;
-(void)_setDeferredOrientation:(long long)arg1 ;
-(void)_addDecrementAnimationForTick:(long long)arg1 ;
-(void)_addDimmingAnimationForTick:(long long)arg1 ;
-(id)_decrementAnimationForTick:(long long)arg1 ;
-(id)_dimmingAnimationForTick:(long long)arg1 ;
-(id)_finalDimmingAnimation;
-(void)_setLabelOrientation:(long long)arg1 ;
-(long long)_startingTicks;
-(long long)_remainingTicks;
-(long long)_labelOrientation;
@end

