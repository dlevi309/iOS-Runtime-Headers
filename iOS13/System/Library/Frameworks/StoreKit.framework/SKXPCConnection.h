/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface SKXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _disconnectBlock;
	/*^block*/id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(id)init;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setDisconnectBlock:(id)arg1 ;
-(void)setMessageBlock:(id)arg1 ;
-(id)createXPCEndpoint;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)_initSKXPCConnection;
-(void)_reloadEventHandler;
-(id)disconnectBlock;
-(id)messageBlock;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

