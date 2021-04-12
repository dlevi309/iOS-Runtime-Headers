/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/RESectionDelegate.h>
#import <libobjc.A.dylib/RERelevanceProviderEnvironmentDelegate.h>
#import <libobjc.A.dylib/REMLModelManagerObserver.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REElementRelevanceEngineProperties.h>
#import <libobjc.A.dylib/REFeatureTransformerInvalidationDelegate.h>
#import <libobjc.A.dylib/REMLModelManagerDataStore.h>

@protocol OS_dispatch_queue, REElementRelevanceEngineDelegate;
@class NSDictionary, REPredictorManager, RERelevanceProviderEnvironment, NSMutableSet, NSMutableDictionary, NSMapTable, REKeyMultiValueMap, REFeatureSet, REDataSourceManager, REFeatureTransmuter, REUpNextScheduler, NSObject, NSArray, NSString;

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver, REElementRelevanceEngineProperties, REFeatureTransformerInvalidationDelegate, REMLModelManagerDataStore> {

	NSMutableSet* _elementsNeedingRelevanceUpdate;
	NSMutableDictionary* _sections;
	NSMutableDictionary* _predictedElements;
	NSMapTable* _relevanceProviderElementMap;
	REKeyMultiValueMap* _identifierElementIdentifierMap;
	REFeatureSet* _persistenceFeatures;
	REPredictorManager* _predictorManager;
	RERelevanceProviderEnvironment* _providerEnvironment;
	REDataSourceManager* _dataSourceManager;
	REFeatureTransmuter* _featureTransmuter;
	REUpNextScheduler* _scheduler;
	REUpNextScheduler* _predictorUpdatedScheduler;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _deviceIsLocked;
	BOOL _ignoreDeviceLockState;
	id<REElementRelevanceEngineDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<REElementRelevanceEngineDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * sectionsMap; 
@property (nonatomic,readonly) REPredictorManager * predictorManager; 
@property (nonatomic,readonly) RERelevanceProviderEnvironment * providerEnvironment; 
-(id<REElementRelevanceEngineDelegate>)delegate;
-(void)pause;
-(NSArray *)sections;
-(void)setDelegate:(id<REElementRelevanceEngineDelegate>)arg1 ;
-(id)dataStoreKey;
-(void)refreshContent;
-(void)resume;
-(void)removeElement:(id)arg1 ;
-(void)dealloc;
-(void)addElement:(id)arg1 section:(id)arg2 ;
-(id)predictionForElement:(id)arg1 ;
-(unsigned long long)numberOfElementsInSection:(id)arg1 ;
-(id)elementAtPath:(id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(id)relevanceProviderEnvironment;
-(void)_onqueue_async:(/*^block*/id)arg1 ;
-(void)modelManagerDidUpdateModel:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(id)section:(id)arg1 groupForIdentifier:(id)arg2 ;
-(void)sectionDidUpdateContentOrder:(id)arg1 ;
-(id)featureMapForElement:(id)arg1 trainingContext:(id)arg2 ;
-(BOOL)modelManager:(id)arg1 loadDataStoreFromURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)modelManager:(id)arg1 saveDataStoreToURL:(id)arg2 error:(id*)arg3 ;
-(id)pathForElement:(id)arg1 ;
-(id)elementRankerForSection:(id)arg1 ;
-(id)featureProviderForElement:(id)arg1 ;
-(void)predictor:(id)arg1 didBeginActivity:(id)arg2 ;
-(void)predictor:(id)arg1 didFinishActivity:(id)arg2 ;
-(void)featureTransformerDidInvalidate:(id)arg1 ;
-(void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2 ;
-(void)_queue_updateElementRelevance;
-(void)_updateStateBasedOnPredictor;
-(void)_enumerateAndGenerateSectionComparators:(/*^block*/id)arg1 ;
-(void)_checkPreferences;
-(void)_queue_scheduleRelevanceUpdateForElement:(id)arg1 ;
-(id)sectionForElement:(id)arg1 ;
-(void)_performUpdatesToDelegate:(/*^block*/id)arg1 ;
-(BOOL)_elementIsFullyLoaded:(id)arg1 ;
-(id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2 ;
-(id)_allCurrentElements;
-(id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2 ;
-(id)_generateFeatureMapForElement:(id)arg1 ;
-(NSDictionary *)sectionsMap;
-(REPredictorManager *)predictorManager;
-(RERelevanceProviderEnvironment *)providerEnvironment;
-(void)reloadElement:(id)arg1 withElement:(id)arg2 ;
-(id)featureMapForPredictedElement:(id)arg1 trainingContext:(id)arg2 ;
-(id)_identifierForElementIdentifier:(id)arg1 ;
-(id)_elementIdentifierForIdentifier:(id)arg1 ;
@end

