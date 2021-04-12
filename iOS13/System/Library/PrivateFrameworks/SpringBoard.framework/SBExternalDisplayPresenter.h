/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class FBSDisplayLayoutPublisher, FBSDisplayIdentity, CADisplay, FBSDisplayConfiguration, SBApplication, SBApplicationSceneHandle, FBScene, BSAtomicSignal, NSObject, CADisplayMode, NSString, _UIRootWindow, SBSExternalDisplayLayoutElement;

@interface SBExternalDisplayPresenter : NSObject <SBSceneHandleObserver, BSInvalidatable> {

	FBSDisplayLayoutPublisher* _layoutPublisher;
	FBSDisplayIdentity* _identity;
	CADisplay* _caDisplay;
	BOOL _invalidated;
	FBSDisplayConfiguration* _currentConfiguration;
	FBSDisplayConfiguration* _currentReportedConfiguration;
	SBApplication* _foregroundApp;
	SBApplicationSceneHandle* _foregroundAppSceneHandle;
	FBScene* _foregroundAppScene;
	BSAtomicSignal* _foregroundAppSceneTransactionInvalidator;
	NSObject*<OS_dispatch_queue> _displayMutationQueue;
	unsigned long long _displayMutationEnqueuedCount;
	unsigned long long _displayMutationCompletedCount;
	CADisplayMode* _requestedMode;
	NSString* _requestedOverscanAdjustment;
	_UIRootWindow* _rootWindow;
	FBSDisplayConfiguration* _rootWindowConfiguration;
	SBApplicationSceneHandle* _presentationSceneHandle;
	FBScene* _presentationScene;
	BSAtomicSignal* _presentationSceneActivationInvalidator;
	BOOL _hasEnqueuedPresentationUpdate;
	BOOL _presentationSceneHasActivated;
	SBSExternalDisplayLayoutElement* _presentedLayoutElement;
	id<BSInvalidatable> _presentedLayoutElementAssertion;
	NSString* _preventIdleSleepReason;
	SBApplication* _preventIdleSleepApp;
	BOOL _preventIdleSleepPresenting;
	long long _powerMode;
	BSAtomicSignal* _idleOffTimerInvalidation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithLayoutPublisher:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)updateToConfiguration:(id)arg1 withForegroundApp:(id)arg2 ;
-(void)_setPreventIdleSleepForApp:(id)arg1 presenting:(BOOL)arg2 ;
-(id)_createUpdateTransaction;
-(void)_enqueuePresentationUpdate;
-(void)_ensureMode:(id)arg1 overscanCompensation:(long long)arg2 ;
-(void)_updateHostingIfNecessary;
@end

