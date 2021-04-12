/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/FBSSceneDelegate.h>

@protocol UISceneDelegate;
@class UISceneSession, NSString, UISceneActivationConditions, FBSScene, NSArray, NSDictionary, _UISceneLifecycleMonitor, FBSSceneSettings, NSMutableDictionary, NSPointerArray, NSNumber, UIApplicationSceneSettings, UIApplicationSceneClientSettings, BKSAnimationFenceHandle;

@interface UIScene : UIResponder <FBSSceneDelegate> {

	UISceneSession* _session;
	id<UISceneDelegate> _delegate;
	NSString* _title;
	UISceneActivationConditions* _activationConditions;
	FBSScene* _scene;
	NSArray* _initialSettingsDiffActions;
	NSArray* _finalSettingsDiffActions;
	NSArray* _initialSceneBSActionHandlers;
	NSArray* _finalSceneBSActionHandlers;
	NSDictionary* _additionalSettingsDiffActions;
	NSArray* _flattenedDiffActions;
	NSDictionary* _additionalSceneBSActionHandlers;
	NSArray* _flattenedActionsHandlers;
	NSDictionary* _builtinComponents;
	NSDictionary* _registeredComponents;
	_UISceneLifecycleMonitor* _lifecycleMonitor;
	FBSSceneSettings* _overrideSettings;
	NSMutableDictionary* _postSettingsUpdateResponseBlocks;
	UIScene* _settingsScene;
	NSPointerArray* _inheritingScenes;
	NSString* _identifier;
	FBSSceneSettings* _oldSettings;
	struct {
		unsigned delegateIsResponder : 1;
		unsigned delegateSupportsWillConnect : 1;
		unsigned delegateSupportsDidDisconnect : 1;
		unsigned delegateSupportsDidBecomeActive : 1;
		unsigned delegateSupportsWillResignActive : 1;
		unsigned delegateSupportsWillEnterForeground : 1;
		unsigned delegateSupportsDidEnterBackground : 1;
		unsigned isUIKitManaged : 1;
		unsigned isInternal : 1;
		unsigned hostsWindows : 1;
		unsigned hasInvalidated : 1;
		unsigned allowOverrideSettings : 1;
		unsigned isProcessingUpdateResponseBlocks : 1;
		unsigned readyForSuspend : 1;
		unsigned isMediaParticipant : 1;
	}  _sceneFlags;
	BOOL _respondingToLifecycleEvent;
	NSNumber* __cachedInterfaceOrientation;

}

@property (nonatomic,readonly) NSArray * _settingsDiffActions; 
@property (nonatomic,readonly) NSArray * _sceneBSActionHandlers; 
@property (nonatomic,readonly) NSArray * _windows; 
@property (nonatomic,readonly) NSArray * _visibleWindows; 
@property (nonatomic,readonly) NSArray * _allWindows; 
@property (nonatomic,readonly) double _systemMinimumMargin; 
@property (assign,setter=_setSettingsScene:,nonatomic,__weak) UIScene * _settingsScene; 
@property (nonatomic,readonly) NSArray * _interitingScenes; 
@property (nonatomic,readonly) FBSSceneSettings * _oldSettings;                                                                                             //@synthesize oldSettings=_oldSettings - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * _effectiveSettings; 
@property (nonatomic,readonly) FBSSceneSettings * _synthesizedSettings; 
@property (nonatomic,readonly) UIApplicationSceneSettings * _effectiveUISettings; 
@property (nonatomic,readonly) NSArray * _sceneComponents; 
@property (nonatomic,readonly) _UISceneLifecycleMonitor * _lifecycleMonitor; 
@property (nonatomic,readonly) BOOL _hasLifecycle; 
@property (assign,setter=_setIsRespondingToLifecycleEvent:,nonatomic) BOOL _respondingToLifecycleEvent;                                                     //@synthesize respondingToLifecycleEvent=_respondingToLifecycleEvent - In the implementation block
@property (getter=_isActive,nonatomic,readonly) BOOL _active; 
@property (getter=_suspendedEventsOnly,nonatomic,readonly) BOOL _suspendedEventsOnly; 
@property (getter=_runningInTaskSwitcher,nonatomic,readonly) BOOL _runningInTaskSwitcher; 
@property (getter=_suspendedUnderLock,nonatomic,readonly) BOOL _suspendedUnderLock; 
@property (setter=_setCachedInterfaceOrientation:,getter=_cachedInterfaceOrientation,nonatomic,retain) NSNumber * _cachedInterfaceOrientation;              //@synthesize _cachedInterfaceOrientation=__cachedInterfaceOrientation - In the implementation block
@property (getter=_isInternal,nonatomic,readonly) BOOL _internal; 
@property (getter=_isUIKitManaged,nonatomic,readonly) BOOL _isUIKitManaged; 
@property (nonatomic,readonly) BOOL _hostsWindows; 
@property (nonatomic,readonly) BOOL _readyForSuspend; 
@property (nonatomic,readonly) BOOL _eligableForSuspend; 
@property (nonatomic,readonly) UIApplicationSceneClientSettings * _effectiveUIClientSettings; 
@property (nonatomic,readonly) BOOL _hasInvaidated; 
@property (setter=_setActivationConditions:,nonatomic,retain) UISceneActivationConditions * _activationConditions; 
@property (getter=_FBSScene,nonatomic,readonly) FBSScene * _FBSScene; 
@property (assign,setter=_setInvolvedInMediaPlayback:,nonatomic) BOOL _involvedInMediaPlayback; 
@property (nonatomic,readonly) NSString * _identifier; 
@property (nonatomic,readonly) BKSAnimationFenceHandle * _synchronizedDrawingFence; 
@property (nonatomic,readonly) UISceneSession * session; 
@property (nonatomic,retain) id<UISceneDelegate> delegate; 
@property (nonatomic,readonly) long long activationState; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UISceneActivationConditions * activationConditions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sceneForFBSScene:(id)arg1 ;
+(BOOL)_hostsWindows;
+(id)_sceneForFBSScene:(id)arg1 create:(BOOL)arg2 withSession:(id)arg3 connectionOptions:(id)arg4 ;
+(Class)_implicitSceneFilterClass;
+(id)_scenesIncludingInternal:(BOOL)arg1 ;
+(id)_synchronizedDrawingFence;
+(void)_synchronizeDrawingWithFence:(id)arg1 ;
+(void*)_unsafeScenesIncludingInternal;
+(long long)_activationStateFromSceneSettings:(id)arg1 ;
+(id)_sceneForFBSScene:(id)arg1 usingPredicate:(id)arg2 ;
+(void)_registerSceneComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3 ;
+(void)_enumerateAllWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
+(id)_mostActiveScene;
+(id)_connectionOptionsForScene:(id)arg1 withSpecification:(id)arg2 transitionContext:(id)arg3 actions:(id)arg4 sceneSession:(id)arg5 ;
+(id)_persistenceIdentifierForScene:(id)arg1 ;
+(BOOL)_activeSettingsTransaction;
+(void)_setActiveSettingsTransaction:(BOOL)arg1 ;
+(void)_enqueuePostSettingUpdateTransactionBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)_invalidate;
-(id<UISceneDelegate>)delegate;
-(void)setDelegate:(id<UISceneDelegate>)arg1 ;
-(NSString *)_identifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isActive;
-(UISceneSession *)session;
-(id)_shortDescription;
-(NSArray *)_windows;
-(id)nextResponder;
-(BOOL)_hostsWindows;
-(UIApplicationSceneClientSettings *)_effectiveUIClientSettings;
-(BOOL)_hasLifecycle;
-(_UISceneLifecycleMonitor *)_lifecycleMonitor;
-(id)_currentOpenApplicationEndpoint;
-(void)_updateUIClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(UISceneActivationConditions *)activationConditions;
-(void)setActivationConditions:(UISceneActivationConditions *)arg1 ;
-(void)_refreshActivationConditions;
-(FBSScene *)_FBSScene;
-(void)_calculateFlattenedDiffActions;
-(void)_calculateFlattenedActionsHandlers;
-(void)_registerSceneComponent:(id)arg1 forKey:(id)arg2 ;
-(UIApplicationSceneSettings *)_effectiveUISettings;
-(BOOL)_readyForSuspend;
-(BOOL)_connected;
-(BKSAnimationFenceHandle *)_synchronizedDrawingFence;
-(BOOL)_shouldAllowFencing;
-(void)_synchronizeDrawingWithFence:(id)arg1 ;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 stopped:(BOOL*)arg4 withBlock:(/*^block*/id)arg5 ;
-(void)_prepareForSuspend;
-(void)_setIsRespondingToLifecycleEvent:(BOOL)arg1 ;
-(CGRect)_referenceBounds;
-(NSArray *)_allWindows;
-(void)_computeMetricsForWindows:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(void)_initializeSceneComponents;
-(void)_readySceneForConnection;
-(void)_makeKeyAndVisibleIfNeeded;
-(BOOL)_isInternal;
-(void)_removeInheritingScene:(id)arg1 ;
-(void)_addInheritingScene:(id)arg1 ;
-(FBSSceneSettings *)_effectiveSettings;
-(void)_guardedSetOverrideSettings:(id)arg1 ;
-(void)_enableOverrideSettingsForActions:(/*^block*/id)arg1 ;
-(long long)activationState;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 fromTransitionContext:(id)arg3 ;
-(void)_setCachedInterfaceOrientation:(id)arg1 ;
-(NSArray *)_settingsDiffActions;
-(void)_emitSceneSettingsUpdateResponseForCompletion:(/*^block*/id)arg1 afterSceneUpdateWork:(/*^block*/id)arg2 ;
-(NSArray *)_sceneBSActionHandlers;
-(UIScene *)_settingsScene;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UISceneActivationConditions *)_activationConditions;
-(void)_setActivationConditions:(id)arg1 ;
-(void)_registerSettingsDiffActionArray:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterSettingsDiffActionArrayForKey:(id)arg1 ;
-(void)_registerSceneActionsHandlerArray:(id)arg1 forKey:(id)arg2 ;
-(void)_unregisterSceneActionsHandlerArray:(id)arg1 ;
-(void)_unregisterSceneComponentForKey:(id)arg1 ;
-(id)_sceneComponentForKey:(id)arg1 ;
-(NSArray *)_sceneComponents;
-(void)_updateUIClientSettingsWithUITransitionBlock:(/*^block*/id)arg1 ;
-(void)_updateUIClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)_compatibilityModeZoomDidChange;
-(BOOL)_hasInvaidated;
-(BOOL)_windowIsFront:(id)arg1 ;
-(id)_topVisibleWindowPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)_visibleWindows;
-(id)_fbsSceneLayerForWindow:(id)arg1 ;
-(CGRect)_boundsForInterfaceOrientation:(long long)arg1 ;
-(void)_computeMetrics:(BOOL)arg1 ;
-(double)_systemMinimumMargin;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(void)__captureWindow:(id)arg1 ;
-(void)__releaseWindow:(id)arg1 ;
-(BOOL)_needsMakeKeyAndVisible;
-(BOOL)_involvedInMediaPlayback;
-(void)_setInvolvedInMediaPlayback:(BOOL)arg1 ;
-(void)_prepareForResume;
-(BOOL)_eligableForSuspend;
-(void)_setSettingsScene:(id)arg1 ;
-(NSArray *)_interitingScenes;
-(void)_enqueuePostSettingsUpdateResponseBlock:(/*^block*/id)arg1 inPhase:(id)arg2 ;
-(id)_fixupInheritedSettings:(id)arg1 ;
-(id)_fixupInheritedClientSettings:(id)arg1 ;
-(FBSSceneSettings *)_synthesizedSettings;
-(void)_applyOverrideSettings:(id)arg1 forActions:(/*^block*/id)arg2 ;
-(void)_performSystemSnapshotWithActions:(/*^block*/id)arg1 ;
-(BOOL)_suspendedEventsOnly;
-(BOOL)_runningInTaskSwitcher;
-(BOOL)_suspendedUnderLock;
-(BOOL)_isUIKitManaged;
-(FBSSceneSettings *)_oldSettings;
-(BOOL)_respondingToLifecycleEvent;
-(NSNumber *)_cachedInterfaceOrientation;
@end

