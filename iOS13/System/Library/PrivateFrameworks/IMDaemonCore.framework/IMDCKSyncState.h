/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)logHandle;
+(void)removeBuildObjectsFromDict:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id<IMDCKSyncStateDelegate>)delegate;
-(void)setDelegate:(id<IMDCKSyncStateDelegate>)arg1 ;
-(id)serializedRepresentation;
-(NSDate *)lastSyncDate;
-(NSDate *)exitDate;
-(long long)accountStatus;
-(void)setAccountStatus:(long long)arg1 ;
-(id)logHandle;
-(void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2 ;
-(void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(BOOL)isFeatureEnabled;
-(BOOL)isSyncing;
-(BOOL)isSyncingEnabled;
-(BOOL)isInExitState;
-(void)clearLocalCloudKitSyncState;
-(unsigned long long)syncControllerSyncState;
-(BOOL)isDisablingDevices;
-(BOOL)isSyncingPaused;
-(long long)syncControllerSyncType;
-(long long)syncControllerRecordType;
-(void)setFeatureEnabled:(BOOL)arg1 ;
-(void)setSyncing:(BOOL)arg1 ;
-(void)setEligibleForTruthZone:(BOOL)arg1 ;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 ;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(id)initWithKeyValueCollection:(id)arg1 ;
-(void)setSyncingPaused:(BOOL)arg1 ;
-(void)setRemovedFromBackup:(BOOL)arg1 ;
-(void)setErrorToKeyRollingError;
-(void)broadcastSyncState;
-(void)_startBatchChange;
-(void)_finishBatchChange;
-(void)clearSyncErrors;
-(void)setErrorToAccountNeedsRepair;
-(void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg1 ;
-(id)getAnalyticSyncDatesObjectForKey:(id)arg1 ;
-(id)syncReportDictionary;
-(void)setAnalyticSyncDatesDictionaryObject:(id)arg1 forKey:(id)arg2 shouldOverrideIfExists:(BOOL)arg3 ;
-(void)addSyncError:(id)arg1 ;
-(id)syncReportDictionaryForAttempt:(unsigned long long)arg1 withSuccess:(BOOL)arg2 ;
-(IMKeyValueCollection *)keyValueCollection;
-(NSDictionary *)analyticSyncDatesDictionary;
-(void)_removeObjectForKey:(id)arg1 forDictionary:(id)arg2 ;
-(void)setAnalyticSyncDatesDictionary:(NSDictionary *)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 shouldSetBuild:(BOOL)arg4 ;
-(NSArray *)syncErrors;
-(id)_describeErrors:(id)arg1 ;
-(BOOL)createdChatZone;
-(BOOL)deletedZones;
-(BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)arg1 deletedZones:(BOOL)arg2 ;
-(id)syncUserType;
-(id)describeErrors;
-(BOOL)isEligibleForTruthZone;
-(BOOL)isRemovedFromBackup;
-(BOOL)isStartingEnabledSettingChange;
-(void)setStartingPeriodicSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(void)setStartingInitialSyncSetByCloudKitHooks:(BOOL)arg1 ;
-(void)setSyncControllerRecordType:(long long)arg1 ;
-(void)setSyncControllerSyncType:(long long)arg1 ;
-(void)setStartingEnabledSettingChange:(BOOL)arg1 ;
-(void)setDisablingDevices:(BOOL)arg1 ;
-(void)_setStartingSync;
-(void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2 ;
-(void)setCreatedChatZone:(BOOL)arg1 ;
-(void)setDeletedZones:(BOOL)arg1 ;
-(void)setInExitState:(BOOL)arg1 ;
-(BOOL)isStartingPeriodicSyncSetByCloudKitHooks;
-(BOOL)isStartingInitialSyncSetByCloudKitHooks;
-(void)setSyncingFinished;
-(void)setStartingPeriodicSyncWithRecordType:(long long)arg1 ;
-(void)setStartingInitialSyncWithRecordType:(long long)arg1 ;
@end

