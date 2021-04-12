/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;
@class NSObject, NSXPCListener, NSMutableArray, _UIKeyboardArbiterHandle, FBSSceneIdentityToken, FBSWorkspace, FBSScene, BKSApplicationStateMonitor, FBSSceneLayer, _UIKeyboardChangedInformation, NSString;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableArray* _clients;
	_UIKeyboardArbiterHandle* _activeHandle;
	_UIKeyboardArbiterHandle* _previouslyActiveHandle;
	int _currentFocusPID;
	FBSSceneIdentityToken* _currentFocusSceneIdentity;
	_UIKeyboardArbiterHandle* _keyboardFocusHandle;
	_UIKeyboardArbiterHandle* _commandFocusHandle;
	FBSWorkspace* _workspace;
	FBSScene* _scene;
	int _updateCounter;
	BKSApplicationStateMonitor* _stateMonitor;
	long long _lastEventSource;
	FBSSceneLayer* _sceneLayer;
	_UIKeyboardArbiterHandle* _disablingHandle;
	id<_UIKeyboardArbiterLink> _sceneLink;
	_UIKeyboardChangedInformation* _lastUpdate;

}

@property (nonatomic,retain) _UIKeyboardChangedInformation * lastUpdate;                //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (__weak,readonly) _UIKeyboardArbiterHandle * activeHandle;                    //@synthesize activeHandle=_activeHandle - In the implementation block
@property (__weak,readonly) _UIKeyboardArbiterHandle * commandFocusHandle;              //@synthesize commandFocusHandle=_commandFocusHandle - In the implementation block
@property (nonatomic,readonly) id<_UIKeyboardArbiterLink> sceneLink;                    //@synthesize sceneLink=_sceneLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIKeyboardChangedInformation *)lastUpdate;
-(void)scheduleWindowTimeout;
-(void)_findForHandle:(id)arg1 deepestHandleHandler:(/*^block*/id)arg2 ;
-(void)updateSuppression:(BOOL)arg1 ofPID:(id)arg2 ;
-(_UIKeyboardArbiterHandle *)activeHandle;
-(void)setLastUpdate:(_UIKeyboardChangedInformation *)arg1 ;
-(void)processWithPID:(int)arg1 foreground:(BOOL)arg2 suspended:(BOOL)arg3 ;
-(void)setSuppressionCount:(int)arg1 ofPIDs:(id)arg2 ;
-(void)completeKeyboardStatusChangedFromHandler:(id)arg1 ;
-(void)notifyHeightUpdated:(id)arg1 ;
-(void)signalEventSourceChanged:(long long)arg1 fromHandler:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkHostingState;
-(void)updateInterestedBundleIDs;
-(id<_UIKeyboardArbiterLink>)sceneLink;
-(void)_findForHandle:(id)arg1 deepestHandleHandler:(/*^block*/id)arg2 checklist:(id)arg3 ;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 fromHandler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)activateHandle:(id)arg1 ;
-(void)captureStateForDebug;
-(id)_descriptionWithScene:(BOOL)arg1 ;
-(id)remoteSceneIdentity;
-(void)attemptConnection;
-(void)retrieveDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)description;
-(BOOL)deactivateHandle:(id)arg1 ;
-(void)reevaluateSceneClientSettings;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)activateClients;
-(void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(/*^block*/id)arg3 ;
-(void)updateSuppression:(BOOL)arg1 ofPIDs:(id)arg2 ;
-(void)updateSceneClientSettings:(id)arg1 ;
-(id)initWithLink:(id)arg1 ;
-(void)handlerRequestedFocus:(id)arg1 shouldStealKeyboard:(BOOL)arg2 ;
-(_UIKeyboardArbiterHandle *)commandFocusHandle;
-(void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2 ;
-(void)reevaluateHardwareKeyboardClient;
-(void)updateKeyboardSceneSettings;
-(id)handlerForBundleID:(id)arg1 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4 ;
-(void)resume;
-(void)handleUnexpectedDeallocForHandler:(id)arg1 ;
-(void)runOperations:(/*^block*/id)arg1 onHandler:(id)arg2 ;
-(id)handlerForPID:(int)arg1 ;
-(void)dealloc;
-(id)handlerForToken:(id)arg1 ;
-(void)retrieveClientDebugInformationWithCompletion:(/*^block*/id)arg1 ;
@end

