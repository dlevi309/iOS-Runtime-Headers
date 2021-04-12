/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
*/

#import <libobjc.A.dylib/NDNewsServiceClient.h>
#import <libobjc.A.dylib/NDNewsService.h>

@protocol NDNewsService, OS_dispatch_queue, NDNewsServiceClient;
@class NSXPCConnection, NSObject, NSString;

@interface NDNewsServiceConnection : NSObject <NDNewsServiceClient, NDNewsService> {

	NSXPCConnection* _connection;
	id<NDNewsService> _daemon;
	NSObject*<OS_dispatch_queue> _accessQueue;
	id<NDNewsServiceClient> _client;

}

@property (nonatomic,retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<NDNewsService> daemon;                              //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic,__weak) id<NDNewsServiceClient> client;                 //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NDNewsServiceClient>)client;
-(void)setClient:(id<NDNewsServiceClient>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)initWithClient:(id)arg1 ;
-(id<NDNewsService>)daemon;
-(void)setDaemon:(id<NDNewsService>)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)serviceHasNewTodayResults;
-(void)_establishConnectionIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end

