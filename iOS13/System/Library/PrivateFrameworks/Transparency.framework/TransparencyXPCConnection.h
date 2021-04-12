/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)instance;
+(void)invokeXPCWithBlock:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
+(void)removeInstance;
+(void)invokeXPCAsynchronousCallWithBlock:(/*^block*/id)arg1 ;
+(void)invokeXPCSynchronousCallWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)createConnection;
@end

