/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>
#import <UIKit/UIViewControllerAnimatedTransitioningEx.h>

@protocol UIViewControllerContextTransitioning;
@class NSUUID, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView, UIView, UIColor, NSString;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

	NSUUID* _currentRunningAnimationsUUID;
	NSUUID* _currentTrackingAnimatorsAnimationsUUID;
	BOOL _interactionAborted;
	BOOL _clipUnderlapWhileTransitioning;
	BOOL __shouldReverseLayoutDirection;
	long long _operation;
	id<UIViewControllerContextTransitioning> _transitionContext;
	_UINavigationInteractiveTransitionBase* _interactionController;
	_UIParallaxDimmingView* _borderDimmingView;
	_UIParallaxDimmingView* _contentDimmingView;
	UIView* _containerFromView;
	UIView* _containerToView;
	UIView* _clipUnderView;
	long long _transitionStyle;
	double _transitionGap;
	UIColor* _overrideDimmingColor;

}

@property (assign,nonatomic) long long operation;                                                                      //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;                               //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                                  //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) _UINavigationInteractiveTransitionBase * interactionController;                           //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * borderDimmingView;                                               //@synthesize borderDimmingView=_borderDimmingView - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * contentDimmingView;                                              //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * containerFromView;                                                               //@synthesize containerFromView=_containerFromView - In the implementation block
@property (nonatomic,retain) UIView * containerToView;                                                                 //@synthesize containerToView=_containerToView - In the implementation block
@property (nonatomic,retain) UIView * clipUnderView;                                                                   //@synthesize clipUnderView=_clipUnderView - In the implementation block
@property (assign,nonatomic) BOOL clipUnderlapWhileTransitioning;                                                      //@synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning - In the implementation block
@property (assign,nonatomic) long long transitionStyle;                                                                //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) double transitionGap;                                                                     //@synthesize transitionGap=_transitionGap - In the implementation block
@property (assign,setter=_setShouldReverseLayoutDirection:,nonatomic) BOOL _shouldReverseLayoutDirection;              //@synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection - In the implementation block
@property (nonatomic,retain) UIColor * overrideDimmingColor;                                                           //@synthesize overrideDimmingColor=_overrideDimmingColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultSlidingTransitionDuration:(double)arg1 ;
+(double)defaultSlidingTransitionDuration;
-(void)animateTransition:(id)arg1 ;
-(void)completeKeyboard:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setOperation:(long long)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(long long)operation;
-(void)prepareToAnimateKeyboard:(id)arg1 ;
-(void)setClipUnderView:(UIView *)arg1 ;
-(id)_timingFunctionForAnimation;
-(void)_stopTransitionImmediately;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(id)resizedFromContainerView;
-(UIView *)clipUnderView;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(BOOL)clipUnderlapWhileTransitioning;
-(UIView *)containerFromView;
-(_UIParallaxDimmingView *)borderDimmingView;
-(id)initWithCurrentOperation:(long long)arg1 ;
-(_UINavigationInteractiveTransitionBase *)interactionController;
-(void)setContainerFromView:(UIView *)arg1 ;
-(void)setContainerToView:(UIView *)arg1 ;
-(void)setTransitionGap:(double)arg1 ;
-(double)gapBetweenViews;
-(void)setInteractionController:(_UINavigationInteractiveTransitionBase *)arg1 ;
-(void)setContentDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(void)resizeShadow:(id)arg1 ;
-(BOOL)interactionAborted;
-(void)setBorderDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(void)setClipUnderlapWhileTransitioning:(BOOL)arg1 ;
-(double)transitionGap;
-(long long)transitionStyle;
-(void)setOverrideDimmingColor:(UIColor *)arg1 ;
-(UIColor *)overrideDimmingColor;
-(BOOL)_shouldReverseLayoutDirection;
-(void)animateKeyboard:(id)arg1 ;
-(void)setTransitionStyle:(long long)arg1 ;
-(id)resizedToContainerView;
-(UIView *)containerToView;
-(_UIParallaxDimmingView *)contentDimmingView;
-(double)parallaxOffset;
-(id)shadowContainerForKeyboardTransition:(id)arg1 ;
@end

