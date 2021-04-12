/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSceneClient.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@protocol FBWorkspaceDelegate, BSServiceConnectionHost, OS_dispatch_queue;
@class FBProcess, FBWorkspaceEventDispatcherRegistration, BSServiceConnection, NSMutableArray, NSMutableDictionary, NSObject, FBSSerialQueue, FBSceneClientProviderInvalidationAction, RBSAssertion, BSCompoundAssertion, BSServiceConnectionEndpointInjector, BSAuditToken, NSString;

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProvider> {

	id<FBWorkspaceDelegate> _weak_delegate;
	FBProcess* _weak_process;
	FBWorkspaceEventDispatcherRegistration* _lock_eventDispatcher;
	BSServiceConnection*<BSServiceConnectionHost> _lock_connection;
	NSMutableArray* _lock_waitForConnectBlocks;
	NSMutableDictionary* _lock_identifierToSceneMap;
	NSMutableDictionary* _lock_identifierToRemnantsMap;
	NSMutableArray* _lock_pendedRequests;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _workspaceQueue;
	FBSceneClientProviderInvalidationAction* _lock_invalidationAction;
	RBSAssertion* _lock_lifeAssertion;
	RBSAssertion* _lock_connectAssertion;
	RBSAssertion* _lock_afterlifeAssertion;
	long long _lock_activeInterruptionPolicy;
	unsigned char _lock_activeAssertionState;
	BSCompoundAssertion* _compoundAssertion;
	BSServiceConnectionEndpointInjector* _workspaceServiceInjector;
	BOOL _shouldInjectEndpoint;
	BOOL _lock_didReceiveHandshake;
	BOOL _lock_invalidated;

}

@property (assign,nonatomic,__weak) id<FBWorkspaceDelegate> delegate; 
@property (nonatomic,__weak,readonly) FBProcess * process; 
@property (nonatomic,readonly) BSAuditToken * auditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_resolveInterruptionPolicy:(long long)arg1 ;
-(FBProcess *)process;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)init;
-(id)_sceneForIdentifier:(id)arg1 ;
-(void)_lock_fireInvalidationAction;
-(id<FBWorkspaceDelegate>)delegate;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)_updateProcessAssertionState;
-(BSAuditToken *)auditToken;
-(id)registerHost:(id)arg1 withSpecification:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 fromRemnant:(id)arg5 ;
-(oneway void)requestSceneWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_unregisterSceneForIdentifier:(id)arg1 ;
-(void)_lock_enqueueConnectBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<FBWorkspaceDelegate>)arg1 ;
-(NSString *)description;
-(oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(id)_acquireAssertionForReason:(id)arg1 withState:(unsigned char)arg2 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(void)sendActions:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(oneway void)handshakeWithRemnants:(id)arg1 ;
-(oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)_terminateWithReason:(id)arg1 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_resolveSceneLifecycleStateAndInterruptionPolicy;
-(void)dealloc;
@end

