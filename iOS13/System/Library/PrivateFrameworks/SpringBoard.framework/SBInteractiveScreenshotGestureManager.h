/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/SBInteractiveScreenshotCommitWorkspaceTransactionDelegate.h>
#import <libobjc.A.dylib/SBInteractiveScreenshotGestureRootViewControllerDelegate.h>
#import <libobjc.A.dylib/SBMainDisplayWorkspaceAppInteractionEventSourceObserving.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>

@protocol BSInvalidatable, SBInteractiveScreenshotGestureManagerDelegate;
@class NSUUID, SBMainDisplayWorkspaceAppInteractionEventSource, SBAsynchronousRenderingAssertion, SBInteractiveScreenshotScreenEdgePanGestureRecognizer, SBInteractiveScreenshotCommitWorkspaceTransaction, NSMutableSet, BSMonotonicReferenceTime, NSMutableArray, UIScreen, NSMutableDictionary, SBInteractiveScreenshotSettings, FBScene, SBSystemGestureManager, NSHashTable, SBMainWorkspace, NSString;

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate> {

	NSUUID* _activeGestureSessionID;
	SBMainDisplayWorkspaceAppInteractionEventSource* _appInteractionEventSource;
	SBAsynchronousRenderingAssertion* _asynchronousRenderingAssertion;
	SBInteractiveScreenshotScreenEdgePanGestureRecognizer* _bottomLeftGestureRecognizer;
	SBInteractiveScreenshotScreenEdgePanGestureRecognizer* _bottomRightGestureRecognizer;
	SBInteractiveScreenshotCommitWorkspaceTransaction* _commitTransaction;
	id<BSInvalidatable> _commitTransactionDisableGestureAssertion;
	NSMutableSet* _disableGestureAssertions;
	BOOL _hasInitiatedCommit;
	BOOL _isCapturingScreenshot;
	BSMonotonicReferenceTime* _lastApplicationTouchReferenceTime;
	NSMutableArray* _pendingCommitWorkspaceTransactionBlocks;
	UIScreen* _screen;
	NSMutableDictionary* _sessionIDToSession;
	SBInteractiveScreenshotSettings* _settings;
	FBScene* _sourceScene;
	SBSystemGestureManager* _systemGestureManager;
	NSHashTable* _weakReusableGestureRootWindows;
	SBMainWorkspace* _workspace;
	id<SBInteractiveScreenshotGestureManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBInteractiveScreenshotGestureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SBInteractiveScreenshotGestureManagerDelegate>)delegate;
-(void)setDelegate:(id<SBInteractiveScreenshotGestureManagerDelegate>)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_invalidateSessionID:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(id)initWithScreen:(id)arg1 sourceScene:(id)arg2 workspace:(id)arg3 systemGestureManager:(id)arg4 appInteractionEventSource:(id)arg5 ;
-(BOOL)handleRemoteTransientOverlayPresentationRequest:(id)arg1 forSession:(id)arg2 ;
-(id)acquireDisableGestureAssertionWithReason:(id)arg1 ;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2 ;
-(void)interactiveScreenshotGestureRootViewController:(id)arg1 gestureDidCompleteWithIntent:(long long)arg2 ;
-(void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg1 ;
-(void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg1 ;
-(void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg1 ;
-(void)_handleInteractiveScreenshotGesture:(id)arg1 ;
-(void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg1 ;
-(id)_screenshotPresentationOptions;
-(void)_performCommitWorkspaceTransactionBlock:(/*^block*/id)arg1 ;
@end

