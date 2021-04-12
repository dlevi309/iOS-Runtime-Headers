/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSClientProtocol.h>
#import <libobjc.A.dylib/RBSServiceLocalProtocol.h>

@protocol OS_xpc_object, RBSConnectionServiceDelegate, OS_dispatch_queue;
@class NSObject, RBSProcessHandle, NSMapTable, NSHashTable, NSMutableDictionary, NSMutableSet, RBSAssertionIdentifier, RBSProcessIdentity;

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
	NSMutableSet* _inheritances;
	NSHashTable* _expirationWarningAssertions;
	NSMutableDictionary* _deathHandlers;
	unsigned long long _state;
	RBSAssertionIdentifier* _handshakeIdentifier;

}

@property (nonatomic,readonly) RBSProcessHandle * handle; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity; 
+(id)sharedInstance;
+(id)handshakeQueue;
+(id)connectionQueue;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)_init;
-(RBSProcessHandle *)handle;
-(void)reset;
-(RBSProcessIdentity *)identity;
-(BOOL)subscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 error:(out id*)arg3 ;
-(void)unsubscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 ;
-(id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id*)arg3 ;
-(id)acquireAssertion:(id)arg1 error:(out id*)arg2 ;
-(BOOL)invalidateAssertion:(id)arg1 error:(out id*)arg2 ;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_invalidateAssertionIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)_lock_connect;
-(void)_subscribeToProcessDeath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)lastExitContextForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)limitationsForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)hostProcessForInstance:(id)arg1 error:(out id*)arg2 ;
-(id)captureStateForSubsystem:(id)arg1 error:(out id*)arg2 ;
-(id)busyExtensionInstancesFromSet:(id)arg1 error:(out id*)arg2 ;
-(void)_handshake;
-(oneway void)async_didChangeInheritances:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)async_willExpireAssertionsSoon;
-(oneway void)async_assertionWillInvalidate:(id)arg1 ;
-(oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2 ;
-(oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2 ;
-(void)_disconnect;
-(void)_handleMessage:(id)arg1 ;
-(BOOL)_isPlugIn;
-(id)_handshakeDescriptor;
-(id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)arg1 error:(out id*)arg2 ;
-(BOOL)executeLaunchRequest:(id)arg1 process:(out id*)arg2 assertion:(out id*)arg3 error:(out id*)arg4 ;
-(BOOL)executeTerminateRequest:(id)arg1 assertion:(out id*)arg2 error:(out id*)arg3 ;
-(id)handleForKey:(id)arg1 ;
-(id)handleForPredicate:(id)arg1 error:(out id*)arg2 ;
-(void)subscribeToProcessDeath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id*)arg3 ;
-(void)intendToExit:(id)arg1 withStatus:(id)arg2 ;
-(id)identifiersForStateCaptureSubsystems:(out id*)arg1 ;
-(void)registerServiceDelegate:(id)arg1 ;
-(id)observeProcessAssertionsExpirationWarningWithBlock:(/*^block*/id)arg1 ;
-(void)plugInHandshakeComplete;
-(void)_handleDaemonDidStart;
@end

