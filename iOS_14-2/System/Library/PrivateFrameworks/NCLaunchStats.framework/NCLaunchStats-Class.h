/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats
*/


@protocol OS_os_log, OS_dispatch_queue, _DKKnowledgeSaving_DKKnowledgeDeleting_DKKnowledgeQuerying, _DASActivityScheduler;
@class NSMutableDictionary, NSObject, _DKEventStream, _DKPredictor, _DKPredictionTimeline, NSSet, _DASActivity;

@interface NCLaunchStats : NSObject {

	NSMutableDictionary* prewarmTimeTracker;
	NSMutableDictionary* prewarmDurationTracker;
	NSMutableDictionary* launchTracker;
	long long numRepeatedPrewarms;
	long long numPrewarmedLaunches;
	int classCLockedToken;
	BOOL isClassCLocked;
	BOOL backgroundAppRefreshSwitchedOn;
	double kTimeGuardBand;
	int predictedWidgetsToken;
	int generatePredictionToken;
	int appSpecificTriggerToken;
	BOOL _defaultRequiresNetwork;
	/*^block*/id _asyncRecommendHandler;
	NSObject*<OS_os_log> _ncLog;
	NSObject*<OS_dispatch_queue> _syncQueue;
	unsigned long long _defaultSchedulingPriority;
	NSMutableDictionary* _widgetViewTime;
	_DKEventStream* _widgetStream;
	id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> _store;
	_DKPredictor* _predictor;
	_DKPredictionTimeline* _predictionTimeline;
	NSSet* _bootstrapWidgetIds;
	_DKPredictionTimeline* _bootstrapWidgetTimeline;
	_DASActivity* _bootstrapWidgetPrewarmActivity;
	id<_DASActivityScheduler> _scheduler;
	_DASActivity* _predictionUpdateActivity;
	_DASActivity* _widgetPrewarmActivity;
	_DASActivity* _historyDeletionActivity;
	NSMutableDictionary* _appsRequestingRefresh;
	NSMutableDictionary* _appUpdateTimes;

}

@property (nonatomic,copy) id asyncRecommendHandler;                                                                //@synthesize asyncRecommendHandler=_asyncRecommendHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> ncLog;                                                            //@synthesize ncLog=_ncLog - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) unsigned long long defaultSchedulingPriority;                                          //@synthesize defaultSchedulingPriority=_defaultSchedulingPriority - In the implementation block
@property (assign,nonatomic) BOOL defaultRequiresNetwork;                                                           //@synthesize defaultRequiresNetwork=_defaultRequiresNetwork - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * widgetViewTime;                                                  //@synthesize widgetViewTime=_widgetViewTime - In the implementation block
@property (nonatomic,retain) _DKEventStream * widgetStream;                                                         //@synthesize widgetStream=_widgetStream - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) _DKPredictor * predictor;                                                              //@synthesize predictor=_predictor - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * predictionTimeline;                                            //@synthesize predictionTimeline=_predictionTimeline - In the implementation block
@property (nonatomic,retain) NSSet * bootstrapWidgetIds;                                                            //@synthesize bootstrapWidgetIds=_bootstrapWidgetIds - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * bootstrapWidgetTimeline;                                       //@synthesize bootstrapWidgetTimeline=_bootstrapWidgetTimeline - In the implementation block
@property (nonatomic,retain) _DASActivity * bootstrapWidgetPrewarmActivity;                                         //@synthesize bootstrapWidgetPrewarmActivity=_bootstrapWidgetPrewarmActivity - In the implementation block
@property (nonatomic,retain) id<_DASActivityScheduler> scheduler;                                                   //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) _DASActivity * predictionUpdateActivity;                                               //@synthesize predictionUpdateActivity=_predictionUpdateActivity - In the implementation block
@property (nonatomic,retain) _DASActivity * widgetPrewarmActivity;                                                  //@synthesize widgetPrewarmActivity=_widgetPrewarmActivity - In the implementation block
@property (nonatomic,retain) _DASActivity * historyDeletionActivity;                                                //@synthesize historyDeletionActivity=_historyDeletionActivity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appsRequestingRefresh;                                           //@synthesize appsRequestingRefresh=_appsRequestingRefresh - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appUpdateTimes;                                                  //@synthesize appUpdateTimes=_appUpdateTimes - In the implementation block
+(void)scheduleDeletionActivity:(id)arg1 store:(id)arg2 stream:(id)arg3 ;
+(double)minTimeBetweenRefreshes;
+(double)minTimeBootstrappingRandomizationSeed;
-(NSObject*<OS_os_log>)ncLog;
-(_DKPredictor *)predictor;
-(_DASActivity *)predictionUpdateActivity;
-(void)updateBARSwitch;
-(void)setPredictor:(_DKPredictor *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(NSMutableDictionary *)widgetViewTime;
-(id)nextPredictedRefreshDate:(id)arg1 afterDate:(id)arg2 ;
-(id)predictedWidgetsForDate:(id)arg1 withTimeline:(id)arg2 ;
-(id)widgetsToRefreshAtDate:(id)arg1 withTimeline:(id)arg2 ;
-(void)setStore:(id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying>)arg1 ;
-(void)recordOccurrenceForKey:(id)arg1 ;
-(id)init;
-(id<_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying>)store;
-(_DKPredictionTimeline *)bootstrapWidgetTimeline;
-(void)setNcLog:(NSObject*<OS_os_log>)arg1 ;
-(id)earliestRequestedRefresh:(id)arg1 atDate:(id)arg2 ;
-(void)setBootstrapWidgetPrewarmActivity:(_DASActivity *)arg1 ;
-(void)endEvent:(id)arg1 ;
-(_DASActivity *)historyDeletionActivity;
-(void)incrementOccurrencesForKey:(id)arg1 byCount:(long long)arg2 ;
-(void)setAsyncRecommendHandler:(id)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2 ;
-(void)setWidgetStream:(_DKEventStream *)arg1 ;
-(void)setHistoryDeletionActivity:(_DASActivity *)arg1 ;
-(void)setPredictionTimeline:(_DKPredictionTimeline *)arg1 ;
-(void)setWidgetViewTime:(NSMutableDictionary *)arg1 ;
-(BOOL)canUpdateWidgetsUnsafe;
-(void)recordPrewarmStatisticsRaw:(id)arg1 ;
-(NSMutableDictionary *)appsRequestingRefresh;
-(unsigned long long)defaultSchedulingPriority;
-(_DASActivity *)widgetPrewarmActivity;
-(void)scheduleBootstrapWidgetRefresh;
-(NSMutableDictionary *)appUpdateTimes;
-(_DKEventStream *)widgetStream;
-(void)updateBootstrapWidgetsAtDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startEvent:(id)arg1 ;
-(void)updateWidgetsAtDate:(id)arg1 withTimeline:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSSet *)bootstrapWidgetIds;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)setScheduler:(id<_DASActivityScheduler>)arg1 ;
-(void)unprotectedRemoveRequestsForWidget:(id)arg1 beforeDate:(id)arg2 ;
-(void)setDefaultRequiresNetwork:(BOOL)arg1 ;
-(id)bootstrapStartAfterDate:(id)arg1 ;
-(_DKPredictionTimeline *)predictionTimeline;
-(void)setBootstrapWidgetTimeline:(_DKPredictionTimeline *)arg1 ;
-(BOOL)defaultRequiresNetwork;
-(void)cancelRequestedRefreshForWidget:(id)arg1 ;
-(void)setWidgetPrewarmActivity:(_DASActivity *)arg1 ;
-(void)setNCLaunchRecommendationHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)setAppsRequestingRefresh:(NSMutableDictionary *)arg1 ;
-(void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2 ;
-(void)setDefaultSchedulingPriority:(unsigned long long)arg1 ;
-(void)unprotectedRemoveAllRequestsBeforeDate:(id)arg1 ;
-(void)setNCLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)setBootstrapWidgetIDs:(id)arg1 ;
-(BOOL)immediateUpdatesAllowedForWidgetUnsafe:(id)arg1 ;
-(id)predictedWidgetUsage;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)setBootstrapWidgetIds:(NSSet *)arg1 ;
-(_DASActivity *)bootstrapWidgetPrewarmActivity;
-(void)initAfterClassCUnlocked;
-(id)asyncRecommendHandler;
-(void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2 cancelExisting:(BOOL)arg3 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)schedulePredictionUpdateBeforeDate:(id)arg1 ;
-(void)setAppUpdateTimes:(NSMutableDictionary *)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 defaultSchedulingPriority:(unsigned long long)arg2 defaultRequiresNetwork:(BOOL)arg3 ;
-(void)setPredictionUpdateActivity:(_DASActivity *)arg1 ;
-(void)dealloc;
-(id<_DASActivityScheduler>)scheduler;
@end

