/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {

	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableArray* _clientConnections;
	NSMutableDictionary* _messageHandlers;
	id<WebBookmarksXPCConnectionDelegate> _delegate;

}

@property (assign,nonatomic) id<WebBookmarksXPCConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WebBookmarksXPCConnectionDelegate>)delegate;
-(void)setDelegate:(id<WebBookmarksXPCConnectionDelegate>)arg1 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setHandler:(/*^block*/id)arg1 forMessageNamed:(const char*)arg2 ;
-(void)setMessageHandlers:(id)arg1 ;
-(void)_handleIncomingConnection:(id)arg1 ;
-(id)initListenerForMachService:(const char*)arg1 ;
@end

