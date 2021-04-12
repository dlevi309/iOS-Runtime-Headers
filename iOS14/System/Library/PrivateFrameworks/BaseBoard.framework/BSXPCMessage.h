/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface BSXPCMessage : NSObject {

	/*^block*/id _replyHandler;
	NSObject*<OS_dispatch_queue> _replyQueue;
	int _invalidated;
	int _replied;
	NSObject*<OS_xpc_object> _message;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize message=_message - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
+(const char*)messageTypeKey;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(id)messageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 ;
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 replyHandler:(/*^block*/id)arg4 replyQueue:(id)arg5 ;
-(id)sendSynchronouslyToConnection:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_xpc_object>)payload;
-(BOOL)sendToConnection:(id)arg1 ;
-(id)description;
-(void)forcefullyInvokeReplyHandler:(id)arg1 ;
-(BOOL)sendToConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
@end

