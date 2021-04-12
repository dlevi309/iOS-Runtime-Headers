/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDHealthRecordsProfileExtension, NSObject, NSOperationQueue, HKObserverSet, NSDate, HDProfile, NSString;

@interface HDClinicalIngestionManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {

	HDHealthRecordsProfileExtension* _profileExtension;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _ingestionOperationQueue;
	long long _ingestionState;
	HKObserverSet* _ingestionStateObserverSet;
	long long _inFlightTaskCount;
	BOOL _scheduleExtractionOnProtectedDataBecomingAvailable;
	BOOL _didCheckWhetherResourcesNeedExtraction;
	NSDate* _ingestionSchedulingBlockedUntil;
	BOOL _unitTesting_preventExtractionScheduling;
	HDProfile* _profile;
	/*^block*/id _unitTesting_didCallDidReceiveFHIRResourceSyncEntities;
	/*^block*/id _unitTesting_didCompleteScheduledExtraction;
	/*^block*/id _unitTesting_didScheduleIngestionAfterQueryNotification;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                         //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) BOOL unitTesting_preventExtractionScheduling;                         //@synthesize unitTesting_preventExtractionScheduling=_unitTesting_preventExtractionScheduling - In the implementation block
@property (nonatomic,copy) id unitTesting_didCallDidReceiveFHIRResourceSyncEntities;               //@synthesize unitTesting_didCallDidReceiveFHIRResourceSyncEntities=_unitTesting_didCallDidReceiveFHIRResourceSyncEntities - In the implementation block
@property (nonatomic,copy) id unitTesting_didCompleteScheduledExtraction;                          //@synthesize unitTesting_didCompleteScheduledExtraction=_unitTesting_didCompleteScheduledExtraction - In the implementation block
@property (nonatomic,copy) id unitTesting_didScheduleIngestionAfterQueryNotification;              //@synthesize unitTesting_didScheduleIngestionAfterQueryNotification=_unitTesting_didScheduleIngestionAfterQueryNotification - In the implementation block
@property (readonly) long long currentIngestionState; 
@property (assign) long long periodicIngestionFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(HDProfile *)profile;
-(long long)currentIngestionState;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)registerIngestionStateChangeObserver:(id)arg1 ;
-(void)performIngestionWithContext:(id)arg1 accountIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)periodicIngestionFrequency;
-(void)setPeriodicIngestionFrequency:(long long)arg1 ;
-(id)initWithProfileExtension:(id)arg1 ;
-(void)didRecieveHealthRecordsQueryNotification:(id)arg1 ;
-(id)_initWithProfileExtension:(id)arg1 ;
-(void)_registerForDaemonReady;
-(void)_setUpPeriodicIngestionWithFrequency:(long long)arg1 ;
-(void)_queue_performProtectedDataAvailableChecks;
-(void)_addIngestionTask:(id)arg1 ;
-(void)_queue_didReceiveFHIRResourceSyncEntities;
-(void)_taskWillReallyBegin;
-(void)_taskDidFinish:(id)arg1 ;
-(void)_queue_setIngestionState:(long long)arg1 ;
-(void)_badgeForNewHealthRecordsFromTask:(id)arg1 ;
-(void)_notifyForNewHealthRecordsFromTask:(id)arg1 ;
-(void)_performMaintenanceIngestionWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_shouldScheduleIngestion;
-(void)scheduleIngestionWithReason:(id)arg1 ;
-(id)_periodicIngestionCriteriaWithPreviousCriteria:(id)arg1 frequency:(long long)arg2 ;
-(void)_performPeriodicIngestionForFrequency:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_scheduleExtractionWithReason:(id)arg1 ;
-(id)unitTesting_didCompleteScheduledExtraction;
-(void)_performExtractionWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterIngestionStateChangeObserver:(id)arg1 ;
-(void)didReceiveFHIRResourceSyncEntities;
-(void)_resetIngestionScheduleBlock;
-(void)notifyForNewHealthRecords;
-(void)badgeForNewHealthRecords;
-(BOOL)unitTesting_preventExtractionScheduling;
-(void)setUnitTesting_preventExtractionScheduling:(BOOL)arg1 ;
-(id)unitTesting_didCallDidReceiveFHIRResourceSyncEntities;
-(void)setUnitTesting_didCallDidReceiveFHIRResourceSyncEntities:(id)arg1 ;
-(void)setUnitTesting_didCompleteScheduledExtraction:(id)arg1 ;
-(id)unitTesting_didScheduleIngestionAfterQueryNotification;
-(void)setUnitTesting_didScheduleIngestionAfterQueryNotification:(id)arg1 ;
@end

