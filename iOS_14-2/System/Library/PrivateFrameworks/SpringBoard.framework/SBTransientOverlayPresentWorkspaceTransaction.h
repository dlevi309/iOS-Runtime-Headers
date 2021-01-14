/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_willInterruptWithReason:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)_willBegin;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_didComplete;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(void)_performStandardPresentationAnimated:(BOOL)arg1 ;
@end

