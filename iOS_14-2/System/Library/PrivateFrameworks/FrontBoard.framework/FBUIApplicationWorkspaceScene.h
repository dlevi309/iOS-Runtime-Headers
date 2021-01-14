/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBWorkspaceScene.h>

@protocol BSInvalidatable;
@class NSMutableSet, NSMutableArray;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {

	NSMutableSet* _allWatchdogs;
	NSMutableArray* _watchdogStack;
	unsigned long long _inFlightUpdateEvents;
	unsigned long long _inFlightLifecycleEvents;
	unsigned char _assertionState;
	id<BSInvalidatable> _workspaceAssertion;

}
-(void)_workspaceQueue_invalidate;
-(void)_workspaceQueue_cancelWatchdogTimer:(id)arg1 ;
-(id)initWithParentWorkspace:(id)arg1 host:(id)arg2 ;
-(void)_workspaceQueue_handleInvalidationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_workspaceQueue_incrementInFlightUpdatesForAction:(unsigned char)arg1 ;
-(void)_workspaceQueue_cancelAllWatchdogTimers;
-(void)_workspaceQueue_decrementInFlightUpdatesForAction:(unsigned char)arg1 ;
-(id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg1 transitionContext:(id)arg2 ;
-(void)_workspaceQueue_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_updateAssertion;
-(unsigned char)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(void)dealloc;
@end

