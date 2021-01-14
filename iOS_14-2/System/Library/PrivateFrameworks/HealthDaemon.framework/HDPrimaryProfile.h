/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDProfile.h>

@class HDAgeGatingManager, HDAppSubscriptionManager, HDAWDSubmissionManager, HDCurrentActivitySummaryHelper, HDDataCollectionManager, HDFitnessMachineManager, HDNanoSyncManager, HDNotificationManager, HDHealthServiceManager, HDServiceConnectionManager, HDWorkoutManager, HDDemoDataManager, HDTinkerPrivacyAlertCoordinator;

@interface HDPrimaryProfile : HDProfile {

	HDAgeGatingManager* _ageGatingManager;
	HDAppSubscriptionManager* _appSubscriptionManager;
	HDAWDSubmissionManager* _awdSubmissionManager;
	HDCurrentActivitySummaryHelper* _currentActivitySummaryHelper;
	HDDataCollectionManager* _dataCollectionManager;
	HDFitnessMachineManager* _fitnessMachineManager;
	HDNanoSyncManager* _nanoSyncManager;
	HDNotificationManager* _notificationManager;
	HDHealthServiceManager* _serviceManager;
	HDServiceConnectionManager* _serviceConnectionManager;
	HDWorkoutManager* _workoutManager;
	HDDemoDataManager* _demoDataManager;
	HDTinkerPrivacyAlertCoordinator* _tinkerPrivacyAlertCoordinator;

}
-(id)serviceManager;
-(void)_applyPPTUpdates;
-(id)_newAppSubscriptionManager;
-(void)unitTest_setServiceManager:(id)arg1 ;
-(id)notificationManager;
-(void)terminationCleanup;
-(id)_newNotificationManager;
-(id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 ;
-(id)serviceConnectionManager;
-(id)nanoSyncManager;
-(id)_newWorkoutManager;
-(id)_newNanoSyncManager;
-(id)awdSubmissionManager;
-(id)dataCollectionManager;
-(id)fitnessMachineManager;
-(id)currentActivitySummaryHelper;
-(void)unitTest_setNanoSyncManager:(id)arg1 ;
-(id)activityCacheManager;
-(id)_newAWDSubmissionManager;
-(id)tinkerPrivacyAlertCoordinator;
-(id)workoutManager;
-(id)appSubscriptionManager;
@end

