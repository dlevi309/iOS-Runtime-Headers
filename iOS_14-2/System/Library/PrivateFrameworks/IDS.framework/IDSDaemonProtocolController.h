/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setObserver:(IDSGroupContextNotifyingObserver *)arg1 ;
-(id)init;
-(IDSGroupContextNotifyingObserver *)observer;
-(id<IDSGroupContextDataSourceDaemonProtocol>)groupContextDataSource;
-(NSXPCConnection *)connection;
-(id<IDSGroupContextCacheMiddlewareDaemonProtocol>)groupContextCacheMiddleware;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

