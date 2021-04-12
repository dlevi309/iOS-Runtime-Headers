/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {

	NSMutableDictionary* _activeRequests;
	NSXPCConnection* _connection;

}

@property (readonly) NSMutableDictionary * activeRequests;              //@synthesize activeRequests=_activeRequests - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
+(id)interface;
-(id)init;
-(id)description;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)markRequestAsComplete:(id)arg1 ;
-(void)markRequestAsActive:(id)arg1 ;
-(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(void)submitRequest:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_startConnection;
-(NSMutableDictionary *)activeRequests;
@end

