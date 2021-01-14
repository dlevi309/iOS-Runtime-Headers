/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol OS_xpc_object;
@class NSObject, NSXPCConnection;

@interface CKKSControl : NSObject {

	BOOL _synchronous;
	NSObject*<OS_xpc_object> _endpoint;
	NSXPCConnection* _connection;

}

@property (assign) BOOL synchronous;                               //@synthesize synchronous=_synchronous - In the implementation block
@property (retain) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
+(id)controlObject:(id*)arg1 ;
+(id)CKKSControlObject:(BOOL)arg1 error:(id*)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)objectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)rpcStatus:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcFastStatus:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcResetLocal:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)rpcResyncLocal:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcResync:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcFetchAndProcessChanges:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcPushOutgoingChanges:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)rpcPerformanceCounters:(/*^block*/id)arg1 ;
-(void)rpcGetCKDeviceIDWithReply:(/*^block*/id)arg1 ;
-(void)rpcTLKMissing:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcKnownBadState:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(BOOL)synchronous;
-(NSXPCConnection *)connection;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

