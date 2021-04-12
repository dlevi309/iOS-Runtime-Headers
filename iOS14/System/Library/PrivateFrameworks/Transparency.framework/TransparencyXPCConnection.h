/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)createConnection;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

