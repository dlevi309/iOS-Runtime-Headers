/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/


@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject {

	BOOL _connectionDidInterrupt;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL connectionDidInterrupt;               //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
+(void)initialize;
+(id)connectionToDaemon;
+(id)remoteInterface;
+(id)clientInterface;
-(void)setupConnection;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(void)setConnectionDidInterrupt:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(BOOL)connectionDidInterrupt;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(void)dumpClientsWithReply:(/*^block*/id)arg1 ;
-(void)dumpStateCacheWithReply:(/*^block*/id)arg1 ;
-(void)listClientsWithReply:(/*^block*/id)arg1 ;
-(void)datastoreListingWithReply:(/*^block*/id)arg1 ;
@end

