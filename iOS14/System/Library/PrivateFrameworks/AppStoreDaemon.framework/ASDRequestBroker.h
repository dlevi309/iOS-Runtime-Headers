/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)markRequestAsComplete:(id)arg1 ;
-(id)init;
-(void)_startConnection;
-(NSMutableDictionary *)activeRequests;
-(void)markRequestAsActive:(id)arg1 ;
-(id)description;
-(NSXPCConnection *)connection;
-(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)submitRequest:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
@end

