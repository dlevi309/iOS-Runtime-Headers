/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncObserverServerInterface.h>
#import <libobjc.A.dylib/HDCloudSyncManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HKCloudSyncObserverStatus, NSObservation, NSString;

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HKCloudSyncObserverStatus* _status;
	NSObservation* _waitForSyncObservations;
	BOOL _observingSyncStatus;
	BOOL _hasRestoreCompleted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(void)remote_startObservingSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)dealloc;
-(BOOL)_queue_verifyCloudSyncEnabledWithError:(id*)arg1 ;
-(id)_readRestoreCompletionDateWithError:(id*)arg1 ;
-(id)_readErrorRequiringUserActionOnCloudSyncError:(id*)arg1 ;
-(void)_queue_startObservingSync;
-(void)_queue_didUpdateSyncStatusWithSyncEnabled:(BOOL)arg1 ;
-(void)_queue_didUpdateSyncStatusWithErrorRequiringUserAction:(id)arg1 ;
-(id)_queue_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_didUpdateSyncStatus;
-(long long)_completeCloudSyncRestoreForJournalMergeResult:(long long)arg1 error:(id)arg2 ;
-(long long)_queue_checkCloudSyncEarlyExitConditionsWithError:(id*)arg1 ;
-(void)_queue_syncDidStart;
-(long long)_queue_checkCloudSyncOngoingExitConditionsWithError:(id*)arg1 ;
-(void)_queue_mergeCloudSyncJournalsWithTaskTree:(id)arg1 progress:(id)arg2 ;
-(BOOL)_persistRestoreCompletionDate:(id)arg1 ;
-(void)_queue_mergeCloudSyncJournalsForProfile:(id)arg1 progress:(id)arg2 taskTree:(id)arg3 ;
-(void)_queue_didUpdateSyncStatusWithLastPushDate:(id)arg1 ;
-(void)_queue_didUpdateSyncStatusWithLastPullDate:(id)arg1 ;
-(void)_queue_didUpdateSyncStatusWithLastPulledUpdateDate:(id)arg1 ;
-(void)_queue_didUpdateSyncStatusWithRestoreCompleteDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2 ;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2 ;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2 ;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2 ;
-(void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2 ;
-(void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2 ;
-(void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

