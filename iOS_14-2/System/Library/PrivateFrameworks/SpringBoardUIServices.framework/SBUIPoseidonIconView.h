/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol SBUIPoseidonIconViewDelegate;
@class _UILegibilityView, SBUILegibilityLabel, UIView, NSTimer, CAGradientLayer, _UILegibilitySettings, NSString;

@interface SBUIPoseidonIconView : UIView <CAAnimationDelegate> {

	_UILegibilityView* _coachingButton;
	SBUILegibilityLabel* _coachingLabel;
	SBUILegibilityLabel* _restToOpenLabel;
	UIView* _coachingLabelRotationView;
	UIView* _restToOpenLabelRotationView;
	NSTimer* _restToOpenIdleTimer;
	CAGradientLayer* _progressFillGradient;
	double _fullProgressFillDuration;
	double _startProgressFillTime;
	BOOL _isFilling;
	CAGradientLayer* _shimmerGradient;
	NSTimer* _idleUntilShimmerTimer;
	NSTimer* _reduceMotionShimmerTimer;
	id<SBUIPoseidonIconViewDelegate> _delegate;
	_UILegibilitySettings* _legibilitySettings;
	long long _state;
	CGAffineTransform _localTransform;

}

@property (assign,nonatomic,__weak) id<SBUIPoseidonIconViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                    //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGAffineTransform localTransform;                              //@synthesize localTransform=_localTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fillRestToOpenWithDuration:(double)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)resetRestToOpen;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SBUIPoseidonIconViewDelegate>)delegate;
-(CGAffineTransform)localTransform;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setLocalTransform:(CGAffineTransform)arg1 ;
-(void)setState:(long long)arg1 forIdleTimeout:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<SBUIPoseidonIconViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)_fontSize;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)_stopShimmer;
-(void)_cancelRestToOpenIdleTimer;
-(void)_startRestToOpenIdleTimer;
-(void)_startShimmer;
-(void)_cancelRestToOpenProgress;
-(void)_startReduceMotionShimmer;
@end

