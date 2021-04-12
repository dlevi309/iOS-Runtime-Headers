/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@protocol OS_dispatch_queue;
@class HDHealthRecordsProfileExtension, HDProfile, NSObject, NSNumber, _HDHealthRecordsAPIReminderRegistryEventListener, NSMutableDictionary, HDXPCScheduler;

@interface HDHealthRecordsAPIReminderRegistry : NSObject {

	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* __unitTesting_deferralPeriodOverride;
	NSNumber* __unitTesting_schedulerGracePeriodOverride;
	NSNumber* __unitTesting_throttlingIntervalOverride;
	_HDHealthRecordsAPIReminderRegistryEventListener* __unitTesting_testingEventListener;
	NSMutableDictionary* _pendingReminderIDsToReminders;
	HDXPCScheduler* _triggerScheduler;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;                                                                                    //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                                                                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                                                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double deferralPeriod; 
@property (nonatomic,readonly) double schedulerGracePeriod; 
@property (nonatomic,readonly) double throttlingInterval; 
@property (nonatomic,retain) NSNumber * _unitTesting_deferralPeriodOverride;                                                                                                 //@synthesize _unitTesting_deferralPeriodOverride=__unitTesting_deferralPeriodOverride - In the implementation block
@property (nonatomic,retain) NSNumber * _unitTesting_schedulerGracePeriodOverride;                                                                                           //@synthesize _unitTesting_schedulerGracePeriodOverride=__unitTesting_schedulerGracePeriodOverride - In the implementation block
@property (nonatomic,retain) NSNumber * _unitTesting_throttlingIntervalOverride;                                                                                             //@synthesize _unitTesting_throttlingIntervalOverride=__unitTesting_throttlingIntervalOverride - In the implementation block
@property (setter=_unitTesting_setTestingEventListener:,nonatomic,retain) _HDHealthRecordsAPIReminderRegistryEventListener * _unitTesting_testingEventListener;              //@synthesize _unitTesting_testingEventListener=__unitTesting_testingEventListener - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingReminderIDsToReminders;                                                                                          //@synthesize pendingReminderIDsToReminders=_pendingReminderIDsToReminders - In the implementation block
@property (nonatomic,readonly) HDXPCScheduler * triggerScheduler;                                                                                                            //@synthesize triggerScheduler=_triggerScheduler - In the implementation block
+(void)initialize;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)_applicationsUninstalledNotification:(id)arg1 ;
-(void)_handleFirstUnlock;
-(void)registerAppSourceForUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deregisterAppSourceFromUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithProfileExtension:(id)arg1 ;
-(id)_newQueue;
-(void)_scheduleTriggers;
-(void)_startObservingApplicationsUninstalledNotification;
-(void)_checkInForFirstUnlockActivity;
-(void)_queue_scheduleTriggers;
-(double)throttlingInterval;
-(double)deferralPeriod;
-(void)_queue_scheduleNextTriggerWithNow:(id)arg1 ;
-(void)_queue_scheduleFireOnHomescreenUnlockIfEligibleWithNow:(id)arg1 ;
-(HDXPCScheduler *)triggerScheduler;
-(id)_queue_nextEligibleFireDate;
-(double)schedulerGracePeriod;
-(void)_queue_stopListeningForHomescreenUnlockNotifications;
-(id)_queue_firstEligibleReminderAfterDate:(id)arg1 ;
-(void)_queue_startListeningForHomescreenUnlockNotifications;
-(id)_eligibilityStartDateAfterPostedReminder:(id)arg1 ;
-(id)_eligibilityStartDateForUnpostedReminder:(id)arg1 ;
-(_HDHealthRecordsAPIReminderRegistryEventListener *)_unitTesting_testingEventListener;
-(NSMutableDictionary *)pendingReminderIDsToReminders;
-(void)_queue_firePendingReminderIfEligibleUsingPendingReminderID:(id)arg1 transaction:(id)arg2 ;
-(BOOL)_queue_isAnyReminderInFlight;
-(void)_didProcessPendingReminderID:(id)arg1 transaction:(id)arg2 ;
-(BOOL)_queue_shouldDropUnlimitedAuthorizationModeReminder:(id)arg1 ;
-(void)_queue_dropReminder:(id)arg1 ;
-(void)_displayUnlimitedAuthorizationModeConfirmationForPendingReminderID:(id)arg1 transaction:(id)arg2 reminder:(id)arg3 ;
-(void)_handleUserNotificationResponse:(long long)arg1 pendingReminderID:(id)arg2 transaction:(id)arg3 ;
-(void)_queue_handleUserNotificationResponse:(long long)arg1 pendingReminderID:(id)arg2 transaction:(id)arg3 ;
-(void)_queue_performUserActionForReminder:(id)arg1 userResponse:(long long)arg2 ;
-(void)_showClinicalAPISettingsForAppSource:(id)arg1 ;
-(BOOL)_queue_deregisterAppWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)_authorizationModeForRecordsByType:(id)arg1 ;
-(BOOL)_readAuthorizationAllowedForAnyTypeInRecordsByType:(id)arg1 ;
-(void)_displayStopAlertForPendingReminderID:(id)arg1 transaction:(id)arg2 title:(id)arg3 body:(id)arg4 defaultButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 ;
-(void)_handleHomescreenUnlockedNotification:(id)arg1 ;
-(void)_firePendingReminderIfEligible;
-(id)_criteriaForFirstUnlockActivity;
-(id)_criteriaForFirstUnlockActivityCompleted;
-(NSNumber *)_unitTesting_deferralPeriodOverride;
-(double)_timeIntervalForDefaultsKey:(id)arg1 fallbackInterval:(double)arg2 ;
-(NSNumber *)_unitTesting_schedulerGracePeriodOverride;
-(NSNumber *)_unitTesting_throttlingIntervalOverride;
-(void)set_unitTesting_deferralPeriodOverride:(NSNumber *)arg1 ;
-(void)set_unitTesting_schedulerGracePeriodOverride:(NSNumber *)arg1 ;
-(void)set_unitTesting_throttlingIntervalOverride:(NSNumber *)arg1 ;
-(void)_unitTesting_setDeferralPeriodOverride:(double)arg1 ;
-(void)_unitTesting_setSchedulerGracePeriodOverride:(double)arg1 ;
-(void)_unitTesting_setThrottlingIntervalOverride:(double)arg1 ;
-(void)_unitTesting_setTestingEventListener:(id)arg1 ;
@end

