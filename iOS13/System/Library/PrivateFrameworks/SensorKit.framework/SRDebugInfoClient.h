/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject {

	BOOL _connectionDidInterrupt;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL connectionDidInterrupt;               //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
+(void)initialize;
+(id)clientInterface;
+(id)remoteInterface;
+(id)connectionToDaemon;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setupConnection;
-(void)setConnectionDidInterrupt:(BOOL)arg1 ;
-(BOOL)connectionDidInterrupt;
-(void)listClientsWithReply:(/*^block*/id)arg1 ;
@end

