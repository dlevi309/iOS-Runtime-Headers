/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequest.framework/DiagnosticRequest
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface _DRCConnectionState : NSObject {

	BOOL _isClosed;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (nonatomic,readonly) BOOL isClosed;                                             //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
+(id)sharedConnectionState;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(BOOL)sendMessage:(id)arg1 ;
-(id)init;
-(BOOL)isClosed;
-(void)cleanupState;
-(NSObject*<OS_xpc_object>)connection;
-(id)sendMessageWithReplySync:(id)arg1 ;
@end

