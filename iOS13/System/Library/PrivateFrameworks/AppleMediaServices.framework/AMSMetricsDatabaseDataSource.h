/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(AMSMetricsDatabase *)database;
-(NSString *)containerIdentifier;
-(long long)eventCount;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)removeAllEvents;
-(id)enqueueEvents:(id)arg1 ;
-(NSString *)currentLockKey;
-(void)setCurrentLockKey:(NSString *)arg1 ;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
@end

