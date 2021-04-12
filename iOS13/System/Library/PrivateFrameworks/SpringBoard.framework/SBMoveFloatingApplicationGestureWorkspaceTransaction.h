/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransaction.h>

@class SBApplicationSceneUpdateTransaction, NSMutableDictionary;

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {

	BOOL _tryPreemptiveFloatingApplicationActivation;
	BOOL _didAddActivateFloatingApplicationTransaction;
	SBApplicationSceneUpdateTransaction* _activateFloatingApplicationTransaction;
	NSMutableDictionary* _statusBarAssertions;
	CGRect _initialFloatingApplicationFrame;

}
-(void)_begin;
-(void)_didComplete;
-(long long)_gestureType;
-(void)_invalidateStatusBarAssertions;
-(void)_beginWithGesture:(id)arg1 ;
-(void)_updateWithGesture:(id)arg1 ;
-(void)_finishWithGesture:(id)arg1 ;
-(void)_acquireStatusBarAssertions;
-(void)_startSuppressingKeyboardForFloatingApplication;
-(void)_stopSuppressingKeyboard;
-(void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)arg1 ;
-(void)_updateStatusBarAssertionsForGesture;
-(void)_performBlockWithLiveContentOverlayUpdatesSuspended:(/*^block*/id)arg1 ;
-(void)_updateStatusBarAssertionsForLayoutState;
-(id)_transitionRequestForPreemptiveFloatingApplicationActivation;
@end

