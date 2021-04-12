/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSMutableDictionary, _UIViewControllerOneToOneTransitionContext, UIPercentDrivenInteractiveTransition, UIView, UIViewController, NSString;

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

	NSMutableDictionary* _stash;
	_UIViewControllerOneToOneTransitionContext* _transitionContext;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;
	double _duration;
	/*^block*/id _preperation;
	/*^block*/id _animator;
	/*^block*/id _completion;
	UIView* _containerView;
	UIViewController* _viewController;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,retain,readonly) _UIViewControllerOneToOneTransitionContext * transitionContext; 
@property (assign,nonatomic) double duration;                                                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id preperation;                                                                         //@synthesize preperation=_preperation - In the implementation block
@property (nonatomic,copy) id animator;                                                                            //@synthesize animator=_animator - In the implementation block
@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                                                                    //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                                                                      //@synthesize endFrame=_endFrame - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * stash; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animator;
-(void)setAnimator:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)updateInteractiveProgress:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveAnimation;
-(_UIViewControllerOneToOneTransitionContext *)transitionContext;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)finishInteractiveAnimation;
-(void)_updateTransitionContext;
-(id)completion;
-(UIViewController *)viewController;
-(UIView *)containerView;
-(void)animate;
-(id)preperation;
-(void)setPreperation:(id)arg1 ;
-(NSMutableDictionary *)stash;
-(CGRect)startFrame;
-(void)animateInteractively;
-(double)duration;
-(void)dealloc;
@end

