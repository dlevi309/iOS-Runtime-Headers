/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSMutableArray, UIView, NSString;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	BOOL _transitionIsInFlight;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	UIView* _containerView;

}

@property (assign,nonatomic) UIView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(BOOL)isCancelled;
-(BOOL)isInterruptible;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)presentationStyle;
-(BOOL)isInteractive;
-(id)viewControllerForKey:(id)arg1 ;
-(double)percentComplete;
-(long long)completionCurve;
-(BOOL)isAnimated;
-(BOOL)isRotating;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(void)_runAlongsideAnimations;
-(void)_runAlongsideCompletionsAfterCommit;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(BOOL)arg2 systemCompletion:(BOOL)arg3 animation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_mainContext;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)initiallyInteractive;
-(CGAffineTransform)targetTransform;
-(void)_runAlongsideCompletions;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(id)_alongsideAnimations:(BOOL)arg1 ;
-(id)_alongsideCompletions:(BOOL)arg1 ;
-(double)completionVelocity;
-(void)_runAlongsideCompletionsAndClearAlongsideAnimations;
@end

