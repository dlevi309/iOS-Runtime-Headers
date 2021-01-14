/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(id<WebBookmarksXPCConnectionDelegate>)delegate;
-(void)_handleMessage:(id)arg1 ;
-(void)setDelegate:(id<WebBookmarksXPCConnectionDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setMessageHandlers:(id)arg1 ;
-(id)initClientForMachService:(const char*)arg1 ;
-(id)messageWithName:(const char*)arg1 ;
-(BOOL)hasBoolEntitlement:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)setHandler:(/*^block*/id)arg1 forMessageNamed:(const char*)arg2 ;
@end

