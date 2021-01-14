/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAudioStatistics.dylib
*/


@class NSXPCConnection, NSMutableDictionary;

@interface CAReportingClient : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _clientReporters;

}

@property (retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableDictionary * clientReporters;              //@synthesize clientReporters=_clientReporters - In the implementation block
+(id)sharedInstance;
+(void)destroyClient;
+(id)getClient;
-(void)destoryService;
-(void)setConfiguration:(id)arg1 reporterID:(long long)arg2 ;
-(long long)createReporterID:(unsigned)arg1 ;
-(void)reconnectReporters;
-(void)addReporter:(id)arg1 ;
-(void)setServiceType:(unsigned short)arg1 reporterID:(long long)arg2 ;
-(void)reconnectReporter:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)disconnectReporters;
-(id)listServerReporterIDs;
-(unsigned short)getServiceTypeForReporterID:(long long)arg1 ;
-(NSMutableDictionary *)clientReporters;
-(void)stopReporters:(id)arg1 ;
-(id)initWithXPC:(BOOL)arg1 endpoint:(id)arg2 ;
-(void)destroyReporterWithID:(long long)arg1 ;
-(id)reporterWithID:(long long)arg1 ;
-(void)sendMessage:(id)arg1 category:(unsigned)arg2 type:(unsigned short)arg3 reporters:(id)arg4 ;
-(void)startReporters:(id)arg1 ;
-(id)listClientReporterIDs;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setClientReporters:(NSMutableDictionary *)arg1 ;
-(id)getConfigurationForReporterID:(long long)arg1 ;
@end

