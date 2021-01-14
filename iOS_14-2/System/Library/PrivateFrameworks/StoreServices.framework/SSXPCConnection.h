/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface SSXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _disconnectBlock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(void)sendMessage:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(id)copyReplyQueue;
-(id)disconnectBlock;
-(void)_reloadEventHandler;
-(id)initWithServiceName:(id)arg1 ;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setMessageBlock:(id)arg1 ;
-(void)setReplyQueue:(id)arg1 ;
-(void)setDisconnectBlock:(id)arg1 ;
-(id)_initSSXPCConnection;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)messageBlock;
-(void)dealloc;
-(id)createXPCEndpoint;
@end

