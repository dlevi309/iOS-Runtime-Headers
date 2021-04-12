/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class SBUIAnimationController, FBDisplayLayoutTransition, NSString;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBUIAnimationController* _animation;
	FBDisplayLayoutTransition* _layoutTransition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_willBegin;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_performStandardPresentationAnimated:(BOOL)arg1 ;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
@end

