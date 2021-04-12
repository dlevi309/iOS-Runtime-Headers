/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionParent.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol BSServiceDispatchingQueue, OS_xpc_object, BSXPCServiceConnectionParent;
@class BSXPCServiceConnectionContext, NSString, BSXPCServiceConnectionPeer, NSObject, NSMutableArray, BSXPCServiceConnectionMessage, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionEventHandler, BSServiceQuality, BSServiceInterface;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSXPCServiceConnectionMessaging, BSInvalidatable> {

	BSXPCServiceConnectionContext* _context;
	NSString* _proem;
	os_unfair_lock_s _lock;
	unsigned _lock_activationGeneration;
	BSXPCServiceConnectionPeer* _lock_peer;
	id<BSServiceDispatchingQueue> _lock_connection_queue;
	NSObject*<OS_xpc_object> _lock_connection;
	NSMutableArray* _lock_childConnections;
	NSMutableArray* _lock_connectionActivatedEvents;
	NSMutableArray* _lock_connectionEstablishedEvents;
	BSXPCServiceConnectionMessage* _lock_activationMessage;
	BSXPCServiceConnectionMessageReply* _lock_activationReply;
	BSXPCServiceConnectionMessage* _lock_invalidationMessage;
	BSXPCServiceConnectionEventHandler* _lock_eventHandler;
	id<BSXPCServiceConnectionParent> _lock_parent;
	BOOL _lock_configured;
	BOOL _lock_activated;
	BOOL _lock_sendsMustWaitForEstablished;
	BOOL _lock_established;
	BOOL _lock_remotelyInvalidated;
	BOOL _lock_clientInvalidated;
	BOOL _lock_invalidated;

}

@property (nonatomic,readonly) BSXPCServiceConnectionContext * _context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> _XPCConnection; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _XPCConnectionTargetQueue; 
@property (nonatomic,readonly) BSXPCServiceConnectionPeer * peer;                                   //@synthesize lock_peer=_lock_peer - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) id remoteTarget; 
@property (nonatomic,copy,readonly) BSServiceQuality * serviceQuality; 
@property (nonatomic,copy,readonly) BSServiceInterface * interface; 
@property (nonatomic,readonly) id<BSXPCDecoding> initiatingContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_isInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (getter=_isClientInvalidated,nonatomic,readonly) BOOL _clientInvalidated; 
+(id)currentContext;
+(id)connectionWithServiceName:(id)arg1 privileged:(BOOL)arg2 ;
+(id)connectionWithConnection:(id)arg1 ;
+(id)connectionWithEndpoint:(id)arg1 nonLaunching:(BOOL)arg2 description:(id)arg3 ;
+(id)_connectionWithXPCConnection:(id)arg1 endpointDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(BSXPCServiceConnectionContext *)_context;
-(BSServiceInterface *)interface;
-(NSObject*<OS_xpc_object>)_XPCConnection;
-(BSXPCServiceConnectionPeer *)peer;
-(id)_eventHandler;
-(id)createMessage;
-(void)_lock_invalidate;
-(void)configure:(/*^block*/id)arg1 ;
-(BOOL)_isInvalidated;
-(void)_setParent:(id)arg1 ;
-(id)_initWithContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_XPCConnectionTargetQueue;
-(BOOL)activateNowOrWhenReady:(/*^block*/id)arg1 ;
-(id)remoteTarget;
-(id)createMessageWithCompletion:(/*^block*/id)arg1 ;
-(id<BSXPCDecoding>)initiatingContext;
-(BOOL)_isClientInvalidated;
-(BSServiceQuality *)serviceQuality;
-(BOOL)hasChildren;
-(void)_parentInvalidated;
-(void)_invalidateChildConnection:(id)arg1 ;
-(void)_lock_associateNewChildConnection:(id)arg1 ;
-(BOOL)_lock_activateNowOrWhenReady:(/*^block*/id)arg1 withParent:(id)arg2 ;
-(void)_connection_handleEvent:(id)arg1 ;
-(void)_connection_consumeLock_didActivateWithPeer:(id)arg1 ;
-(void)_connection_consumeLock_runPendedEventsIfAppropriate;
-(void)_lock_enqueueConnectionEstablishedEvent:(/*^block*/id)arg1 ;
-(void)_lock_disconnect;
-(void)_connection_handleMessage:(id)arg1 fromPeer:(id)arg2 withHandoff:(id)arg3 ;
-(void)_connection_handleActivationMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)_connection_handleInvalidateMessage:(id)arg1 withHandoff:(id)arg2 ;
-(void)_connection_consumeLock_handleError:(id)arg1 notYetLocked:(BOOL)arg2 ;
-(void)_lock_enqueueChildActivateEvent:(/*^block*/id)arg1 forHandoff:(id)arg2 ;
-(id)_lock_createMessageWithParent:(id)arg1 ;
@end

