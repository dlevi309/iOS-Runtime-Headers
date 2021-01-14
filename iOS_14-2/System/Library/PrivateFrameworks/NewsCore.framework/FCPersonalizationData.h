/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/FCPersonalizationDataSource.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSData, NSMutableDictionary, NSMutableArray, CKRecord, NSObject, FCPersonalizationTreatment, NSString;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource> {

	BOOL _attemptingUpload;
	NSData* _pbData;
	NSMutableDictionary* _aggregates;
	NSMutableDictionary* _openChangeGroupDeltas;
	NSMutableArray* _closedChangeGroups;
	CKRecord* _remoteRecord;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCPersonalizationTreatment* _treatment;
	id<FCOperationThrottler> _saveThrottler;

}

@property (nonatomic,retain) NSMutableDictionary * aggregates;                                     //@synthesize aggregates=_aggregates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * openChangeGroupDeltas;                          //@synthesize openChangeGroupDeltas=_openChangeGroupDeltas - In the implementation block
@property (nonatomic,retain) NSMutableArray * closedChangeGroups;                                  //@synthesize closedChangeGroups=_closedChangeGroups - In the implementation block
@property (nonatomic,retain) CKRecord * remoteRecord;                                              //@synthesize remoteRecord=_remoteRecord - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (retain) FCPersonalizationTreatment * treatment;                                         //@synthesize treatment=_treatment - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> saveThrottler;                               //@synthesize saveThrottler=_saveThrottler - In the implementation block
@property (assign) BOOL attemptingUpload;                                                          //@synthesize attemptingUpload=_attemptingUpload - In the implementation block
@property (nonatomic,readonly) FCPersonalizationTreatment * personalizationTreatment; 
@property (nonatomic,readonly) NSData * pbData;                                                    //@synthesize pbData=_pbData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localStoreMigrator;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordIDs;
+(BOOL)requiresHighPriorityFirstSync;
+(id)desiredKeys;
+(id)backingRecordZoneIDs;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
+(unsigned long long)localStoreVersion;
+(long long)commandQueueUrgency;
+(id)localStoreFilename;
+(id)commandStoreFileName;
+(BOOL)requiresBatchedSync;
-(FCPersonalizationTreatment *)treatment;
-(id<FCOperationThrottler>)saveThrottler;
-(void)saveReadableAggregates;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)d_allResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(NSMutableArray *)closedChangeGroups;
-(void)_reloadTreatment;
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
-(id)init;
-(void)activityObservingApplicationWillTerminate;
-(void)enumerateAggregatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setSaveThrottler:(id<FCOperationThrottler>)arg1 ;
-(NSMutableDictionary *)aggregates;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 groupBias:(double)arg7 ;
-(void)setTreatment:(FCPersonalizationTreatment *)arg1 ;
-(void)_writeToLocalStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)openChangeGroupDeltas;
-(CKRecord *)remoteRecord;
-(id)_instanceIdentifier;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(id)aggregatesForFeatures:(id)arg1 ;
-(id)createAggregateWith:(id)arg1 clicks:(double)arg2 impressions:(double)arg3 ;
-(void)activityObservingApplicationWindowDidBecomeBackground;
-(void)_closeOpenChangeGroupFromInstance:(id)arg1 ;
-(id)lookupAggregatesWith:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(void)submitPersonalizationVector;
-(void)clearPersonalizationData;
-(void)prepareAggregatesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(void)setOpenChangeGroupDeltas:(NSMutableDictionary *)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(NSData *)pbData;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2 ;
-(void)updateAggregatesWith:(id)arg1 creationBlock:(/*^block*/id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)_applicationDidEnterForeground;
-(id)initWithPBData:(id)arg1 treatment:(id)arg2 ;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)cacheGSToken;
-(id)d_allGlobalAggregates;
-(void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAttemptingUpload:(BOOL)arg1 ;
-(id)initWithAggregates:(id)arg1 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(BOOL)attemptingUpload;
-(void)setAggregates:(NSMutableDictionary *)arg1 ;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 groupType:(long long)arg5 individually:(BOOL)arg6 configurableValues:(id)arg7 featuresUpdatedBlock:(/*^block*/id)arg8 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

