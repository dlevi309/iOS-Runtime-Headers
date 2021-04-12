/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAudioStatistics.dylib
*/


@protocol CAReportingServiceProtocol;
@class NSXPCConnection, NSMutableDictionary;

@interface CAReportingClient : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _clientReporters;
	id<CAReportingServiceProtocol> _serverDelegateAsync;
	id<CAReportingServiceProtocol> _serverDelegateSync;

}

@property (retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableDictionary * clientReporters;                           //@synthesize clientReporters=_clientReporters - In the implementation block
@property (retain) id<CAReportingServiceProtocol> serverDelegateAsync;              //@synthesize serverDelegateAsync=_serverDelegateAsync - In the implementation block
@property (retain) id<CAReportingServiceProtocol> serverDelegateSync;               //@synthesize serverDelegateSync=_serverDelegateSync - In the implementation block
+(id)sharedInstance;
+(id)getClient;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)reconnectReporter:(id)arg1 ;
-(void)reconnectReporters;
-(void)disconnectReporters;
-(long long)createReporterID:(unsigned)arg1 ;
-(id)reporterWithID:(long long)arg1 ;
-(void)addReporter:(id)arg1 ;
-(void)destroyReporterWithID:(long long)arg1 ;
-(id)listClientReporterIDs;
-(id)listServerReporterIDs;
-(void)startReporters:(id)arg1 ;
-(void)stopReporters:(id)arg1 ;
-(void)sendMessage:(id)arg1 category:(unsigned)arg2 type:(unsigned short)arg3 reporters:(id)arg4 ;
-(void)setServiceType:(unsigned short)arg1 reporterID:(long long)arg2 ;
-(unsigned short)getServiceTypeForReporterID:(long long)arg1 ;
-(void)setConfiguration:(id)arg1 reporterID:(long long)arg2 ;
-(id)getConfigurationForReporterID:(long long)arg1 ;
-(void)destroyClient;
-(void)destoryService;
-(NSMutableDictionary *)clientReporters;
-(void)setClientReporters:(NSMutableDictionary *)arg1 ;
-(id<CAReportingServiceProtocol>)serverDelegateAsync;
-(void)setServerDelegateAsync:(id<CAReportingServiceProtocol>)arg1 ;
-(id<CAReportingServiceProtocol>)serverDelegateSync;
-(void)setServerDelegateSync:(id<CAReportingServiceProtocol>)arg1 ;
@end

