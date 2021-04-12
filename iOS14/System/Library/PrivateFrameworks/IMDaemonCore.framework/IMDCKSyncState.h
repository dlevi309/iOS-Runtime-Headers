/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMKeyValueCollectionDelegate.h>

@protocol IMDCKSyncStateDelegate;
@class IMKeyValueCollection, NSDate, NSDictionary, NSArray, NSString;

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate> {

	IMKeyValueCollection* _storage;
	id<IMDCKSyncStateDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long syncControllerSyncState; 
@property (assign,nonatomic) long long syncControllerRecordType; 
@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 
@property (assign,getter=isStartingPeriodicSyncSetByCloudKitHooks,nonatomic) BOOL startingPeriodicSyncSetByCloudKitHooks; 
@property (assign,getter=isStartingInitialSyncSetByCloudKitHooks,nonatomic) BOOL startingInitialSyncSetByCloudKitHooks; 
@property (nonatomic,readonly) IMKeyValueCollection * keyValueCollection;                                                              //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic,__weak) id<IMDCKSyncStateDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isFeatureEnabled,nonatomic) BOOL featureEnabled; 
@property (assign,nonatomic) BOOL createdChatZone; 
@property (assign,nonatomic) BOOL deletedZones; 
@property (assign,getter=isEligibleForTruthZone,nonatomic) BOOL eligibleForTruthZone; 
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled; 
@property (assign,getter=isRemovedFromBackup,nonatomic) BOOL removedFromBackup; 
@property (assign,getter=isInExitState,nonatomic) BOOL inExitState; 
@property (assign,getter=isSyncingPaused,nonatomic) BOOL syncingPaused; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (assign,getter=isDisablingDevices,nonatomic) BOOL disablingDevices; 
@property (assign,getter=isStartingEnabledSettingChange,nonatomic) BOOL startingEnabledSettingChange; 
@property (nonatomic,copy) NSDictionary * analyticSyncDatesDictionary; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (assign,nonatomic) long long accountStatus; 
@property (nonatomic,readonly) NSArray * syncErrors; 
@property (assign,nonatomic) long long syncControllerSyncType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeBuildObjectsFromDict:(id)arg1 ;
+(id)logHandle;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(id)serializedRepresentation;
-(BOOL)isSyncingEnabled;
-(void)setDisablingDevices:(BOOL)arg1 ;
-(id)init;
-(void)setSyncControllerSyncType:(long long)arg1 ;
-(BOOL)isRemovedFromBackup;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(id<IMDCKSyncStateDelegate>)delegate;
-(void)addSyncError:(id)arg1 ;
-(void)setStartingInitialSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(long long)accountStatus;
-(void)_setObject:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 shouldSetBuild:(BOOL)arg4 ;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 ;
-(void)setStartingPeriodicSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(id)_describeErrors:(id)arg1 ;
-(long long)syncControllerSyncType;
-(void)setSyncing:(BOOL)arg1 ;
-(BOOL)isFeatureEnabled;
-(NSDate *)exitDate;
-(BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)arg1 deletedZones:(BOOL)arg2 ;
-(NSDictionary *)analyticSyncDatesDictionary;
-(BOOL)isDisablingDevices;
-(void)broadcastSyncState;
-(void)setAccountStatus:(long long)arg1 ;
-(void)setInExitState:(BOOL)arg1 ;
-(void)_startBatchChange;
-(id)getAnalyticSyncDatesObjectForKey:(id)arg1 ;
-(void)_finishBatchChange;
-(BOOL)createdChatZone;
-(void)setFeatureEnabled:(BOOL)arg1 ;
-(void)setSyncingPaused:(BOOL)arg1 ;
-(BOOL)isSyncingPaused;
-(void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2 ;
-(long long)syncControllerRecordType;
-(void)setDelegate:(id<IMDCKSyncStateDelegate>)arg1 ;
-(NSString *)description;
-(void)setRemovedFromBackup:(BOOL)arg1 ;
-(BOOL)isSyncing;
-(id)syncReportDictionaryForAttempt:(unsigned long long)arg1 withSuccess:(BOOL)arg2 ;
-(void)setAnalyticSyncDatesDictionaryObject:(id)arg1 forKey:(id)arg2 shouldOverrideIfExists:(BOOL)arg3 ;
-(void)_setStartingSync;
-(void)setErrorToAccountNeedsRepair;
-(BOOL)isInExitState;
-(id)logHandle;
-(void)setEligibleForTruthZone:(BOOL)arg1 ;
-(void)setSyncingFinished;
-(void)_removeObjectForKey:(id)arg1 forDictionary:(id)arg2 ;
-(IMKeyValueCollection *)keyValueCollection;
-(NSDate *)lastSyncDate;
-(BOOL)isStartingPeriodicSyncSetByCloudKitHooks;
-(id)syncReportDictionary;
-(BOOL)isStartingInitialSyncSetByCloudKitHooks;
-(void)clearLocalCloudKitSyncState;
-(BOOL)isStartingEnabledSettingChange;
-(void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg1 ;
-(id)describeErrors;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2 ;
-(id)initWithKeyValueCollection:(id)arg1 ;
-(void)clearSyncErrors;
-(BOOL)isEligibleForTruthZone;
-(void)setDeletedZones:(BOOL)arg1 ;
-(void)setCreatedChatZone:(BOOL)arg1 ;
-(NSArray *)syncErrors;
-(void)setStartingPeriodicSyncWithRecordType:(long long)arg1 ;
-(BOOL)deletedZones;
-(id)syncUserType;
-(void)setSyncControllerRecordType:(long long)arg1 ;
-(void)setStartingEnabledSettingChange:(BOOL)arg1 ;
-(void)setAnalyticSyncDatesDictionary:(NSDictionary *)arg1 ;
-(void)setStartingInitialSyncWithRecordType:(long long)arg1 ;
-(void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(void)setErrorToKeyRollingError;
-(unsigned long long)syncControllerSyncState;
@end

