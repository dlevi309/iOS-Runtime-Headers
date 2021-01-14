/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPropertyAnimator.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>
#import <UIKit/UIViewControllerTransitionCoordinatorContext.h>

@class UIView, NSMutableArray, NSString;

@interface _UIPanelCoordinatingAnimator : UIViewPropertyAnimator <UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext> {

	BOOL _wasCancelled;
	BOOL _isInStartAnimation;
	NSMutableArray* _clientCompletions;
	NSMutableArray* _lateAnimations;
	UIView* _containerView;

}

@property (assign,nonatomic,__weak) UIView * containerView;                        //@synthesize containerView=_containerView - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_runCompletions:(long long)arg1 finished:(BOOL)arg2 ;
-(void)stopAnimation:(BOOL)arg1 ;
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(double)completionVelocity;
-(void)_sendPanelCoordinationCompletions;
-(id)viewForKey:(id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(CGAffineTransform)targetTransform;
-(void)startAnimation;
-(BOOL)initiallyInteractive;
-(double)transitionDuration;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(long long)completionCurve;
-(BOOL)isInteractive;
-(UIView *)containerView;
-(double)percentComplete;
-(BOOL)isCancelled;
@end

