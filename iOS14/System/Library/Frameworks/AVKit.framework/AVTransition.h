/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)completeTransition:(BOOL)arg1 ;
-(id<AVTransitionDelegate>)delegate;
-(id<UIViewControllerContextTransitioningEx>)transitionContext;
-(AVPresentationContext *)presentationContext;
-(void)cancelInteractiveTransition;
-(NSMutableArray *)allAnimators;
-(void)setDelegate:(id<AVTransitionDelegate>)arg1 ;
-(id)initWithTransitionContext:(id)arg1 ;
-(double)transitionAnimatorProgress;
-(void)_presentationTransitionWillBegin;
-(void)_dismissalTransitionWillBegin;
-(void)updateWithPercentComplete:(double)arg1 scale:(double)arg2 translation:(CGPoint)arg3 rotation:(double)arg4 ;
-(void)_animateFinishInteractiveTransition;
-(void)_freezeDismissingViewForFinishing;
-(void)_dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
-(void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
-(void)addRunAlongsideAnimationsIfNeeded;
-(void)_presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_startOrContinueAnimatorsReversed:(BOOL)arg1 ;
-(CGRect)_initialFrameForPresentedView;
-(CGRect)_finalFrameForPresentedView;
-(CGAffineTransform)_transformForScale:(double)arg1 translation:(CGPoint)arg2 rotation:(double)arg3 locationInWindow:(CGPoint)arg4 sourceRectInContainerView:(CGRect)arg5 ;
-(void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3 ;
-(CGRect)_sourceViewFrameInContainerView;
-(UIViewPropertyAnimator *)clientAnimator;
-(void)startInteractiveTransition;
-(void)finishInteractiveTransition;
-(UIViewPropertyAnimator *)transitionAnimator;
-(void)setPresentationContext:(AVPresentationContext *)arg1 ;
-(double)duration;
-(void)pauseInteractiveTransition;
-(void)dealloc;
@end

