/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionParent.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol BSServiceDispatchingQueue, OS_xpc_object, BSXPCServiceConnectionParent;
@class NSString, BSXPCServiceConnectionPeer, NSObject, NSMutableArray, BSXPCServiceConnectionMessage, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionEventHandler, BSXPCServiceConnectionContext;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSInvalidatable> {

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
	BSXPCServiceConnectionContext* _context;

}

@property (getter=_isInvalidated,nonatomic,readonly) BOOL _invalidated; 
@property (getter=_isClientInvalidated,nonatomic,readonly) BOOL _clientInvalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isInvalidated;
-(void)_invalidateChildConnection:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(BOOL)_isClientInvalidated;
-(void)dealloc;
@end

