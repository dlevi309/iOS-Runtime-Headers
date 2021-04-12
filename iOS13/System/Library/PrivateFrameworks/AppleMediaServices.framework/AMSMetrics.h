/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, OS_dispatch_queue, AMSMetricsFlushStrategy;
@class NSString, NSObject, AMSMetricsDatabaseDataSource;

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
	/*^block*/id _flushIntervalBlock;
	long long _destination;
	NSObject*<OS_dispatch_queue> _flushQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                  //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) id<AMSMetricsFlushStrategy> currentFlushStrategy;              //@synthesize currentFlushStrategy=_currentFlushStrategy - In the implementation block
@property (nonatomic,retain) AMSMetricsDatabaseDataSource * databaseSource;                 //@synthesize databaseSource=_databaseSource - In the implementation block
@property (assign,nonatomic) BOOL flushingDisabled;                                         //@synthesize flushingDisabled=_flushingDisabled - In the implementation block
@property (assign,nonatomic) BOOL flushOnForeground;                                        //@synthesize flushOnForeground=_flushOnForeground - In the implementation block
@property (nonatomic,copy) id flushIntervalBlock;                                           //@synthesize flushIntervalBlock=_flushIntervalBlock - In the implementation block
@property (assign,nonatomic) long long destination;                                         //@synthesize destination=_destination - In the implementation block
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
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_sharedInstanceUsingBag:(id)arg1 ;
+(id)sharedTimerQueue;
+(BOOL)diagnosticsSubmissionAllowed;
+(BOOL)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2 ;
+(id)serverTimeFromTimeInterval:(double)arg1 ;
+(BOOL)flushTimerEnabled;
+(BOOL)appAnalyticsAllowed;
+(BOOL)disableBackgroundMetrics;
+(BOOL)flushDelayEnabled;
+(void)setDisableBackgroundMetrics:(BOOL)arg1 ;
+(void)setFlushDelayEnabled:(BOOL)arg1 ;
+(void)setFlushTimerEnabled:(BOOL)arg1 ;
+(id)serverTimeFromDate:(id)arg1 ;
+(double)timeIntervalFromServerTime:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(long long)eventCount;
-(id)flush;
-(id)flushEvents:(id)arg1 ;
-(long long)maxBatchSize;
-(NSString *)containerId;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_applicationWillEnterForeground;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id<AMSMetricsBagContract>)bagContract;
-(void)setBagContract:(id<AMSMetricsBagContract>)arg1 ;
-(void)enqueueEvent:(id)arg1 ;
-(void)_beginFlushIntervalWithStyle:(long long)arg1 ;
-(id)initWithContainerID:(id)arg1 bag:(id)arg2 ;
-(BOOL)flushingDisabled;
-(NSObject*<OS_dispatch_queue>)flushQueue;
-(AMSMetricsDatabaseDataSource *)databaseSource;
-(BOOL)_flushIntervalEnabledForStyle:(long long)arg1 ;
-(void)setFlushingDisabled:(BOOL)arg1 ;
-(id<AMSMetricsFlushStrategy>)currentFlushStrategy;
-(void)enqueueEvents:(id)arg1 ;
-(id)enqueueAsyncEvents:(id)arg1 ;
-(id)_flushDataSource:(id)arg1 topic:(id)arg2 ;
-(BOOL)flushOnForeground;
-(void)setFlushOnForeground:(BOOL)arg1 ;
-(void)setMaxBatchSize:(long long)arg1 ;
-(long long)maxRequestCount;
-(void)setMaxRequestCount:(long long)arg1 ;
-(void)_flushIntervalInvalidate;
-(id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2 ;
-(void)setCurrentFlushStrategy:(id<AMSMetricsFlushStrategy>)arg1 ;
-(BOOL)flushTimerEnabled;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(double)_flushInterval;
-(void)_handleFlushIntervalWithStyle:(long long)arg1 ;
-(id)flushIntervalBlock;
-(void)setFlushIntervalBlock:(id)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(void)dropEvents;
-(id)flushTopic:(id)arg1 ;
-(id)initWithContainerId:(id)arg1 bagContract:(id)arg2 ;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(void)setDatabaseSource:(AMSMetricsDatabaseDataSource *)arg1 ;
-(void)setFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

