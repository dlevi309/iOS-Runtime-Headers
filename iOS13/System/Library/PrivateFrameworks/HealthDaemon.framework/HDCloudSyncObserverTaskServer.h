/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncObserverServerInterface.h>
#import <libobjc.A.dylib/HDCloudSyncCoordinatorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HKCloudSyncObserverStatus, NSObservation, NSString;

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncCoordinatorObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HKCloudSyncObserverStatus* _status;
	NSObservation* _waitForSyncObservations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)dealloc;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_startObservingSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2 ;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2 ;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateLastPushDate:(id)arg2 lastPullDate:(id)arg3 ;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2 ;
-(BOOL)_queue_verifyCloudSyncEnabledWithError:(id*)arg1 ;
-(void)_queue_didStartObservingSyncWithStatus:(id)arg1 ;
-(void)_queue_didUpdateSyncStatusWithSyncEnabled:(BOOL)arg1 ;
-(void)_queue_didUpdateSyncStatusWithErrorRequiringUserAction:(id)arg1 ;
-(id)_queue_startSyncIfRestoreNotCompletedWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_didUpdateSyncStatus;
-(long long)_completeCloudSyncRestoreForJournalMergeResult:(long long)arg1 error:(id)arg2 ;
-(long long)_queue_checkCloudSyncEarlyExitConditionsWithError:(id*)arg1 ;
-(void)_queue_syncDidStart;
-(long long)_queue_checkCloudSyncOngoingExitConditionsWithError:(id*)arg1 ;
-(void)_queue_mergeCloudSyncJournalsWithTaskTree:(id)arg1 progress:(id)arg2 ;
-(void)_queue_mergeCloudSyncJournalsForProfile:(id)arg1 progress:(id)arg2 taskTree:(id)arg3 ;
-(void)_queue_didUpdateSyncStatusWithLastPushDate:(id)arg1 lastPullDate:(id)arg2 ;
-(void)_queue_didUpdateSyncStatusWithRestoreCompleteDate:(id)arg1 ;
@end

