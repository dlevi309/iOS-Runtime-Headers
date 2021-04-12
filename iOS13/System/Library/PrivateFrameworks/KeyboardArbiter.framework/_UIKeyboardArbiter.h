/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;
@class NSObject, NSXPCListener, NSMutableArray, _UIKeyboardArbiterHandle, NSString, FBSWorkspace, FBSScene, BKSApplicationStateMonitor, UIDelayedAction, FBSSceneLayer, _UIKeyboardChangedInformation;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableArray* _clients;
	_UIKeyboardArbiterHandle* _activeHandle;
	_UIKeyboardArbiterHandle* _previouslyActiveHandle;
	int _currentFocusPID;
	NSString* _currentFocusSceneIdentifier;
	_UIKeyboardArbiterHandle* _keyboardFocusHandle;
	_UIKeyboardArbiterHandle* _commandFocusHandle;
	FBSWorkspace* _workspace;
	FBSScene* _scene;
	int _updateCounter;
	BKSApplicationStateMonitor* _stateMonitor;
	long long _lastEventSource;
	UIDelayedAction* _delayedClearLastEventSource;
	FBSSceneLayer* _sceneLayer;
	_UIKeyboardArbiterHandle* _disablingHandle;
	id<_UIKeyboardArbiterLink> _sceneLink;
	_UIKeyboardChangedInformation* _lastUpdate;

}

@property (nonatomic,retain) _UIKeyboardChangedInformation * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,readonly) id<_UIKeyboardArbiterLink> sceneLink;                  //@synthesize sceneLink=_sceneLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(_UIKeyboardChangedInformation *)lastUpdate;
-(void)setLastUpdate:(_UIKeyboardChangedInformation *)arg1 ;
-(id<_UIKeyboardArbiterLink>)sceneLink;
-(void)attemptConnection;
-(void)processWithPID:(int)arg1 foreground:(BOOL)arg2 suspended:(BOOL)arg3 ;
-(id)_descriptionWithScene:(BOOL)arg1 ;
-(void)retrieveClientDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)runOperations:(/*^block*/id)arg1 onHandler:(id)arg2 ;
-(void)scheduleWindowTimeout;
-(void)captureStateForDebug;
-(void)_findForHandle:(id)arg1 deepestHandleHandler:(/*^block*/id)arg2 checklist:(id)arg3 ;
-(void)_findForHandle:(id)arg1 deepestHandleHandler:(/*^block*/id)arg2 ;
-(id)handlerForPID:(int)arg1 ;
-(void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2 ;
-(void)handlerRequestedFocus:(id)arg1 ;
-(void)reevaluateHardwareKeyboardClient;
-(void)reevaluateSceneClientSettings;
-(BOOL)activateHandle:(id)arg1 ;
-(void)completeKeyboardStatusChangedFromHandler:(id)arg1 ;
-(void)_clearLastEventSource:(id)arg1 ;
-(void)signalEventSourceChanged:(long long)arg1 fromHandler:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateInterestedBundleIDs;
-(id)initWithLink:(id)arg1 ;
-(void)retrieveDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyHeightUpdated:(id)arg1 ;
-(void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(/*^block*/id)arg3 ;
-(void)checkHostingState;
-(BOOL)deactivateHandle:(id)arg1 ;
-(void)handleUnexpectedDeallocForHandler:(id)arg1 ;
-(void)updateSceneSettings:(id)arg1 ;
-(void)updateSuppression:(BOOL)arg1 ofPIDs:(id)arg2 ;
-(void)activateClients;
-(id)handlerForBundleID:(id)arg1 ;
-(id)handlerForToken:(id)arg1 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4 ;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 fromHandler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

