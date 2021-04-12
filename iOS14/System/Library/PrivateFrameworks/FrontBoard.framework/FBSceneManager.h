/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSceneManagerSceneDelegate.h>
#import <libobjc.A.dylib/FBWorkspaceEventDispatcherTarget.h>

@class FBSceneManagerObserver, NSMutableOrderedSet, NSMutableDictionary, NSMapTable, FBSceneEventQueue, NSMutableArray, NSString;

@interface FBSceneManager : NSObject <FBSceneManagerSceneDelegate, FBWorkspaceEventDispatcherTarget> {

	FBSceneManagerObserver* _delegateProxy;
	NSMutableOrderedSet* _observerProxies;
	unsigned long long _synchronizationBlockDepth;
	NSMutableDictionary* _scenesByID;
	NSMapTable* _providerToScenesMap;
	FBSceneEventQueue* _eventQueue;
	NSMutableArray* _pendingIdleEvents;
	BOOL _suppressConnectionHandshakeForCurrentProcess;

}

@property (assign,setter=_setSuppressConnectionHandshakeForCurrentProcess:,nonatomic) BOOL _suppressConnectionHandshakeForCurrentProcess;              //@synthesize suppressConnectionHandshakeForCurrentProcess=_suppressConnectionHandshakeForCurrentProcess - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)synchronizeChanges:(/*^block*/id)arg1 ;
+(void)_clearKeyboardScene;
+(void)setKeyboardScene:(id)arg1 ;
+(id)keyboardScene;
+(id)observeKeyboardSceneAvailability:(/*^block*/id)arg1 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)createSceneFromRemnant:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)scene:(id)arg1 enumerateAndCalloutToObserversWithEventName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_applyMutableSettings:(id)arg1 toScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_endSynchronizationBlock;
-(id)init;
-(void)_enqueueSceneManagerObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id<FBSceneManagerDelegate>)delegate;
-(id)scenesPassingTest:(/*^block*/id)arg1 ;
-(void)didReceiveHandshake:(id)arg1 ;
-(id)_eventForScene:(id)arg1 withName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_enqueueSceneObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_setSuppressConnectionHandshakeForCurrentProcess:(BOOL)arg1 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg1 ;
-(void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 preferInternal:(BOOL)arg3 sceneObserverBlock:(/*^block*/id)arg4 sceneManagerObserverBlock:(/*^block*/id)arg5 ;
-(void)_updateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id<FBSceneManagerDelegate>)arg1 ;
-(id)scenesMatchingPredicate:(id)arg1 ;
-(NSString *)description;
-(id)createSceneWithDefinition:(id)arg1 initialParameters:(id)arg2 ;
-(void)_executeNextIdleEventIfAppropriate;
-(id)createSceneWithIdentifier:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4 transitionContext:(id)arg5 ;
-(id)sceneFromIdentityToken:(id)arg1 ;
-(id)newSceneIdentityTokenForIdentity:(id)arg1 ;
-(void)_enqueueEventForScene:(id)arg1 withName:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(id)createSceneWithIdentifier:(id)arg1 parameters:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4 ;
-(BOOL)_isSynchronizingSceneUpdates;
-(void)_enqueueSceneManagerInternalObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_appendCommonDescriptionItemsToBuilder:(id)arg1 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)_enqueueObserverCalloutsForScene:(id)arg1 eventName:(id)arg2 sceneObserverBlock:(/*^block*/id)arg3 sceneManagerObserverBlock:(/*^block*/id)arg4 ;
-(id)_createSceneWithDefinition:(id)arg1 settings:(id)arg2 initialClientSettings:(id)arg3 transitionContext:(id)arg4 fromRemnant:(id)arg5 usingClientProvider:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_destroyScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)_suppressConnectionHandshakeForCurrentProcess;
-(void)_beginSynchronizationBlock;
-(void)destroyScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)_executeEventWhenIdle:(id)arg1 ;
-(void)dealloc;
@end

