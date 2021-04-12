/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(double)duration;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(_UIViewControllerOneToOneTransitionContext *)transitionContext;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(UIViewController *)viewController;
-(void)setPreperation:(id)arg1 ;
-(void)setAnimator:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(void)animate;
-(CGRect)endFrame;
-(NSMutableDictionary *)stash;
-(void)animateInteractively;
-(void)finishInteractiveAnimation;
-(void)cancelInteractiveAnimation;
-(void)updateInteractiveProgress:(double)arg1 ;
-(CGRect)startFrame;
-(id)animator;
-(void)_updateTransitionContext;
-(id)preperation;
@end

