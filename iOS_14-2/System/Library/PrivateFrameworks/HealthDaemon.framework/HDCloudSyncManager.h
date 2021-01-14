/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDAnalyticsSubmissionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class HDAssertion, NSDate, HKObserverSet, HDProfile, NSObject, NSString;

@interface HDCloudSyncManager : NSObject <HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate> {

	HDAssertion* _preparedDatabaseAccessibilityAssertion;
	os_unfair_lock_s _lock;
	NSDate* _lock_lastSuccessfulPullDate;
	NSDate* _lock_lastSuccessfulPushDate;
	NSDate* _lock_lastDataUploadRequestStartDate;
	NSDate* _lock_lastDataUploadRequestCompletionDate;
	long long _lock_uploadRequestStatus;
	HKObserverSet* _observers;
	BOOL _supportsRebase;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	long long _inProgressSyncCount;

}

@property (assign,nonatomic) long long inProgressSyncCount;                              //@synthesize inProgressSyncCount=_inProgressSyncCount - In the implementation block
@property (retain) HDAssertion * preparedDatabaseAccessibilityAssertion;                 //@synthesize preparedDatabaseAccessibilityAssertion=_preparedDatabaseAccessibilityAssertion - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) long long bytesPerChangeRecordAssetThreshold; 
@property (readonly) long long bytesPerChangeRecordAssetThresholdHardLimit; 
@property (nonatomic,readonly) BOOL supportsRebase;                                      //@synthesize supportsRebase=_supportsRebase - In the implementation block
@property (nonatomic,readonly) NSDate * lastSuccessfulPullDate; 
@property (nonatomic,readonly) NSDate * lastSuccessfulPushDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_containerIdentifiersWithEncryptionSupportEnabled:(BOOL)arg1 accountManateeEnabled:(BOOL)arg2 internalSettingManateeEnabled:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)daemonReady:(id)arg1 ;
-(void)didCompleteSuccessfulPushWithDate:(id)arg1 ;
-(void)_tinkerContainerIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)_containerIdentifiersForCurrentAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudSyncRepositoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)unitTest_setSupportsRebase:(BOOL)arg1 ;
-(void)_queue_considerStartingBackstopSyncForThreshold:(double)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(long long)bytesPerChangeRecordAssetThreshold;
-(void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2 ;
-(id)prepareForSharingWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchServerPreferredPushEnvironment:(/*^block*/id)arg1 ;
-(void)fetchSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)_syncCircleIdentifierForProfile:(id)arg1 error:(id*)arg2 ;
-(void)prepareForSync;
-(HDAssertion *)preparedDatabaseAccessibilityAssertion;
-(void)_updateDataUploadRequestStatus:(long long)arg1 ;
-(void)_queue_updateAccessibilityAssertion;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDataUploadWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastSuccessfulPushDate;
-(id)shareOwnerParticipantWithError:(id*)arg1 ;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(id)syncSessionForSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 accessibilityAssertion:(id)arg4 excludedStores:(id)arg5 ;
-(void)configureForShareSetupMetadata:(id)arg1 acceptedShares:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isValidOwnerParticipant:(id)arg1 ;
-(void)subscribeToDataUploadRequestsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setShareOwnerParticipant:(id)arg1 error:(id*)arg2 ;
-(id)_containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)lastPushForwardProgressDate;
-(void)_scheduleOwnershipRollForLocalDataLoss;
-(BOOL)supportsRebase;
-(HDProfile *)profile;
-(BOOL)_persistErrorRequiringUserAction:(id)arg1 ;
-(id)fetchShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(long long)inProgressSyncCount;
-(void)removeObserver:(id)arg1 ;
-(id)removeParticipants:(id)arg1 fromSharesWithCompletion:(/*^block*/id)arg2 ;
-(id)setupSharingToAccountWithIdentityLookupInfo:(id)arg1 requireExistingRelationship:(BOOL)arg2 requireZoneDeviceMode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)disableAndDeleteAllSyncDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_removeParticipants:(id)arg1 fromSharesWithCompletion:(/*^block*/id)arg2 ;
-(id)_errorForNilProfile;
-(void)didCompleteSuccessfulPullOfUpdateWithDate:(id)arg1 ;
-(id)syncWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)persistRestoreCompletionDate:(id)arg1 withError:(id*)arg2 ;
-(void)subscribeToDataAvailableNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(id)leaveSharesWithCompletion:(/*^block*/id)arg1 ;
-(id)removeAllParticipantsFromSharesWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreparedDatabaseAccessibilityAssertion:(HDAssertion *)arg1 ;
-(void)setInProgressSyncCount:(long long)arg1 ;
-(id)fetchDescriptionWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canPerformCloudSyncWithError:(id*)arg1 ;
-(NSDate *)lastSuccessfulPullDate;
-(id)resetWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queue_cloudSyncRepositoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)acceptShare:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)lookupParticipantWithIdentityLookUpInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)bytesPerChangeRecordAssetThresholdHardLimit;
-(void)_primaryContainerIdentifiersForCurrentAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudKitEmailAddressWithCompletion:(/*^block*/id)arg1 ;
-(void)_subscribeToSubscriptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)didCompleteSuccessfulPullWithDate:(id)arg1 ;
-(id)syncMedicalIDDataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)updateErrorRequiringUserAction:(id)arg1 ;
@end

