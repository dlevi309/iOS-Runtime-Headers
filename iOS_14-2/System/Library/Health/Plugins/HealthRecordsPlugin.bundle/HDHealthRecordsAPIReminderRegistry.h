/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_eligibilityStartDateForUnpostedReminder:(id)arg1 ;
-(void)_showClinicalAPISettingsForAppSource:(id)arg1 ;
-(void)_unitTesting_setThrottlingIntervalOverride:(double)arg1 ;
-(BOOL)_queue_isAnyReminderInFlight;
-(void)deregisterAppSourceFromUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(_HDHealthRecordsAPIReminderRegistryEventListener *)_unitTesting_testingEventListener;
-(BOOL)_queue_deregisterAppWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(void)_queue_dropReminder:(id)arg1 ;
-(double)schedulerGracePeriod;
-(id)_criteriaForFirstUnlockActivityCompleted;
-(void)_queue_performUserActionForReminder:(id)arg1 userResponse:(long long)arg2 ;
-(HDXPCScheduler *)triggerScheduler;
-(void)_queue_startListeningForHomescreenUnlockNotifications;
-(void)registerAppSourceForUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)_unitTesting_deferralPeriodOverride;
-(id)_newQueue;
-(void)_queue_scheduleNextTriggerWithNow:(id)arg1 ;
-(double)deferralPeriod;
-(void)set_unitTesting_throttlingIntervalOverride:(NSNumber *)arg1 ;
-(void)_queue_scheduleTriggers;
-(void)_queue_scheduleFireOnHomescreenUnlockIfEligibleWithNow:(id)arg1 ;
-(void)_firePendingReminderIfEligible;
-(void)_handleFirstUnlock;
-(double)throttlingInterval;
-(id)_criteriaForFirstUnlockActivity;
-(void)set_unitTesting_deferralPeriodOverride:(NSNumber *)arg1 ;
-(NSNumber *)_unitTesting_schedulerGracePeriodOverride;
-(void)_checkInForFirstUnlockActivity;
-(HDProfile *)profile;
-(void)_displayStopAlertForPendingReminderID:(id)arg1 transaction:(id)arg2 title:(id)arg3 body:(id)arg4 defaultButtonTitle:(id)arg5 alternateButtonTitle:(id)arg6 ;
-(void)_unitTesting_setSchedulerGracePeriodOverride:(double)arg1 ;
-(void)_handleUserNotificationResponse:(long long)arg1 pendingReminderID:(id)arg2 transaction:(id)arg3 ;
-(id)initWithProfileExtension:(id)arg1 ;
-(NSNumber *)_unitTesting_throttlingIntervalOverride;
-(BOOL)_queue_shouldDropUnlimitedAuthorizationModeReminder:(id)arg1 ;
-(long long)_authorizationModeForRecordsByType:(id)arg1 ;
-(void)_displayUnlimitedAuthorizationModeConfirmationForPendingReminderID:(id)arg1 transaction:(id)arg2 reminder:(id)arg3 ;
-(NSMutableDictionary *)pendingReminderIDsToReminders;
-(BOOL)_readAuthorizationAllowedForAnyTypeInRecordsByType:(id)arg1 ;
-(void)_didProcessPendingReminderID:(id)arg1 transaction:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_startObservingApplicationsUninstalledNotification;
-(void)_queue_handleUserNotificationResponse:(long long)arg1 pendingReminderID:(id)arg2 transaction:(id)arg3 ;
-(void)_unitTesting_setDeferralPeriodOverride:(double)arg1 ;
-(void)_queue_stopListeningForHomescreenUnlockNotifications;
-(void)_unitTesting_setTestingEventListener:(id)arg1 ;
-(id)_queue_nextEligibleFireDate;
-(void)_applicationsUninstalledNotification:(id)arg1 ;
-(double)_timeIntervalForDefaultsKey:(id)arg1 fallbackInterval:(double)arg2 ;
-(void)_handleHomescreenUnlockedNotification:(id)arg1 ;
-(id)_queue_firstEligibleReminderAfterDate:(id)arg1 ;
-(void)set_unitTesting_schedulerGracePeriodOverride:(NSNumber *)arg1 ;
-(void)_scheduleTriggers;
-(void)_queue_firePendingReminderIfEligibleUsingPendingReminderID:(id)arg1 transaction:(id)arg2 ;
-(id)_eligibilityStartDateAfterPostedReminder:(id)arg1 ;
@end

