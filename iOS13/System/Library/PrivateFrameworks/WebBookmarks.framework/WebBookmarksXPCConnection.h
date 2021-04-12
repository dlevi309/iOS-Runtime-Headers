/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol OS_xpc_object, OS_dispatch_queue, WebBookmarksXPCConnectionDelegate;
@class NSMutableDictionary, NSObject;

@interface WebBookmarksXPCConnection : NSObject {

	NSMutableDictionary* _messageHandlers;
	NSMutableDictionary* _entitlementLookupCache;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id<WebBookmarksXPCConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<WebBookmarksXPCConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WebBookmarksXPCConnectionDelegate>)delegate;
-(void)setDelegate:(id<WebBookmarksXPCConnectionDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)sendMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(id)messageWithName:(const char*)arg1 ;
-(id)initClientForMachService:(const char*)arg1 ;
-(BOOL)hasBoolEntitlement:(id)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forMessageNamed:(const char*)arg2 ;
-(void)sendMessage:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)setMessageHandlers:(id)arg1 ;
@end

