/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBViewControllerContextTransitioning <UIViewControllerContextTransitioning,SBViewControllerReversibleTransitioning,SBViewControllerPercentCompletionReporting,SBViewControllerTransitionRestartedReporting>
@required
-(BOOL)initiallyInteractive;
-(BOOL)isTransitioning;
-(BOOL)supportsCancelling;
-(BOOL)supportsRestarting;
-(void)restartTransition;
-(BOOL)wasPreviousPhaseInteractive;

@end

