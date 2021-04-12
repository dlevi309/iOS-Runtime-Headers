/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString, CDDebug;

@interface CDDXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	BOOL _hasValidConnection;
	Aq _sequenceNumber;
	NSString* _serviceName;
	CDDebug* _debug;

}

@property (readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) CDDebug * debug;                     //@synthesize debug=_debug - In the implementation block
-(void)invalidateConnection;
-(BOOL)establishConnection;
-(unsigned long long)sequenceNumber;
-(id)connection;
-(NSString *)serviceName;
-(CDDebug *)debug;
-(void)dealloc;
-(void)cancelConnection;
-(id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2 ;
-(BOOL)sendMessageAsync:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(void)sendBarrier:(/*^block*/id)arg1 ;
@end

