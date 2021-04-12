/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/RERelevanceProviderEnvironmentProperties.h>
#import <libobjc.A.dylib/REElementRelevanceProviderGenerator.h>

@protocol RERelevanceProviderEnvironmentDelegate;
@class REFeatureSet, NSDictionary, NSMutableArray, NSMapTable, REUpNextDisjointSet, REDependencyGraph, NSHashTable, NSLock, REUpNextScheduler, NSMutableSet;

@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem <RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator> {

	NSMutableArray* _relevanceManagers;
	NSMapTable* _relevanceClassManagerMap;
	NSMapTable* _relevanceHistogramMap;
	REUpNextDisjointSet* _relevanceProviderSet;
	REDependencyGraph* _dependencyGraph;
	NSMapTable* _relevanceValues;
	NSHashTable* _customProviders;
	NSLock* _relevanceValuesLock;
	REFeatureSet* _supportedFeatures;
	REUpNextScheduler* _scheduler;
	NSHashTable* _providersToUpdate;
	NSMutableSet* _providerManagersToUpdate;
	NSMutableArray* _updateCompletionBlocks;
	BOOL _allowsLocationUse;
	id<RERelevanceProviderEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RERelevanceProviderEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsLocationUse;                                                  //@synthesize allowsLocationUse=_allowsLocationUse - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceProviderCount; 
@property (nonatomic,readonly) REFeatureSet * supportedFeatures; 
@property (nonatomic,readonly) NSDictionary * allProviderValues; 
-(id<RERelevanceProviderEnvironmentDelegate>)delegate;
-(void)pause;
-(void)setDelegate:(id<RERelevanceProviderEnvironmentDelegate>)arg1 ;
-(REFeatureSet *)supportedFeatures;
-(void)resume;
-(void)dealloc;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleUpdateForRelevanceProviderManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleUpdateForRelevanceProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)allowsLocationUse;
-(BOOL)isSupportedRelevanceProvider:(id)arg1 ;
-(id)currentRelevanceProvidersState;
-(void)_setupRelevanceProviderManagers;
-(void)_queue_performUpdate:(/*^block*/id)arg1 ;
-(id)_histogramForFeature:(id)arg1 ;
-(id)_providerManagerForProvider:(id)arg1 ;
-(void)_removeRelevanceValueForProvider:(id)arg1 ;
-(void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2 ;
-(id)_histogramForProvider:(id)arg1 ;
-(BOOL)containsRelevanceProvider:(id)arg1 ;
-(id)relevancesForRelevanceProvider:(id)arg1 ;
-(void)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2 ;
-(id)featuresForRelevanceProvider:(id)arg1 ;
-(id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2 ;
-(NSDictionary *)allProviderValues;
-(id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2 ;
-(id)encodeRelevaneProvider:(id)arg1 ;
-(unsigned long long)relevanceProviderCount;
-(void)addRelevanceProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRelevanceProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isRelevanceProviderLoaded:(id)arg1 ;
-(void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2 ;
-(BOOL)isRelevanceProviderHistoric:(id)arg1 ;
-(id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2 ;
-(void)accessHistogramForFeature:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

