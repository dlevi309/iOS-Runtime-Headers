/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/REMLModelManagerProperties.h>

@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;
@class REMLModel, REContentRanker, NSArray, REMLLinearModel, REMLMetricsSet, NSObject, REObserverStore, NSString, NSDate;

@interface REMLModelManager : RERelevanceEngineSubsystem <REMLModelManagerProperties> {

	REMLLinearModel* _model;
	REContentRanker* _contentRanker;
	REMLMetricsSet* _metrics;
	NSObject*<OS_dispatch_queue> _trainingQueue;
	REObserverStore* _observers;
	NSString* _modelFileLocation;
	BOOL _supportsContentRanking;
	NSArray* _orderedFeatures;
	unsigned long long _modelStorageBehavior;
	REObserverStore* _dataStores;
	id<RERelevanceEngineMetricsRecorder> _metricsRecoder;
	NSDate* _lastCacheResetDate;
	unsigned long long _modelVersionNumber;
	BOOL _validModel;

}

@property (nonatomic,readonly) unsigned long long modelVersionNumber; 
@property (nonatomic,readonly) REMLModel * model; 
@property (nonatomic,readonly) REContentRanker * contentRanker; 
@property (nonatomic,readonly) BOOL supportsContentRanking; 
@property (nonatomic,readonly) NSArray * orderedFeatures; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(REMLModel *)model;
-(void)_logMetrics;
-(id)sentimentAnalyzer;
-(id)comparatorWithRules:(id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(void)flushTraining;
-(void)performTrainingWithFeatureMaps:(id)arg1 content:(id)arg2 events:(id)arg3 interactions:(id)arg4 purgeCaches:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_loadModelAtPath:(id)arg1 mlFeatures:(id)arg2 checkModelVersion:(BOOL)arg3 ;
-(id)_createOrderFeatureListFromModelFileURL:(id)arg1 mlFeatures:(id)arg2 ;
-(void)_saveDataStoresToURL:(id)arg1 ;
-(id)createOutputFeatureFromDouble:(double)arg1 error:(id*)arg2 ;
-(BOOL)_saveModelToDisk:(id*)arg1 ;
-(void)_notifyObserversThatModelUpdated;
-(unsigned long long)modelVersionNumber;
-(REContentRanker *)contentRanker;
-(BOOL)supportsContentRanking;
-(NSArray *)orderedFeatures;
-(void)addDataStore:(id)arg1 ;
-(void)removeDataStore:(id)arg1 ;
-(void)manuallySaveModel;
-(void)performModelClearWithCompletion:(/*^block*/id)arg1 ;
-(id)predicitionForLogicalElement:(id)arg1 ;
-(id)_orderedModelFeatures;
@end

