/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface DMXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) id interruptionHandler;                                         //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;                                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)invalidate;
-(void)resume;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 syncReplyHandler:(/*^block*/id)arg2 ;
@end

