/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@class UIView, _UIViewControllerOneToOneTransitionContext, NSString;

@interface BNTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	_UIViewControllerOneToOneTransitionContext* _transitionContext;
	BOOL _explicitCompletionRequired;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitionCoordinator> transitionCoordinator; 
@property (assign,getter=isExplicitCompletionRequired,nonatomic) BOOL explicitCompletionRequired;                   //@synthesize explicitCompletionRequired=_explicitCompletionRequired - In the implementation block
@property (assign,nonatomic) CGRect fromStartFrame; 
@property (assign,nonatomic) CGRect fromEndFrame; 
@property (assign,nonatomic) CGRect toEndFrame; 
@property (assign,nonatomic) CGRect toStartFrame; 
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContextForTransitionOfViewController:(id)arg1 fromFrame:(CGRect)arg2 toFrame:(CGRect)arg3 inContainerView:(id)arg4 ;
+(id)transitionContextForTransitionFromViewController:(id)arg1 toViewController:(id)arg2 inContainerView:(id)arg3 ;
-(void)completeTransition:(BOOL)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)transitionWasCancelled;
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(id)viewForKey:(id)arg1 ;
-(CGRect)toStartFrame;
-(id)viewControllerForKey:(id)arg1 ;
-(CGAffineTransform)targetTransform;
-(CGRect)fromEndFrame;
-(void)setAnimated:(BOOL)arg1 ;
-(id)init;
-(void)__runAlongsideAnimations;
-(void)cancelInteractiveTransition;
-(BOOL)isInteractive;
-(CGRect)fromStartFrame;
-(UIView *)containerView;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)finishInteractiveTransition;
-(CGRect)toEndFrame;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(void)pauseInteractiveTransition;
-(void)performTransitionWithAnimator:(id)arg1 ;
-(void)setToEndFrame:(CGRect)arg1 ;
-(void)setExplicitCompletionRequired:(BOOL)arg1 ;
-(void)explictlyCompleteTransition:(BOOL)arg1 ;
-(void)setFromStartFrame:(CGRect)arg1 ;
-(void)setFromEndFrame:(CGRect)arg1 ;
-(void)setToStartFrame:(CGRect)arg1 ;
-(BOOL)isExplicitCompletionRequired;
@end

