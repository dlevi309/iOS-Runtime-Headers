/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteKeyboardDistributedViewSource.h>
#import <UIKitCore/_UIKeyboardArbitrationClient.h>
#import <UIKitCore/_UIRemoteKeyboardControllerDelegate.h>

@class NSHashTable, FBSScene, NSMutableArray, UIView, NSString, UIWindowScene, NSMutableSet, UIScreen, NSXPCConnection, _UIKeyboardChangedInformation, NSArray, UIWindow;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate> {

	NSHashTable* _windowControllers;
	int _ignoreLayoutSubviews;
	FBSScene* _requiredScene;
	double _requiredLevel;
	NSMutableArray* _activePIDs;
	UIView* _keyboardSnapshot;
	BOOL _expectingInitialState;
	int _hostedCount;
	NSString* _focusedSceneIdentifier;
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
	BOOL _enableMultiscreenHack;
	BOOL _currentKeyboard;
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
@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (retain) _UIKeyboardChangedInformation * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (assign) BOOL currentKeyboard;                                      //@synthesize currentKeyboard=_currentKeyboard - In the implementation block
@property (retain,readonly) NSArray * currentHostedPIDs; 
@property (retain,readonly) FBSScene * requiredScene; 
@property (nonatomic,copy) NSString * focusedSceneIdentifier;                 //@synthesize focusedSceneIdentifier=_focusedSceneIdentifier - In the implementation block
@property (readonly) BOOL keyboardVisible; 
@property (readonly) UIWindow * keyboardWindow; 
@property (readonly) double intersectionHeight; 
@property (readonly) double iavHeight; 
@property (readonly) BOOL keyboardActive; 
@property (readonly) BOOL remoteKeyboardUndocked; 
@property (assign,nonatomic) BOOL isSnapshotting; 
@property (readonly) BOOL oldPathForSnapshot; 
@property (readonly) BOOL updatingHeight;                                     //@synthesize updatingHeight=_updatingHeight - In the implementation block
@property (readonly) BOOL handlingRemoteEvent;                                //@synthesize handlingRemoteEvent=_handlingRemoteEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldFence;                                //@synthesize shouldFence=_shouldFence - In the implementation block
@property (nonatomic,readonly) long long lastEventSource;                     //@synthesize lastEventSource=_lastEventSource - In the implementation block
@property (readonly) id<_UIKeyboardArbitration> proxy; 
@property (assign) BOOL disableBecomeFirstResponder; 
@property (assign,nonatomic) BOOL enableMultiscreenHack;                      //@synthesize enableMultiscreenHack=_enableMultiscreenHack - In the implementation block
+(BOOL)enabled;
+(id)serviceName;
+(id)sharedRemoteKeyboards;
+(BOOL)useSystemService;
+(id)createArbiterConnection;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(_UIKeyboardChangedInformation *)currentState;
-(id<_UIKeyboardArbitration>)proxy;
-(double)intersectionHeight;
-(double)iavHeight;
-(void)setSuppressingKeyboard:(BOOL)arg1 forScene:(id)arg2 ;
-(BOOL)keyboardActive;
-(void)performOnControllers:(/*^block*/id)arg1 ;
-(void)setCurrentState:(_UIKeyboardChangedInformation *)arg1 ;
-(UIWindow *)keyboardWindow;
-(void)willResume:(id)arg1 ;
-(BOOL)hasAnyHostedViews;
-(void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3 ;
-(BOOL)keyboardVisible;
-(BOOL)isSnapshotting;
-(BOOL)oldPathForSnapshot;
-(BOOL)handlingRemoteEvent;
-(void)prepareToMoveKeyboard:(CGRect)arg1 withIAV:(CGRect)arg2 isIAVRelevant:(BOOL)arg3 showing:(BOOL)arg4 forScene:(id)arg5 ;
-(BOOL)shouldAllowInputViewsRestoredForId:(id)arg1 ;
-(BOOL)updatingHeight;
-(BOOL)remoteKeyboardUndocked;
-(void)didSuspend:(id)arg1 ;
-(BOOL)isOnScreenRotating;
-(void)controllerDidLayoutSubviews:(id)arg1 ;
-(void)startConnection;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)sceneUpdated;
-(void)setIsSnapshotting:(BOOL)arg1 ;
-(void)completeMoveKeyboardForWindow:(id)arg1 ;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)registerController:(id)arg1 ;
-(void)unregisterController:(id)arg1 ;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)performOnDistributedControllers:(/*^block*/id)arg1 ;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)updateLastEventSource:(long long)arg1 ;
-(void)setShouldFence:(BOOL)arg1 ;
-(FBSScene *)requiredScene;
-(void)_lostWindow:(id)arg1 ;
-(void)setWindowEnabled:(BOOL)arg1 ;
-(void)checkConnection;
-(void)willResignActive:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)willAddDeactivationReason:(id)arg1 ;
-(void)didRemoveDeactivationReason:(id)arg1 ;
-(void)applicationResume:(id)arg1 ;
-(void)stopConnection;
-(void)resetSnapshotWithWindowCheck:(BOOL)arg1 ;
-(BOOL)didHandleKeyboardChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(BOOL)arg2 isLocalEvent:(BOOL)arg3 ;
-(void)cleanSuppression;
-(void)setDisableBecomeFirstResponder:(BOOL)arg1 ;
-(void)queue_failedConnection:(id)arg1 ;
-(BOOL)currentKeyboard;
-(NSArray *)currentHostedPIDs;
-(void)setCurrentKeyboard:(BOOL)arg1 ;
-(void)keyboardChangedCompleted;
-(NSString *)focusedSceneIdentifier;
-(void)setFocusedSceneIdentifier:(NSString *)arg1 ;
-(BOOL)disableBecomeFirstResponder;
-(BOOL)allowedToShowKeyboard;
-(void)reloadForSnapshotting;
-(void)setWindowEnabled:(BOOL)arg1 force:(BOOL)arg2 ;
-(BOOL)wantsToShowKeyboardForWindow:(id)arg1 ;
-(BOOL)wantsToShowKeyboardForViewServiceHostWindow:(id)arg1 ;
-(id)viewHostForWindow:(id)arg1 ;
-(Class)keyboardWindowClass;
-(BOOL)needsToShowKeyboardForWindow:(id)arg1 ;
-(BOOL)needsToShowKeyboardForViewServiceHostWindow:(id)arg1 ;
-(void)_performOnDistributedControllersExceptSelf:(/*^block*/id)arg1 ;
-(id)_activeScreen;
-(void)userSelectedProcessIdentifier:(int)arg1 sceneDeferringToken:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)userSelectedApp:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1 ;
-(void)queue_keyboardIAVChanged:(double)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)queue_sceneBecameFocused:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)queue_getDebugInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)queue_setKeyboardDisabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)queue_setLastEventSource:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)checkState;
-(id)prepareForHostedWindowWithScene:(id)arg1 ;
-(void)finishWithHostedWindow;
-(void)addHostedWindowView:(id)arg1 fromPID:(int)arg2 ;
-(void)forceKeyboardAway;
-(void)userSelectedSceneWithToken:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)peekApplicationEvent:(id)arg1 ;
-(void)restorePreservedInputViewsIfNecessary;
-(void)setEnableMultiscreenHack:(BOOL)arg1 ;
-(long long)lastEventSource;
-(BOOL)enableMultiscreenHack;
-(BOOL)shouldFence;
@end

