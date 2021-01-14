/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/NTTodayContext.h>

@protocol NTTodayContext <NTTodayResultsSource,NTTodayEventTracker>
@property (nonatomic,copy) id newResultsHandler; 
@required
-(void)setNewResultsHandler:(/*^block*/id)arg1;
-(id)newResultsHandler;

@end


@protocol FCContentContext, NTReadablePrivateDataStorage, NTWritablePrivateDataStorage, NTTodayResultsSource, OS_dispatch_queue;
@class NTSourceAvailabilityManager, NSObject, FCAsyncSerialQueue, NSString;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext> {

	/*^block*/id _newResultsHandler;
	id<FCContentContext> _contentContext;
	id<NTReadablePrivateDataStorage> _readablePrivateDataStorage;
	id<NTWritablePrivateDataStorage> _writablePrivateDataStorage;
	NTSourceAvailabilityManager* _sourceAvailabilityManager;
	id<NTTodayResultsSource> _todayResultsSource;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCAsyncSerialQueue* _fetchQueue;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                                      //@synthesize contentContext=_contentContext - In the implementation block
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
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id)init;
-(void)setReadablePrivateDataStorage:(id<NTReadablePrivateDataStorage>)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)setNewResultsHandler:(id)arg1 ;
-(id<FCContentContext>)contentContext;
-(id)newResultsHandler;
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 ;
-(id<NTTodayResultsSource>)todayResultsSource;
-(void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2 ;
-(id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 accessQueue:(id)arg3 fetchQueue:(id)arg4 ;
-(void)setTodayResultsSource:(id<NTTodayResultsSource>)arg1 ;
-(NTSourceAvailabilityManager *)sourceAvailabilityManager;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)placeholderResultsWithOperationInfo:(id)arg1 ;
-(void)_setupTodayResultsSource;
-(void)setWritablePrivateDataStorage:(id<NTWritablePrivateDataStorage>)arg1 ;
-(void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2 ;
-(id<NTWritablePrivateDataStorage>)writablePrivateDataStorage;
-(FCAsyncSerialQueue *)fetchQueue;
-(void)setSourceAvailabilityManager:(NTSourceAvailabilityManager *)arg1 ;
-(id<NTReadablePrivateDataStorage>)readablePrivateDataStorage;
@end

