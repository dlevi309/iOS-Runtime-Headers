/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class UIViewController, NSString;

@interface WKFullscreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	CGRect _initialMaskViewBounds;
	CGRect _finalMaskViewBounds;
	CGAffineTransform _initialAnimatingViewTransform;
	CGAffineTransform _finalAnimatingViewTransform;
	CGPoint _initialMaskViewCenter;
	CGPoint _finalMaskViewCenter;
	RetainPtr<UIView>* _maskView;
	RetainPtr<UIView>* _animatingView;
	RetainPtr<id<UIViewControllerContextTransitioning> >* _context;
	double _initialBackgroundAlpha;
	double _finalBackgroundAlpha;
	BOOL _animatingIn;
	UIViewController* _viewController;
	CGRect _initialFrame;
	CGRect _finalFrame;

}

@property (nonatomic,retain) UIViewController * viewController;                               //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) CGRect initialFrame;                                             //@synthesize initialFrame=_initialFrame - In the implementation block
@property (assign,nonatomic) CGRect finalFrame;                                               //@synthesize finalFrame=_finalFrame - In the implementation block
@property (assign,getter=isAnimatingIn,nonatomic) BOOL animatingIn;                           //@synthesize animatingIn=_animatingIn - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> context; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)end:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)context;
-(void)startInteractiveTransition:(id)arg1 ;
-(UIViewController *)viewController;
-(BOOL)isAnimatingIn;
-(void)setAnimatingIn:(BOOL)arg1 ;
-(CGRect)finalFrame;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(void)updateWithProgress:(double)arg1 ;
-(void)configureInitialAndFinalStatesForTransition:(id)arg1 ;
-(void)_createViewsForTransitionContext:(id)arg1 ;
-(void)updateWithProgress:(double)arg1 scale:(double)arg2 translation:(CGSize)arg3 anchor:(CGPoint)arg4 ;
-(void)setFinalFrame:(CGRect)arg1 ;
-(void)updateWithProgress:(double)arg1 translation:(CGSize)arg2 anchor:(CGPoint)arg3 ;
-(void)dealloc;
@end

