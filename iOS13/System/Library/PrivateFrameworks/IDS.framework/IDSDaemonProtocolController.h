/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSXPCConnection, IDSGroupContextNotifyingObserver;

@interface IDSDaemonProtocolController : NSObject {

	NSXPCConnection* _connection;
	IDSGroupContextNotifyingObserver* _observer;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource; 
@property (nonatomic,readonly) id<IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware; 
@property (nonatomic,retain) IDSGroupContextNotifyingObserver * observer;                                                 //@synthesize observer=_observer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(IDSGroupContextNotifyingObserver *)observer;
-(void)setObserver:(IDSGroupContextNotifyingObserver *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id<IDSGroupContextDataSourceDaemonProtocol>)groupContextDataSource;
-(id<IDSGroupContextCacheMiddlewareDaemonProtocol>)groupContextCacheMiddleware;
@end

