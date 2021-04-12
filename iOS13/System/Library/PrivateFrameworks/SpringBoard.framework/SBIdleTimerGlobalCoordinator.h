/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>
#import <libobjc.A.dylib/SBIdleTimerObserving.h>
#import <libobjc.A.dylib/SBIdleTimerGlobalStateMonitorObserving.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@protocol BSInvalidatable, SBIdleTimerResetSource, SBIdleTimerGlobalCoordinatorDelegate, SBIdleTimerProviding;
@class SBIdleTimerDescriptorFactory, SBIdleTimerGlobalStateMonitor, SBIdleTimerProxy, SBIdleTimerDescriptor, SBIdleTimerCoordinatorHelper, FBSDisplayLayoutMonitor, PTTestRecipe, NSMutableDictionary, NSString;

@interface SBIdleTimerGlobalCoordinator : NSObject <FBSDisplayLayoutObserver, SBIdleTimerObserving, SBIdleTimerGlobalStateMonitorObserving, SBIdleTimerCoordinating> {

	SBIdleTimerDescriptorFactory* _idleTimerDescriptorFactory;
	SBIdleTimerGlobalStateMonitor* _globalStateMonitor;
	SBIdleTimerProxy* _idleTimerProxy;
	SBIdleTimerDescriptor* _disabledIdleTimerDescriptor;
	SBIdleTimerProxy* _enabledIdleTimerProxy;
	SBIdleTimerDescriptor* _enabledIdleTimerDescriptor;
	BOOL _idleTimerSourceEnabled;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	id<BSInvalidatable> _disableAutoDimAssertion;
	FBSDisplayLayoutMonitor* _layoutMonitor;
	BOOL _started;
	id<SBIdleTimerResetSource> _lastResetSource;
	id<BSInvalidatable> _stateCaptureAssertion;
	PTTestRecipe* _clientDisableAssertionsTestRecipe;
	PTTestRecipe* _internalDisableAssertionsTestRecipe;
	id<SBIdleTimerGlobalCoordinatorDelegate> _delegate;
	id<SBIdleTimerProviding> _idleTimerProvider;
	NSMutableDictionary* _idleTimerDisableAssertions;

}

@property (nonatomic,readonly) id<SBIdleTimer> idleTimer; 
@property (assign,setter=_setIdleTimerProvider:,getter=_idleTimerProvider,nonatomic,__weak) id<SBIdleTimerProviding> idleTimerProvider;                               //@synthesize idleTimerProvider=_idleTimerProvider - In the implementation block
@property (setter=_setIdleTimerDisableAssertions:,getter=_idleTimerDisableAssertions,nonatomic,retain) NSMutableDictionary * idleTimerDisableAssertions;              //@synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions - In the implementation block
@property (assign,nonatomic,__weak) id<SBIdleTimerGlobalCoordinatorDelegate> delegate;                                                                                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdleTimerDisabled,nonatomic,readonly) BOOL idleTimerDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)dealloc;
-(id<SBIdleTimerGlobalCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBIdleTimerGlobalCoordinatorDelegate>)arg1 ;
-(void)start;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(BOOL)isIdleTimerDisabled;
-(void)resetIdleTimer;
-(void)_addStateCaptureHandlers;
-(id<SBIdleTimer>)idleTimer;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(void)resetIdleTimerForReason:(id)arg1 ;
-(id)_activeIdleTimerProvider;
-(id)acquireIdleTimerDisableAssertionForReason:(id)arg1 ;
-(id)_idleTimerDisableAssertions;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(void)idleTimerDidResetForUserAttention:(id)arg1 ;
-(id)_idleTimerProvider;
-(void)resetIdleTimerIfNonConsecutiveSource:(id)arg1 forReason:(id)arg2 ;
-(id)_stateCaptureDescription;
-(BOOL)_updateIdleTimerForReason:(id)arg1 ;
-(void)_registerTestRecipes;
-(void)_unregisterTestRecipes;
-(void)_updateGlobalStateDisableAssertions;
-(id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 forReason:(id)arg3 ;
-(void)_setIdleTimerSourceEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)_areIdleTimerDisableAssertionsPrevented;
-(void)_setIdleTimerProvider:(id)arg1 ;
-(id)_updateIdleTimerForProvider:(id)arg1 behavior:(id)arg2 descriptor:(id)arg3 forReason:(id)arg4 ;
-(void)_applyActiveIdleTimerDescriptorForReason:(id)arg1 ;
-(void)_setIdleTimerWithDescriptor:(id)arg1 forReason:(id)arg2 ;
-(BOOL)_hasIdleTimerDisableAssertions;
-(void)_registerClientDisableAssertionsTestRecipe;
-(void)_registerInternalDisableAssertionsTestRecipe;
-(void)idleTimerGlobalStateMonitor:(id)arg1 changedForReason:(id)arg2 ;
-(void)_logEffectiveLockTimeout;
-(void)_idleTimerPrefsChanged;
-(void)_setIdleTimerDisableAssertions:(id)arg1 ;
@end

