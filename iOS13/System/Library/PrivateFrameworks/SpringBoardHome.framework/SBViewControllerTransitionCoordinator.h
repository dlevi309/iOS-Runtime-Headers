/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinator,SBViewControllerTransitionCoordinatorContext>
@required
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1;
-(BOOL)requiresCancellableAnimations;
-(BOOL)requiresInteractiveAnimations;
-(BOOL)requiresRestartableAnimations;
-(void)addTransitionContinuation:(/*^block*/id)arg1;

@end

