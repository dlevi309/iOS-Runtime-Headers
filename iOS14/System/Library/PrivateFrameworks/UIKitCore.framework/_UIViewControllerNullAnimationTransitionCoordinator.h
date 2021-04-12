/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(double)completionVelocity;
-(id)viewForKey:(id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(CGAffineTransform)targetTransform;
-(BOOL)initiallyInteractive;
-(double)transitionDuration;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isInterruptible;
-(void)_runAlongsideCompletions;
-(long long)completionCurve;
-(BOOL)isInteractive;
-(id)_alongsideAnimations:(BOOL)arg1 ;
-(id)_alongsideCompletions:(BOOL)arg1 ;
-(void)_runAlongsideCompletionsAndClearAlongsideAnimations;
-(UIView *)containerView;
-(id)_mainContext;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(void)_runAlongsideAnimations;
-(double)percentComplete;
-(void)_runAlongsideCompletionsAfterCommit;
-(BOOL)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(BOOL)arg2 systemCompletion:(BOOL)arg3 animation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isRotating;
-(BOOL)isCancelled;
@end

