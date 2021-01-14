/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@protocol OS_dispatch_queue;
@class NSDate, NSError, CKRecordID, NSNumber, NSObject, IMDRecordZoneManager, IMDCKDatabaseManager;

@interface IMDCKExitManager : IMDCKAbstractSyncController {

	BOOL _fetchedExitDateOnLaunch;
	NSDate* _exitRecordDate;
	NSError* _errorFetchingExitDate;
	CKRecordID* _exitRecordID;
	NSNumber* _saltZoneCreatedOverride;
	NSNumber* _subscriptionCreatedOverride;
	NSObject*<OS_dispatch_queue> _ckQueue;
	IMDRecordZoneManager* _recordZoneManager;
	IMDCKDatabaseManager* _databaseManager;

}

@property (nonatomic,retain) CKRecordID * exitRecordID;                             //@synthesize exitRecordID=_exitRecordID - In the implementation block
@property (nonatomic,retain) NSNumber * saltZoneCreatedOverride;                    //@synthesize saltZoneCreatedOverride=_saltZoneCreatedOverride - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionCreatedOverride;                //@synthesize subscriptionCreatedOverride=_subscriptionCreatedOverride - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;                //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) IMDRecordZoneManager * recordZoneManager;              //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,retain) IMDCKDatabaseManager * databaseManager;                //@synthesize databaseManager=_databaseManager - In the implementation block
@property (nonatomic,retain) NSDate * exitRecordDate;                               //@synthesize exitRecordDate=_exitRecordDate - In the implementation block
@property (nonatomic,retain) NSError * errorFetchingExitDate;                       //@synthesize errorFetchingExitDate=_errorFetchingExitDate - In the implementation block
@property (assign,nonatomic) BOOL fetchedExitDateOnLaunch;                          //@synthesize fetchedExitDateOnLaunch=_fetchedExitDateOnLaunch - In the implementation block
+(id)sharedInstance;
-(void)setRecordZoneManager:(IMDRecordZoneManager *)arg1 ;
-(id)init;
-(NSNumber *)saltZoneCreatedOverride;
-(BOOL)fetchedExitDateOnLaunch;
-(id)syncCompleteRecordID;
-(CKRecordID *)exitRecordID;
-(void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
-(void)setFetchedExitDateOnLaunch:(BOOL)arg1 ;
-(id)analyticZoneRecordID;
-(void)deleteExitRecordWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(long long)derivedQualityOfService;
-(id)_sharedCKUtilities;
-(id)exitConfiguration;
-(void)_submitCloudKitMetricWithOperationGroupName:(id)arg1 record:(id)arg2 useManatee:(BOOL)arg3 ignoreZoneNotFoundError:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(NSNumber *)subscriptionCreatedOverride;
-(BOOL)_canSubmitCloudKitMetric;
-(void)handleNotificationForSubscriptionID:(id)arg1 ;
-(void)setExitRecordID:(CKRecordID *)arg1 ;
-(void)submitCloudKitMetricWithOperationGroupName:(id)arg1 useManatee:(BOOL)arg2 ;
-(NSDate *)exitRecordDate;
-(void)_scheduleOperation:(id)arg1 ;
-(void)_scheduleMetricOperation:(id)arg1 useManate:(BOOL)arg2 ;
-(void)writeInitialSyncCompletedRecordIfNeeded;
-(BOOL)_canSubmitCloudKitAnalytic;
-(void)setErrorFetchingExitDate:(NSError *)arg1 ;
-(void)setSubscriptionCreatedOverride:(NSNumber *)arg1 ;
-(BOOL)_analyticZoneCreated;
-(id)_modifiedOpGroupName:(id)arg1 useManatee:(BOOL)arg2 ;
-(void)setSaltZoneCreatedOverride:(NSNumber *)arg1 ;
-(void)writeExitRecordWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeSyncCompletedRecordWithDate:(id)arg1 useManatee:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 useManatee:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(IMDRecordZoneManager *)recordZoneManager;
-(void)exitRecordDateWithCompletion:(/*^block*/id)arg1 ;
-(void)setExitRecordDate:(NSDate *)arg1 ;
-(IMDCKDatabaseManager *)databaseManager;
-(void)_fetchExitRecordDateWithCompletion:(/*^block*/id)arg1 ;
-(void)_evalToggleiCloudSettingsSwitch;
-(BOOL)_subscriptionCreated;
-(void)_setUpSubscription;
-(void)setDatabaseManager:(IMDCKDatabaseManager *)arg1 ;
-(BOOL)_saltZoneCreated;
-(void)submitCloudKitAnalyticWithDictionary:(id)arg1 operationGroupName:(id)arg2 useManatee:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2 ;
-(void)submitCloudKitAnalyticWithOperationGroupName:(id)arg1 useManatee:(BOOL)arg2 analyticDictionary:(id)arg3 ;
-(NSError *)errorFetchingExitDate;
@end

