/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSClientProtocol.h>
#import <libobjc.A.dylib/RBSServiceLocalProtocol.h>

@protocol OS_xpc_object, RBSConnectionServiceDelegate, OS_dispatch_queue;
@class NSObject, RBSProcessHandle, NSMapTable, NSHashTable, NSMutableDictionary, NSSet, NSMutableSet, RBSProcessIdentity;

@interface RBSConnection : NSObject <RBSClientProtocol, RBSServiceLocalProtocol> {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _handleConnection;
	RBSProcessHandle* _handle;
	id<RBSConnectionServiceDelegate> _serviceDelegate;
	os_unfair_lock_s _lock;
	os_unfair_lock_s _assertionLock;
	os_unfair_lock_s _processExpirationLock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _handshakeQueue;
	NSObject*<OS_dispatch_queue> _monitorCalloutQueue;
	NSMapTable* _acquiredAssertionsByIdentifier;
	NSHashTable* _processMonitors;
	NSMutableDictionary* _stateByIdentity;
	NSSet* _preventLaunchPredicates;
	NSMutableSet* _inheritances;
	NSHashTable* _expirationWarningClients;
	NSMutableDictionary* _deathHandlers;
	unsigned long long _state;

}

@property (nonatomic,readonly) RBSProcessHandle * handle; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
+(id)connectionQueue;
+(id)sharedInstance;
+(void)setInDaemon;
+(id)handshakeQueue;
-(id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id*)arg3 ;
-(void)subscribeToProcessDeath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)executeLaunchRequest:(id)arg1 process:(out id*)arg2 assertion:(out id*)arg3 error:(out id*)arg4 ;
-(BOOL)executeTerminateRequest:(id)arg1 assertion:(out id*)arg2 error:(out id*)arg3 ;
-(void)registerServiceDelegate:(id)arg1 ;
-(RBSProcessHandle *)handle;
-(id)init;
-(void)intendToExit:(id)arg1 withStatus:(id)arg2 ;
-(id)processName:(id)arg1 ;
-(id)portForIdentifier:(id)arg1 ;
-(oneway void)async_didChangeInheritances:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)arg1 error:(out id*)arg2 ;
-(RBSProcessIdentity *)identity;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)identifiersForStateCaptureSubsystems:(out id*)arg1 ;
-(oneway void)async_assertionWillInvalidate:(id)arg1 ;
-(oneway void)async_willExpireAssertionsSoon;
-(id)acquireAssertion:(id)arg1 error:(out id*)arg2 ;
-(id)hostProcessForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)preventLaunchPredicatesWithError:(out id*)arg1 ;
-(id)captureStateForSubsystem:(id)arg1 error:(out id*)arg2 ;
-(oneway void)async_observedProcessExitEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)handleForPredicate:(id)arg1 error:(out id*)arg2 ;
-(id)busyExtensionInstancesFromSet:(id)arg1 error:(out id*)arg2 ;
-(oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id*)arg3 ;
-(oneway void)async_observedPreventLaunchPredicatesUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)limitationsForInstance:(id)arg1 error:(out id*)arg2 ;
-(void)reset;
-(id)observeProcessAssertionsExpirationWarningWithBlock:(/*^block*/id)arg1 ;
-(BOOL)subscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 error:(out id*)arg3 ;
-(void)unsubscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 ;
-(oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(id)handleForKey:(id)arg1 ;
-(id)lastExitContextForInstance:(id)arg1 error:(out id*)arg2 ;
-(oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2 ;
-(BOOL)invalidateAssertion:(id)arg1 error:(out id*)arg2 ;
@end

