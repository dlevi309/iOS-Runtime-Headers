/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteKeyboardDistributedViewSource.h>
#import <UIKitCore/_UIKeyboardArbitrationClient.h>
#import <UIKitCore/_UIRemoteKeyboardControllerDelegate.h>
#import <UIKitCore/_UIRemoteKeyboardsEventObserverDelegate.h>
#import <UIKitCore/_UIAssertionControllerSubject.h>

@class NSHashTable, FBSScene, NSMutableArray, UIView, FBSSceneIdentityToken, UIWindowScene, NSMutableSet, UIScreen, NSMapTable, _UIRemoteKeyboardsEventObserver, _UIAssertionController, NSXPCConnection, _UIKeyboardChangedInformation, NSString, NSArray, UIRemoteKeyboardWindow;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIAssertionControllerSubject> {

	NSHashTable* _windowControllers;
	int _ignoreLayoutSubviews;
	FBSScene* _requiredScene;
	double _requiredLevel;
	NSMutableArray* _activePIDs;
	UIView* _keyboardSnapshot;
	BOOL _expectingInitialState;
	int _hostedCount;
	FBSSceneIdentityToken* _focusedSceneIdentity;
	BOOL _hadFocusBeforeOverlay;
	UIWindowScene* _suppressedScene;
	BOOL _expectedSuppression;
	int _externalSuppression;
	int _recursionCheck;
	NSMutableSet* _pendingKeyboardGrabs;
	BOOL _takingSnapshot;
	BOOL _windowEnabled;
	UIScreen* _lastScreen;
	BOOL _disablingKeyboard;
	double _iavHeight;
	NSMapTable* _minimumKeyboardHeights;
	_UIRemoteKeyboardsEventObserver* _eventObserver;
	long long _keyboardSource;
	_UIAssertionController* _assertionController;
	BOOL _enableMultiscreenHack;
	BOOL _currentKeyboard;
	BOOL _didSignalKeyboardChangedForCurrentKeyboard;
	BOOL _updatingKeyWindow;
	BOOL _updatingHeight;
	BOOL _handlingRemoteEvent;
	BOOL _shouldFence;
	long long _lastEventSource;
	NSXPCConnection* _connection;
	_UIKeyboardChangedInformation* _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSXPCConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (retain) _UIKeyboardChangedInformation * currentState;                      //@synthesize currentState=_currentState - In the implementation block
@property (assign) BOOL currentKeyboard;                                              //@synthesize currentKeyboard=_currentKeyboard - In the implementation block
@property (retain,readonly) NSArray * currentHostedPIDs; 
@property (retain,readonly) FBSScene * requiredScene; 
@property (nonatomic,copy) FBSSceneIdentityToken * focusedSceneIdentity;              //@synthesize focusedSceneIdentity=_focusedSceneIdentity - In the implementation block
@property (assign) BOOL didSignalKeyboardChangedForCurrentKeyboard;                   //@synthesize didSignalKeyboardChangedForCurrentKeyboard=_didSignalKeyboardChangedForCurrentKeyboard - In the implementation block
@property (getter=isUpdatingKeyWindow) BOOL updatingKeyWindow;                        //@synthesize updatingKeyWindow=_updatingKeyWindow - In the implementation block
@property (readonly) BOOL keyboardVisible; 
@property (readonly) UIRemoteKeyboardWindow * keyboardWindow; 
@property (readonly) double iavHeight; 
@property (readonly) BOOL keyboardActive; 
@property (readonly) BOOL remoteKeyboardUndocked; 
@property (assign,nonatomic) BOOL isSnapshotting; 
@property (readonly) BOOL oldPathForSnapshot; 
@property (readonly) BOOL updatingHeight;                                             //@synthesize updatingHeight=_updatingHeight - In the implementation block
@property (readonly) BOOL handlingRemoteEvent;                                        //@synthesize handlingRemoteEvent=_handlingRemoteEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldFence;                                        //@synthesize shouldFence=_shouldFence - In the implementation block
@property (nonatomic,readonly) long long lastEventSource;                             //@synthesize lastEventSource=_lastEventSource - In the implementation block
@property (nonatomic,readonly) CGRect keyboardFrameIncludingRemoteIAV; 
@property (readonly) id<_UIKeyboardArbitration> proxy; 
@property (assign) BOOL disableBecomeFirstResponder; 
@property (assign,nonatomic) BOOL enableMultiscreenHack;                              //@synthesize enableMultiscreenHack=_enableMultiscreenHack - In the implementation block
+(BOOL)enabled;
+(id)createArbiterConnection;
+(BOOL)useSystemService;
+(id)sharedRemoteKeyboards;
+(id)serviceName;
-(void)willResume:(id)arg1 ;
-(void)setCurrentState:(_UIKeyboardChangedInformation *)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)needsToShowKeyboardForViewServiceHostWindow:(id)arg1 ;
-(void)reloadForSnapshotting;
-(void)queue_keyboardIAVChanged:(double)arg1 onComplete:(/*^block*/id)arg2 ;
-(BOOL)shouldFence;
-(void)cleanSuppression;
-(BOOL)needsToShowKeyboardForWindow:(id)arg1 ;
-(BOOL)shouldAllowInputViewsRestoredForId:(id)arg1 ;
-(BOOL)allowedToShowKeyboard;
-(BOOL)updatingHeight;
-(void)peekApplicationEvent:(id)arg1 ;
-(void)_postInputSourceDidChangeNotification;
-(id<_UIKeyboardArbitration>)proxy;
-(void)updateLastScreen:(id)arg1 ;
-(void)unregisterController:(id)arg1 ;
-(void)addHostedWindowView:(id)arg1 fromPID:(int)arg2 forScene:(id)arg3 ;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(FBSScene *)requiredScene;
-(id)init;
-(FBSSceneIdentityToken *)focusedSceneIdentity;
-(_UIKeyboardChangedInformation *)currentState;
-(void)keyboardChangedCompleted;
-(void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3 ;
-(BOOL)isUpdatingKeyWindow;
-(BOOL)isSnapshotting;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)queue_getDebugInfoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)disableBecomeFirstResponder;
-(void)keyWindowWillChange:(id)arg1 ;
-(id)_activeScreen;
-(void)_lostWindow:(id)arg1 ;
-(void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)keyWindowDidChange:(id)arg1 ;
-(void)didRemoveDeactivationReason:(id)arg1 ;
-(void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)registerController:(id)arg1 ;
-(void)queue_sceneBecameFocused:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateProxySceneIdentity;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(BOOL)_sceneFocusUpdatePermittedForWindow:(id)arg1 ;
-(void)queue_setLastEventSource:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)didSignalKeyboardChangedForCurrentKeyboard;
-(void)willResignActive:(id)arg1 ;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)refreshWithLocalMinimumKeyboardHeight:(double)arg1 forScene:(id)arg2 ;
-(void)prepareToMoveKeyboard:(CGRect)arg1 withIAV:(CGRect)arg2 isIAVRelevant:(BOOL)arg3 showing:(BOOL)arg4 notifyRemote:(BOOL)arg5 forScene:(id)arg6 ;
-(BOOL)hasAnyHostedViews;
-(void)checkConnection;
-(BOOL)wantsToShowKeyboardForWindow:(id)arg1 ;
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(BOOL)assertionActivationStateForType:(unsigned long long)arg1 ;
-(BOOL)currentKeyboard;
-(void)checkState;
-(void)userSelectedApp:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)assertionActivationStateChangedToState:(BOOL)arg1 forType:(unsigned long long)arg2 ;
-(void)restorePreservedInputViewsIfNecessary;
-(void)stopConnection;
-(id)viewHostForWindow:(id)arg1 ;
-(BOOL)hasLocalMinimumKeyboardHeightForScene:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(NSXPCConnection *)connection;
-(BOOL)remoteKeyboardUndocked;
-(long long)lastEventSource;
-(void)_updateEventSource:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)applicationResume:(id)arg1 ;
-(void)_updateFocusedSceneIdentityIfPermittedForWindow:(id)arg1 force:(BOOL)arg2 ;
-(void)queue_setKeyboardDisabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setCurrentKeyboard:(BOOL)arg1 ;
-(UIRemoteKeyboardWindow *)keyboardWindow;
-(void)startConnection;
-(void)setSuppressingKeyboard:(BOOL)arg1 forScene:(id)arg2 ;
-(void)updateFocusedIdentityIfPermittedForHostWindow:(id)arg1 servicePID:(int)arg2 ;
-(double)iavHeight;
-(CGRect)keyboardFrameIncludingRemoteIAV;
-(void)sceneUpdated;
-(BOOL)currentStateHasEqualRect:(CGRect)arg1 andIAVPosition:(CGRect)arg2 ;
-(void)setDisableBecomeFirstResponder:(BOOL)arg1 ;
-(BOOL)keyboardActive;
-(void)queue_failedConnection:(id)arg1 ;
-(BOOL)didHandleKeyboardChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(BOOL)arg2 isLocalEvent:(BOOL)arg3 ;
-(void)resetSnapshotWithWindowCheck:(BOOL)arg1 ;
-(void)_performOnDistributedControllersExceptSelf:(/*^block*/id)arg1 ;
-(void)finishWithHostedWindow;
-(void)setFocusedSceneIdentity:(FBSSceneIdentityToken *)arg1 ;
-(void)forceKeyboardAway;
-(void)performOnDistributedControllers:(/*^block*/id)arg1 ;
-(void)setEnableMultiscreenHack:(BOOL)arg1 ;
-(void)setUpdatingKeyWindow:(BOOL)arg1 ;
-(id)prepareForHostedWindowWithScene:(id)arg1 ;
-(BOOL)isOnScreenRotating;
-(Class)keyboardWindowClass;
-(NSArray *)currentHostedPIDs;
-(void)setDidSignalKeyboardChangedForCurrentKeyboard:(BOOL)arg1 ;
-(void)setShouldFence:(BOOL)arg1 ;
-(BOOL)oldPathForSnapshot;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)setIsSnapshotting:(BOOL)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)keyboardVisible;
-(double)intersectionHeightForWindowScene:(id)arg1 ;
-(BOOL)enableMultiscreenHack;
-(void)setWindowEnabled:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)updateCurrentState:(id)arg1 ;
-(BOOL)handlingRemoteEvent;
-(void)setWindowEnabled:(BOOL)arg1 ;
-(void)completeMoveKeyboardForWindow:(id)arg1 ;
-(void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)controllerDidLayoutSubviews:(id)arg1 ;
-(id)vendKeyboardSuppressionAssertionForReason:(id)arg1 ;
-(void)willAddDeactivationReason:(id)arg1 ;
-(BOOL)wantsToShowKeyboardForViewServiceHostWindow:(id)arg1 ;
-(void)performOnControllers:(/*^block*/id)arg1 ;
-(void)queue_activeProcessResignWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

