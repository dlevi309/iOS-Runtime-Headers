/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSData, NSMutableDictionary, NSMutableArray, CKRecord, NSObject, FCPersonalizationTreatment, NSString;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData> {

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
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)localStoreMigrator;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)_applicationDidEnterBackground;
-(id)_instanceIdentifier;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(FCPersonalizationTreatment *)treatment;
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id<FCOperationThrottler>)saveThrottler;
-(void)setSaveThrottler:(id<FCOperationThrottler>)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(CKRecord *)remoteRecord;
-(NSMutableDictionary *)aggregates;
-(void)setRemoteRecord:(CKRecord *)arg1 ;
-(void)setTreatment:(FCPersonalizationTreatment *)arg1 ;
-(void)setAggregates:(NSMutableDictionary *)arg1 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(id)aggregatesForFeatures:(id)arg1 ;
-(NSMutableDictionary *)openChangeGroupDeltas;
-(void)_reloadTreatment;
-(NSData *)pbData;
-(void)setOpenChangeGroupDeltas:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)closedChangeGroups;
-(void)setClosedChangeGroups:(NSMutableArray *)arg1 ;
-(void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2 ;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(void)_closeOpenChangeGroupFromInstance:(id)arg1 ;
-(void)clearPersonalizationData;
-(BOOL)attemptingUpload;
-(void)setAttemptingUpload:(BOOL)arg1 ;
-(void)_writeToLocalStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(id)initWithPBData:(id)arg1 treatment:(id)arg2 ;
-(id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 groupBias:(double)arg7 ;
-(id)d_allGlobalAggregates;
-(void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateAggregatesUsingBlock:(/*^block*/id)arg1 ;
-(id)baselineAggregateWithConfigurableValues:(id)arg1 ;
-(void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 groupType:(long long)arg5 individually:(BOOL)arg6 configurableValues:(id)arg7 featuresUpdatedBlock:(/*^block*/id)arg8 ;
-(void)prepareAggregatesForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)d_allResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

