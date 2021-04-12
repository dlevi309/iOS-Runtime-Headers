/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTTodayResultsSource.h>

@protocol NTTodayResultsSource <NSObject>
@required
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol NTTodayResultsFetchDescriptor, NTReadablePrivateDataStorage, FCContentContext;
@class FCAsyncSerialQueue, NSObject, NSString;

@interface NTTodayResultsSource : NSObject <NTTodayResultsSource> {

	BOOL _flushingHasBeenEnabled;
	id<NTTodayResultsFetchDescriptor> _fetchDescriptor;
	id<NTReadablePrivateDataStorage> _privateDataStorage;
	id<FCContentContext> _contentContext;
	/*^block*/id _sessionProvider;
	FCAsyncSerialQueue* _serialQueue;
	NSObject* _latestResultRecordsHoldToken;

}

@property (nonatomic,copy,readonly) id<NTTodayResultsFetchDescriptor> fetchDescriptor;               //@synthesize fetchDescriptor=_fetchDescriptor - In the implementation block
@property (nonatomic,readonly) id<NTReadablePrivateDataStorage> privateDataStorage;                  //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,readonly) id<FCContentContext> contentContext;                                  //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy,readonly) id sessionProvider;                                              //@synthesize sessionProvider=_sessionProvider - In the implementation block
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
-(id)sessionProvider;
-(void)_fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<NTTodayResultsFetchDescriptor>)fetchDescriptor;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(BOOL)hasFlushingBeenEnabled;
-(void)setFlushingHasBeenEnabled:(BOOL)arg1 ;
-(void)setLatestResultRecordsHoldToken:(NSObject *)arg1 ;
-(void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFetchDescriptor:(id)arg1 privateDataStorage:(id)arg2 contentContext:(id)arg3 sessionProvider:(/*^block*/id)arg4 fetchQueue:(id)arg5 ;
-(NSObject *)latestResultRecordsHoldToken;
@end

