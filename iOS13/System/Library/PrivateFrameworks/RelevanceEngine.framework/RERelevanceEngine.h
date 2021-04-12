/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/RERelevanceEngineProperties.h>
#import <libobjc.A.dylib/REActivityTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, RERelevanceEngineConfiguration, REFeatureSet, NSArray, RELiveElementCoordinator, REDataSourceManager, REMLModelManager, NSObject, NSMutableArray, REFeatureMapGenerator, REFeatureTransmuter, RETrainingManager, REDataSourceCatalog, RERelevanceEnginePreferencesController, REEngineLocationManager, RERelevanceEngineLogger, REActivityTracker, _REEngineDefaults, NSMutableDictionary, NSDictionary, REUpNextScheduler, RERelevanceEnginePreferences;

@interface RERelevanceEngine : NSObject <RERelevanceEngineProperties, REActivityTrackerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableArray* _subsystems;
	REFeatureSet* _rootFeatures;
	REFeatureSet* _mlFeatures;
	NSString* _name;
	RELiveElementCoordinator* _coordinator;
	REDataSourceManager* _dataSourceManager;
	REMLModelManager* _modelManager;
	REFeatureMapGenerator* _inputFeatureMapGenerator;
	REFeatureMapGenerator* _outputFeatureMapGenerator;
	REFeatureTransmuter* _featureTransmuter;
	RETrainingManager* _trainingManager;
	REDataSourceCatalog* _dataSourceCatalog;
	RERelevanceEnginePreferencesController* _preferenceController;
	REEngineLocationManager* _locationManager;
	RERelevanceEngineLogger* _logger;
	REActivityTracker* _activityTracker;
	_REEngineDefaults* _defaults;
	NSMutableDictionary* _addedElementsByIdentifier;
	NSArray* _configurationSectionDescriptors;
	NSArray* _sectionDescriptors;
	NSArray* _historicSectionDescriptors;
	NSDictionary* _inflectionFeatureValues;
	BOOL _running;
	BOOL _updatedLoading;
	BOOL _loading;
	REUpNextScheduler* _loadingScheduler;
	os_unfair_lock_s _activityTrackerLock;
	/*^block*/id _resumeCompletionBlock;
	BOOL _automaticallyResumeEngine;
	RERelevanceEngineConfiguration* _configuration;

}

@property (nonatomic,readonly) RELiveElementCoordinator * coordinator; 
@property (nonatomic,readonly) REDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) REMLModelManager * modelManager; 
@property (nonatomic,readonly) RETrainingManager * trainingManager; 
@property (nonatomic,readonly) REEngineLocationManager * locationManager; 
@property (nonatomic,readonly) RERelevanceEngineLogger * logger; 
@property (nonatomic,readonly) BOOL wantsImmutableContent; 
@property (nonatomic,readonly) _REEngineDefaults * defaults; 
@property (nonatomic,readonly) NSArray * sectionDescriptors; 
@property (nonatomic,readonly) NSArray * historicSectionDescriptors; 
@property (nonatomic,readonly) NSDictionary * inflectionFeatureValues; 
@property (nonatomic,readonly) REFeatureTransmuter * featureTransmuter; 
@property (nonatomic,readonly) REFeatureSet * rootFeatures; 
@property (nonatomic,readonly) REFeatureSet * mlFeatures; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) RERelevanceEngineConfiguration * configuration; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> subsystemQueue; 
@property (nonatomic,readonly) RERelevanceEngineConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) RERelevanceEnginePreferences * effectivePreferences; 
@property (nonatomic,readonly) REDataSourceCatalog * dataSourceCatalog; 
@property (getter=isRunning,readonly) BOOL running; 
@property (assign,nonatomic) BOOL automaticallyResumeEngine;                                     //@synthesize automaticallyResumeEngine=_automaticallyResumeEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)prewarmWithConfiguration:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)pause;
-(void)resume;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isRunning;
-(RERelevanceEngineLogger *)logger;
-(id)initWithConfiguration:(id)arg1 ;
-(_REEngineDefaults *)defaults;
-(RERelevanceEngineConfiguration *)configuration;
-(RELiveElementCoordinator *)coordinator;
-(void)removeElement:(id)arg1 ;
-(NSArray *)subsystems;
-(REEngineLocationManager *)locationManager;
-(REDataSourceManager *)dataSourceManager;
-(REMLModelManager *)modelManager;
-(NSArray *)sectionDescriptors;
-(NSDictionary *)inflectionFeatureValues;
-(void)beginActivity:(id)arg1 forObject:(id)arg2 ;
-(void)endActivity:(id)arg1 forObject:(id)arg2 ;
-(BOOL)wantsImmutableContent;
-(void)enumerateSectionDescriptorsWithOptions:(unsigned long long)arg1 includeHistoric:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)storeDiagnosticLogs:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfElementsInSection:(id)arg1 ;
-(id)elementAtPath:(id)arg1 ;
-(RETrainingManager *)trainingManager;
-(void)addTrainingContext:(id)arg1 ;
-(void)removeTrainingContext:(id)arg1 ;
-(REFeatureSet *)mlFeatures;
-(REFeatureSet *)rootFeatures;
-(id)initWithName:(id)arg1 configuration:(id)arg2 ;
-(void)_callbackQueue_notifyLoadingState;
-(void)trainPendingEventsWithCompletion:(/*^block*/id)arg1 ;
-(id)pathForElement:(id)arg1 ;
-(void)enumerateRankedContentInSection:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyResumeCompleted;
-(void)_queue_resumeSubsystem:(id)arg1 ;
-(void)_queue_resumeWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_pauseSubsystem:(id)arg1 ;
-(RERelevanceEnginePreferences *)effectivePreferences;
-(void)setPreferences:(id)arg1 forObject:(id)arg2 ;
-(void)removePreferencesForObject:(id)arg1 ;
-(void)activityTracker:(id)arg1 didBeginActivity:(id)arg2 ;
-(void)activityTracker:(id)arg1 didEndActivity:(id)arg2 ;
-(REDataSourceCatalog *)dataSourceCatalog;
-(void)trainWithPendingEvents;
-(void)saveModelFile;
-(void)enumerateRankedContent:(/*^block*/id)arg1 ;
-(void)addElement:(id)arg1 section:(id)arg2 ;
-(void)resumeWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)automaticallyResumeEngine;
-(void)setAutomaticallyResumeEngine:(BOOL)arg1 ;
-(id)elementRankerForSection:(id)arg1 ;
-(NSArray *)historicSectionDescriptors;
-(REFeatureTransmuter *)featureTransmuter;
-(id)newInputFeatureMap;
-(id)newOutputFeatureMap;
-(id)elementFromDictionary:(id)arg1 ;
-(id)dictionaryFromElement:(id)arg1 ;
-(BOOL)isSectionWithNameHistoric:(id)arg1 ;
-(id)historicSectionForSection:(id)arg1 ;
-(id)sectionForHistoricSection:(id)arg1 ;
-(void)_addSubsystem:(id)arg1 ;
-(void)_removeSubsystem:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)subsystemQueue;
-(void)_captureAndStoreDiagnosticLogs:(/*^block*/id)arg1 ;
-(void)storeDiagnosticLogsToFile:(/*^block*/id)arg1 ;
-(id)predictionForElementAtPath:(id)arg1 ;
-(id)predictionForElement:(id)arg1 ;
-(id)featureProviderForElement:(id)arg1 ;
-(id)featureProviderForElementAtPath:(id)arg1 ;
-(void)pauseForSimulation;
-(void)resumeFromSimulation;
-(void)resetModelWithCompletion:(/*^block*/id)arg1 ;
-(void)gatherMetrics;
@end

