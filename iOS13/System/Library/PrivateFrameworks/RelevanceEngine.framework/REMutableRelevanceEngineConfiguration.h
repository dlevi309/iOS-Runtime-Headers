/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSURL, REDataSourceLoader, RERelevanceProviderManagerLoader, RELocationManager, REFeatureSet, NSString, NSArray;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> engineQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue; 
@property (nonatomic,copy) NSURL * modelFileURL; 
@property (nonatomic,copy) NSURL * baseModelFileURL; 
@property (assign,nonatomic) unsigned long long modelVersion; 
@property (assign,nonatomic) BOOL allowsUpdatingModelFile; 
@property (nonatomic,copy) REDataSourceLoader * dataSourceLoader; 
@property (nonatomic,copy) RERelevanceProviderManagerLoader * relevanceProviderManagerLoader; 
@property (assign,nonatomic) unsigned long long trainingBehavior; 
@property (assign,nonatomic) unsigned long long modelStorageBehavior; 
@property (nonatomic,retain) RELocationManager * locationManager; 
@property (nonatomic,copy) REFeatureSet * primaryFeatures; 
@property (assign,nonatomic) BOOL wantsImmutableContent; 
@property (nonatomic,copy) NSString * preferenceDomain; 
@property (assign,nonatomic) BOOL allowsRemoteTraining; 
@property (assign,nonatomic) BOOL wantsBackup; 
@property (assign,nonatomic) BOOL ignoreDeviceLockState; 
@property (assign,nonatomic) BOOL allowsDiagnosticExtension; 
@property (nonatomic,retain) id<RERelevanceEngineMetricsRecorder> metricsRecorder; 
@property (assign,nonatomic) BOOL ignoresInstalledApplications; 
@property (nonatomic,retain) NSArray * whitelistedDataSourceClassNames; 
+(id)defaultConfiguration;
+(id)defaultUpNextConfiguration;
+(id)sampleUpNextConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setModelVersion:(unsigned long long)arg1 ;
-(void)removeSectionAtIndex:(unsigned long long)arg1 ;
-(void)setLocationManager:(RELocationManager *)arg1 ;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeAllSections;
-(void)setMetricsRecorder:(id<RERelevanceEngineMetricsRecorder>)arg1 ;
-(void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_indexOfSectionWithName:(id)arg1 ;
-(void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_indexOfInteractionWithName:(id)arg1 ;
-(void)removeInteractionAtIndex:(unsigned long long)arg1 ;
-(void)setEngineQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setModelFileURL:(NSURL *)arg1 ;
-(void)setBaseModelFileURL:(NSURL *)arg1 ;
-(void)setAllowsUpdatingModelFile:(BOOL)arg1 ;
-(void)setDataSourceLoader:(REDataSourceLoader *)arg1 ;
-(void)setRelevanceProviderManagerLoader:(RERelevanceProviderManagerLoader *)arg1 ;
-(void)setTrainingBehavior:(unsigned long long)arg1 ;
-(void)setModelStorageBehavior:(unsigned long long)arg1 ;
-(void)addSectionWithDescriptor:(id)arg1 ;
-(void)removeSectionWithName:(id)arg1 ;
-(void)addInteractionWithDescriptor:(id)arg1 ;
-(void)removeAllInteractions;
-(void)setPrimaryFeatures:(REFeatureSet *)arg1 ;
-(void)setWantsImmutableContent:(BOOL)arg1 ;
-(void)setPreferenceDomain:(NSString *)arg1 ;
-(void)setAllowsRemoteTraining:(BOOL)arg1 ;
-(void)setWantsBackup:(BOOL)arg1 ;
-(void)setIgnoreDeviceLockState:(BOOL)arg1 ;
-(void)setAllowsDiagnosticExtension:(BOOL)arg1 ;
-(void)setIgnoresInstalledApplications:(BOOL)arg1 ;
@end

