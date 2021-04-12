/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/NTTodayContext.h>

@protocol NTTodayContext <NTTodayResultsSource,NTTodayEventTracker>
@property (nonatomic,copy) id newResultsHandler; 
@required
-(id)newResultsHandler;
-(void)setNewResultsHandler:(/*^block*/id)arg1;

@end


@protocol FCContentContext, NTReadablePrivateDataStorage, NTWritablePrivateDataStorage, NTTodayResultsSource, OS_dispatch_queue;
@class NTSourceAvailabilityManager, NSObject, FCAsyncSerialQueue, NSString;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext> {

	/*^block*/id _newResultsHandler;
	id<FCContentContext> _contentContext;
	/*^block*/id _sessionProvider;
	id<NTReadablePrivateDataStorage> _readablePrivateDataStorage;
	id<NTWritablePrivateDataStorage> _writablePrivateDataStorage;
	NTSourceAvailabilityManager* _sourceAvailabilityManager;
	id<NTTodayResultsSource> _todayResultsSource;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCAsyncSerialQueue* _fetchQueue;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                                      //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) id sessionProvider;                                                         //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,retain) id<NTReadablePrivateDataStorage> readablePrivateDataStorage;              //@synthesize readablePrivateDataStorage=_readablePrivateDataStorage - In the implementation block
@property (nonatomic,retain) id<NTWritablePrivateDataStorage> writablePrivateDataStorage;              //@synthesize writablePrivateDataStorage=_writablePrivateDataStorage - In the implementation block
@property (nonatomic,retain) NTSourceAvailabilityManager * sourceAvailabilityManager;                  //@synthesize sourceAvailabilityManager=_sourceAvailabilityManager - In the implementation block
@property (nonatomic,retain) id<NTTodayResultsSource> todayResultsSource;                              //@synthesize todayResultsSource=_todayResultsSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                               //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * fetchQueue;                                        //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id newResultsHandler;                                                       //@synthesize newResultsHandler=_newResultsHandler - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(FCAsyncSerialQueue *)fetchQueue;
-(void)setSessionProvider:(id)arg1 ;
-(id)sessionProvider;
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupTodayResultsSource;
-(id)newResultsHandler;
-(id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 sessionProvider:(/*^block*/id)arg5 ;
-(id<NTTodayResultsSource>)todayResultsSource;
-(id<NTWritablePrivateDataStorage>)writablePrivateDataStorage;
-(NTSourceAvailabilityManager *)sourceAvailabilityManager;
-(id<NTReadablePrivateDataStorage>)readablePrivateDataStorage;
-(void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2 ;
-(void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2 ;
-(void)setNewResultsHandler:(id)arg1 ;
-(id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 sessionProvider:(/*^block*/id)arg5 ;
-(void)setReadablePrivateDataStorage:(id<NTReadablePrivateDataStorage>)arg1 ;
-(void)setWritablePrivateDataStorage:(id<NTWritablePrivateDataStorage>)arg1 ;
-(void)setSourceAvailabilityManager:(NTSourceAvailabilityManager *)arg1 ;
-(void)setTodayResultsSource:(id<NTTodayResultsSource>)arg1 ;
@end

