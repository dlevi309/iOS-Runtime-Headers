/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, NSXPCProxyCreating;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSString;

@interface IDSXPCConnection : NSObject <NSXPCConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableDictionary* _pendingTransactions;
	IDSXPCConnection* _rootConnection;
	id<NSXPCProxyCreating> _remoteObject;
	/*^block*/id _invalidationHandler;
	BOOL _forSyncMessaging;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingTransactions;              //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) IDSXPCConnection * rootConnection;                      //@synthesize rootConnection=_rootConnection - In the implementation block
@property (nonatomic,retain) id<NSXPCProxyCreating> remoteObject;                    //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                   //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL forSyncMessaging;                                  //@synthesize forSyncMessaging=_forSyncMessaging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForMissingEntitlement:(id)arg1 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)invalidationHandler;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id<NSXPCProxyCreating>)remoteObject;
-(void)setRemoteObject:(id<NSXPCProxyCreating>)arg1 ;
-(id)initForSyncMessagingWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 ;
-(id)remoteObjectProxyWithTimeoutInSeconds:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithRemoteObject:(id)arg1 rootConnection:(id)arg2 ;
-(id)_initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 forSyncMessaging:(BOOL)arg3 ;
-(void)_cleanupAllPendingTransactions;
-(id)initWithQueue:(id)arg1 remoteObject:(id)arg2 ;
-(void)setRootConnection:(IDSXPCConnection *)arg1 ;
-(IDSXPCConnection *)rootConnection;
-(NSMutableDictionary *)pendingTransactions;
-(void)setPendingTransactions:(NSMutableDictionary *)arg1 ;
-(BOOL)forSyncMessaging;
-(void)setForSyncMessaging:(BOOL)arg1 ;
@end

