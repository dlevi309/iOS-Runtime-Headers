/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTTodayResultsSource.h>

@protocol NTTodayResultsSource <NSObject>
@required
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1;
-(id)placeholderResultsWithOperationInfo:(id)arg1;

@end


@protocol NTTodayResultsFetchDescriptor, NTReadablePrivateDataStorage, FCContentContext;
@class FCAsyncSerialQueue, NSObject, NSString;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource> {

	BOOL _flushingHasBeenEnabled;
	id<NTTodayResultsFetchDescriptor> _fetchDescriptor;
	id<NTReadablePrivateDataStorage> _privateDataStorage;
	id<FCContentContext> _contentContext;
	FCAsyncSerialQueue* _serialQueue;
	NSObject* _latestResultRecordsHoldToken;

}

@property (nonatomic,copy,readonly) id<NTTodayResultsFetchDescriptor> fetchDescriptor;               //@synthesize fetchDescriptor=_fetchDescriptor - In the implementation block
@property (nonatomic,readonly) id<NTReadablePrivateDataStorage> privateDataStorage;                  //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * serialQueue;                                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,getter=hasFlushingBeenEnabled,nonatomic) BOOL flushingHasBeenEnabled;              //@synthesize flushingHasBeenEnabled=_flushingHasBeenEnabled - In the implementation block
@property (nonatomic,retain) NSObject * latestResultRecordsHoldToken;                                //@synthesize latestResultRecordsHoldToken=_latestResultRecordsHoldToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(FCAsyncSerialQueue *)serialQueue;
-(id<FCContentContext>)contentContext;
-(void)_fetchLatestResultsWithOperationInfo:(id)arg1 prefetchedContent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 fetchQueue:(id)arg4 ;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject *)latestResultRecordsHoldToken;
-(void)setLatestResultRecordsHoldToken:(NSObject *)arg1 ;
-(id<NTTodayResultsFetchDescriptor>)fetchDescriptor;
-(id)placeholderResultsWithOperationInfo:(id)arg1 ;
-(void)setFlushingHasBeenEnabled:(BOOL)arg1 ;
-(BOOL)hasFlushingBeenEnabled;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(void)_fetchTodayModuleDescriptorsWithContentRequests:(id)arg1 requireRefreshedAppConfig:(BOOL)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
@end

