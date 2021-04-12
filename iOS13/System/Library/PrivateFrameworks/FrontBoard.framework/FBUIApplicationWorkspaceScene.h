/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBWorkspaceScene.h>

@class NSMutableSet, NSMutableArray, RBSAssertion;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {

	NSMutableSet* _allWatchdogs;
	NSMutableArray* _watchdogStack;
	unsigned long long _inFlightUpdateCount;
	RBSAssertion* _activeFGAssertion;
	RBSAssertion* _activeBGAssertion;
	RBSAssertion* _inactiveFGAssertion;
	unsigned char _lifecycleState;
	unsigned char _assertionState;
	BOOL _createResponseReceived;

}
-(void)dealloc;
-(id)initWithParentWorkspace:(id)arg1 host:(id)arg2 ;
-(void)_workspaceQueue_invalidate;
-(void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_workspaceQueue_cancelAllWatchdogTimers;
-(unsigned char)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(void)_workspaceQueue_incrementInFlightUpdates;
-(id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg1 transitionContext:(id)arg2 ;
-(void)_workspaceQueue_cancelWatchdogTimer:(id)arg1 ;
-(void)_workspaceQueue_decrementInFlightUpdates;
-(id)_workspaceQueue_acquireAssertionWithAttributes:(id)arg1 ;
-(void)_workspaceQueue_updateAssertion;
@end

