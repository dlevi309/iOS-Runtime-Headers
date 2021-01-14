/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, OS_dispatch_queue, AMSMetricsFlushStrategy;
@class NSString, NSObject, AMSMetricsDatabaseDataSource, NSDate;

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	BOOL _flushTimerEnabled;
	BOOL _flushingDisabled;
	BOOL _monitorsLifecycleEvents;
	BOOL _flushOnForeground;
	id<AMSBagProtocol> _bag;
	NSString* _containerId;
	long long _maxBatchSize;
	long long _maxRequestCount;
	NSObject*<OS_dispatch_queue> _completionQueue;
	id<AMSMetricsFlushStrategy> _currentFlushStrategy;
	AMSMetricsDatabaseDataSource* _databaseSource;
	long long _destination;
	NSObject*<OS_dispatch_queue> _engagementQueue;
	/*^block*/id _flushIntervalBlock;
	NSDate* _flushIntervalStartTime;
	NSObject*<OS_dispatch_queue> _flushQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                  //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) id<AMSMetricsFlushStrategy> currentFlushStrategy;              //@synthesize currentFlushStrategy=_currentFlushStrategy - In the implementation block
@property (nonatomic,retain) AMSMetricsDatabaseDataSource * databaseSource;                 //@synthesize databaseSource=_databaseSource - In the implementation block
@property (assign,nonatomic) long long destination;                                         //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> engagementQueue;                  //@synthesize engagementQueue=_engagementQueue - In the implementation block
@property (assign,nonatomic) BOOL flushingDisabled;                                         //@synthesize flushingDisabled=_flushingDisabled - In the implementation block
@property (assign,nonatomic) BOOL flushOnForeground;                                        //@synthesize flushOnForeground=_flushOnForeground - In the implementation block
@property (nonatomic,copy) id flushIntervalBlock;                                           //@synthesize flushIntervalBlock=_flushIntervalBlock - In the implementation block
@property (nonatomic,retain) NSDate * flushIntervalStartTime;                               //@synthesize flushIntervalStartTime=_flushIntervalStartTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> flushQueue;                       //@synthesize flushQueue=_flushQueue - In the implementation block
@property (nonatomic,retain) id<AMSMetricsBagContract> bagContract; 
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                        //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSString * containerId;                                      //@synthesize containerId=_containerId - In the implementation block
@property (nonatomic,readonly) long long eventCount; 
@property (assign,nonatomic) BOOL flushTimerEnabled;                                        //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
@property (assign,nonatomic) long long maxBatchSize;                                        //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (assign,nonatomic) long long maxRequestCount;                                     //@synthesize maxRequestCount=_maxRequestCount - In the implementation block
@property (assign,nonatomic) BOOL monitorsLifecycleEvents;                                  //@synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)internalInstanceUsingBag:(id)arg1 ;
+(id)sharedTimerQueue;
+(id)serverTimeFromTimeInterval:(double)arg1 ;
+(BOOL)flushDelayEnabled;
+(BOOL)diagnosticsSubmissionAllowed;
+(BOOL)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2 ;
+(BOOL)appAnalyticsAllowed;
+(BOOL)disableBackgroundMetrics;
+(void)setDisableBackgroundMetrics:(BOOL)arg1 ;
+(void)setFlushDelayEnabled:(BOOL)arg1 ;
+(id)serverTimeFromDate:(id)arg1 ;
+(double)timeIntervalFromServerTime:(id)arg1 ;
+(id)bagSubProfile;
+(BOOL)flushTimerEnabled;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(void)setFlushTimerEnabled:(BOOL)arg1 ;
+(id)createBagForSubProfile;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxBatchSize:(long long)arg1 ;
-(id)flushEvents:(id)arg1 ;
-(id)flush;
-(NSString *)containerId;
-(long long)maxBatchSize;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setDestination:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)engagementQueue;
-(BOOL)_scheduledFlushAllowedForStyle:(long long)arg1 ;
-(AMSMetricsDatabaseDataSource *)databaseSource;
-(void)_flushIntervalInvalidate;
-(void)setFlushingDisabled:(BOOL)arg1 ;
-(void)enqueueEvents:(id)arg1 ;
-(id<AMSMetricsBagContract>)bagContract;
-(id)flushIntervalBlock;
-(id<AMSBagProtocol>)bag;
-(BOOL)flushTimerEnabled;
-(void)_beginFlushIntervalWithStyle:(long long)arg1 events:(id)arg2 ;
-(id)_flushDataSource:(id)arg1 topic:(id)arg2 ;
-(id)flushTopic:(id)arg1 ;
-(void)setFlushIntervalBlock:(id)arg1 ;
-(id<AMSMetricsFlushStrategy>)currentFlushStrategy;
-(id)enqueueAsyncEvents:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 bag:(id)arg2 ;
-(void)setCurrentFlushStrategy:(id<AMSMetricsFlushStrategy>)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setEngagementQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(BOOL)flushOnForeground;
-(BOOL)flushingDisabled;
-(void)setMaxRequestCount:(long long)arg1 ;
-(void)setFlushOnForeground:(BOOL)arg1 ;
-(NSDate *)flushIntervalStartTime;
-(id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2 ;
-(double)_flushIntervalForEvents:(id)arg1 ;
-(long long)maxRequestCount;
-(void)enqueueEvent:(id)arg1 ;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(void)dropEvents;
-(void)cancel;
-(void)setFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)flushQueue;
-(long long)eventCount;
-(id)_enqueueFigaroEvents:(id)arg1 ;
-(void)setDatabaseSource:(AMSMetricsDatabaseDataSource *)arg1 ;
-(id)initWithContainerId:(id)arg1 bagContract:(id)arg2 ;
-(void)setFlushIntervalStartTime:(NSDate *)arg1 ;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(long long)destination;
-(void)_applicationWillEnterForeground;
-(void)setBagContract:(id<AMSMetricsBagContract>)arg1 ;
-(void)dealloc;
-(void)_handleFlushIntervalWithStyle:(long long)arg1 ;
@end

