/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@protocol OS_dispatch_queue;
@class AMSMetricsDatabase, NSString, NSObject;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource> {

	AMSMetricsDatabase* _database;
	NSString* _containerIdentifier;
	NSString* _currentLockKey;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) AMSMetricsDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * currentLockKey;                       //@synthesize currentLockKey=_currentLockKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long eventCount; 
-(id)enqueueEvents:(id)arg1 ;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(NSString *)currentLockKey;
-(void)removeAllEvents;
-(NSString *)containerIdentifier;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(void)didFinishBatching;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentLockKey:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(AMSMetricsDatabase *)database;
-(void)cancel;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)eventCount;
-(void)dealloc;
@end

