/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface BSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _message;
	/*^block*/id _replyHandler;
	NSObject*<OS_dispatch_queue> _replyQueue;
	int _invalidated;
	int _replied;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize message=_message - In the implementation block
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 replyHandler:(/*^block*/id)arg4 replyQueue:(id)arg5 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(const char*)messageTypeKey;
+(id)messageWithPayload:(id)arg1 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 ;
+(id)messageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)description;
-(NSObject*<OS_xpc_object>)payload;
-(BOOL)sendToConnection:(id)arg1 ;
-(BOOL)sendToConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)sendSynchronouslyToConnection:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessagePacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
-(id)initWithMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)_errorForXPCMessageReply:(id)arg1 ;
-(void)forcefullyInvokeReplyHandler:(id)arg1 ;
@end

