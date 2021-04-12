/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVTransitionDelegate, UIViewControllerContextTransitioningEx;
#import <AVKit/AVKit-Structs.h>
@class AVPresentationContext, UIViewPropertyAnimator, NSMutableArray;

@interface AVTransition : NSObject {

	AVPresentationContext* _presentationContext;
	id<AVTransitionDelegate> _delegate;
	id<UIViewControllerContextTransitioningEx> _transitionContext;
	UIViewPropertyAnimator* _transitionAnimator;
	UIViewPropertyAnimator* _clientAnimator;
	NSMutableArray* _allAnimators;

}

@property (nonatomic,__weak,readonly) id<UIViewControllerContextTransitioningEx> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * transitionAnimator;                                      //@synthesize transitionAnimator=_transitionAnimator - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * clientAnimator;                                          //@synthesize clientAnimator=_clientAnimator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allAnimators;                                                    //@synthesize allAnimators=_allAnimators - In the implementation block
@property (nonatomic,retain) AVPresentationContext * presentationContext;                                        //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) double transitionAnimatorProgress; 
@property (assign,nonatomic,__weak) id<AVTransitionDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AVTransitionDelegate>)delegate;
-(void)setDelegate:(id<AVTransitionDelegate>)arg1 ;
-(double)duration;
-(id<UIViewControllerContextTransitioningEx>)transitionContext;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition;
-(void)pauseInteractiveTransition;
-(AVPresentationContext *)presentationContext;
-(id)initWithTransitionContext:(id)arg1 ;
-(double)transitionAnimatorProgress;
-(void)_presentationTransitionWillBegin;
-(void)_dismissalTransitionWillBegin;
-(void)updateWithPercentComplete:(double)arg1 scale:(double)arg2 translation:(CGPoint)arg3 rotation:(double)arg4 ;
-(void)_animateFinishInteractiveTransition;
-(void)_freezeDismissingViewForFinishing;
-(void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
-(void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
-(void)addRunAlongsideAnimationsIfNeeded;
-(void)_presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_startOrContinueAnimatorsReversed:(BOOL)arg1 ;
-(CGRect)_initialFrameForPresentedView;
-(CGRect)_finalFrameForPresentedView;
-(CGAffineTransform)_transformForScale:(double)arg1 translation:(CGPoint)arg2 rotation:(double)arg3 locationInWindow:(CGPoint)arg4 sourceRectInContainerView:(CGRect)arg5 ;
-(void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3 ;
-(CGRect)_sourceViewFrameInContainerView;
-(void)setPresentationContext:(AVPresentationContext *)arg1 ;
-(UIViewPropertyAnimator *)transitionAnimator;
-(UIViewPropertyAnimator *)clientAnimator;
-(NSMutableArray *)allAnimators;
@end

