/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, NSMutableArray, UIResponder, UIWindow;

@interface UITransitionView : UIView <NSCoding> {

	UIView* _fromView;
	UIView* _toView;
	NSMutableArray* _frozenSubviews;
	UIResponder* _firstResponderToRemember;
	id _delegate;
	UIWindow* _originalWindow;
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRestoreGroupOpacity : 1;
		unsigned groupOpacityToRestoreForFromView : 1;
		unsigned groupOpacityToRestoreForToView : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	}  _transitionViewFlags;
	double _curlUpRevealedHeight;
	BOOL _ignoreDirectTouchEvents;
	long long _animationTimingCurve;

}

@property (nonatomic,readonly) double _curlUpRevealedHeight; 
@property (assign,nonatomic) BOOL shouldNotifyDidCompleteImmediately; 
@property (assign,nonatomic) long long animationTimingCurve;                       //@synthesize animationTimingCurve=_animationTimingCurve - In the implementation block
@property (assign,nonatomic) BOOL ignoreDirectTouchEvents;                         //@synthesize ignoreDirectTouchEvents=_ignoreDirectTouchEvents - In the implementation block
+(double)defaultDurationForTransition:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setIgnoresInteractionEvents:(BOOL)arg1 ;
-(void)setIgnoreDirectTouchEvents:(BOOL)arg1 ;
-(BOOL)transition:(int)arg1 toView:(id)arg2 ;
-(void)setShouldNotifyDidCompleteImmediately:(BOOL)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(double)_curlUpRevealedHeight;
-(void)setAnimationTimingCurve:(long long)arg1 ;
-(BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4 ;
-(id)toView;
-(id)fromView;
-(BOOL)isTransitioning;
-(BOOL)ignoresInteractionEvents;
-(BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(BOOL)shouldNotifyDidCompleteImmediately;
-(void)notifyDidCompleteTransition:(id)arg1 ;
-(void)_didStartTransition;
-(BOOL)rasterizesOnTransition;
-(void)_startTransition:(int)arg1 withDuration:(double)arg2 ;
-(void)_didCompleteTransition:(BOOL)arg1 ;
-(void)_transitionDidStopFinished:(BOOL)arg1 ;
-(BOOL)_shouldDisableGroupOpacityOnAlphaTransitions;
-(BOOL)_isTransitioningFromFromView:(id)arg1 ;
-(void)setRasterizesOnTransition:(BOOL)arg1 ;
-(long long)animationTimingCurve;
-(BOOL)ignoreDirectTouchEvents;
@end

