/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDaemon:(id<NDNewsService>)arg1 ;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<NDNewsService>)daemon;
-(id<NDNewsServiceClient>)client;
-(void)setClient:(id<NDNewsServiceClient>)arg1 ;
-(void)serviceHasNewTodayResults;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)_unsafeEstablishConnectionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg1 syncCompletion:(/*^block*/id)arg2 ;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_establishConnectionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)dealloc;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

