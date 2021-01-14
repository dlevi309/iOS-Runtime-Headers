/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPAnalyticsEvent.h>

@class NSString, NSDictionary, NSNumber;

@interface HKSPAnalyticsDailyReportEvent : NSObject <HKSPAnalyticsEvent> {

	BOOL _isImproveHealthAndActivitySubmissionAllowed;
	BOOL _watchSleepTrackingEnabled;
	BOOL _timeInBedTrackingEnabled;
	BOOL _bedTimeWindDownRemindersEnabled;
	BOOL _wakeUpResultsEnabled;
	BOOL _scheduledSleepModeEnabled;
	BOOL _chargeRemindersEnabled;
	BOOL _scheduleDisabled;
	BOOL _scheduleMigration;
	BOOL _scheduleChangePast24Hours;
	BOOL _scheduleChangePast7days;
	BOOL _interactedWithWindDownLast24Hrs;
	BOOL _alarmFriday;
	BOOL _alarmMonday;
	BOOL _alarmSaturday;
	BOOL _alarmSunday;
	BOOL _alarmThursday;
	BOOL _alarmTuesday;
	BOOL _alarmWednesday;
	BOOL _scheduleFriday;
	BOOL _scheduleMonday;
	BOOL _scheduleSaturday;
	BOOL _scheduleSunday;
	BOOL _scheduleThursday;
	BOOL _scheduleTuesday;
	BOOL _scheduleWednesday;
	BOOL _isDefaultScheduleFriday;
	BOOL _isDefaultScheduleMonday;
	BOOL _isDefaultScheduleSaturday;
	BOOL _isDefaultScheduleSunday;
	BOOL _isDefaultScheduleThursday;
	BOOL _isDefaultScheduleTuesday;
	BOOL _isDefaultScheduleWednesday;
	NSNumber* _userAge;
	NSString* _biologicalSex;
	NSNumber* _weeksSinceOnboardedSleepSchedule;
	NSNumber* _weeksSinceOnboardedSleepTracking;
	NSNumber* _weeksSinceOnboardedWindDownActions;
	NSString* _activeWatchProductType;
	double _sleepGoal;
	NSString* _hapticToneIdentifierFriday;
	NSString* _hapticToneIdentifierMonday;
	NSString* _hapticToneIdentifierSaturday;
	NSString* _hapticToneIdentifierSunday;
	NSString* _hapticToneIdentifierThursday;
	NSString* _hapticToneIdentifierTuesday;
	NSString* _hapticToneIdentifierWednesday;
	NSNumber* _stddevActualTimeAsleep;
	NSNumber* _stddevScheduledTimeAsleep;
	NSNumber* _stddevActualVsScheduledTimeAsleep;

}

@property (assign,nonatomic) BOOL isImproveHealthAndActivitySubmissionAllowed;              //@synthesize isImproveHealthAndActivitySubmissionAllowed=_isImproveHealthAndActivitySubmissionAllowed - In the implementation block
@property (nonatomic,copy) NSNumber * userAge;                                              //@synthesize userAge=_userAge - In the implementation block
@property (nonatomic,copy) NSString * biologicalSex;                                        //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (nonatomic,copy) NSNumber * weeksSinceOnboardedSleepSchedule;                     //@synthesize weeksSinceOnboardedSleepSchedule=_weeksSinceOnboardedSleepSchedule - In the implementation block
@property (nonatomic,copy) NSNumber * weeksSinceOnboardedSleepTracking;                     //@synthesize weeksSinceOnboardedSleepTracking=_weeksSinceOnboardedSleepTracking - In the implementation block
@property (nonatomic,copy) NSNumber * weeksSinceOnboardedWindDownActions;                   //@synthesize weeksSinceOnboardedWindDownActions=_weeksSinceOnboardedWindDownActions - In the implementation block
@property (nonatomic,copy) NSString * activeWatchProductType;                               //@synthesize activeWatchProductType=_activeWatchProductType - In the implementation block
@property (assign,nonatomic) double sleepGoal;                                              //@synthesize sleepGoal=_sleepGoal - In the implementation block
@property (assign,nonatomic) BOOL watchSleepTrackingEnabled;                                //@synthesize watchSleepTrackingEnabled=_watchSleepTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL timeInBedTrackingEnabled;                                 //@synthesize timeInBedTrackingEnabled=_timeInBedTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL bedTimeWindDownRemindersEnabled;                          //@synthesize bedTimeWindDownRemindersEnabled=_bedTimeWindDownRemindersEnabled - In the implementation block
@property (assign,nonatomic) BOOL wakeUpResultsEnabled;                                     //@synthesize wakeUpResultsEnabled=_wakeUpResultsEnabled - In the implementation block
@property (assign,nonatomic) BOOL scheduledSleepModeEnabled;                                //@synthesize scheduledSleepModeEnabled=_scheduledSleepModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL chargeRemindersEnabled;                                   //@synthesize chargeRemindersEnabled=_chargeRemindersEnabled - In the implementation block
@property (assign,nonatomic) BOOL scheduleDisabled;                                         //@synthesize scheduleDisabled=_scheduleDisabled - In the implementation block
@property (assign,nonatomic) BOOL scheduleMigration;                                        //@synthesize scheduleMigration=_scheduleMigration - In the implementation block
@property (assign,nonatomic) BOOL scheduleChangePast24Hours;                                //@synthesize scheduleChangePast24Hours=_scheduleChangePast24Hours - In the implementation block
@property (assign,nonatomic) BOOL scheduleChangePast7days;                                  //@synthesize scheduleChangePast7days=_scheduleChangePast7days - In the implementation block
@property (assign,nonatomic) BOOL interactedWithWindDownLast24Hrs;                          //@synthesize interactedWithWindDownLast24Hrs=_interactedWithWindDownLast24Hrs - In the implementation block
@property (assign,nonatomic) BOOL alarmFriday;                                              //@synthesize alarmFriday=_alarmFriday - In the implementation block
@property (assign,nonatomic) BOOL alarmMonday;                                              //@synthesize alarmMonday=_alarmMonday - In the implementation block
@property (assign,nonatomic) BOOL alarmSaturday;                                            //@synthesize alarmSaturday=_alarmSaturday - In the implementation block
@property (assign,nonatomic) BOOL alarmSunday;                                              //@synthesize alarmSunday=_alarmSunday - In the implementation block
@property (assign,nonatomic) BOOL alarmThursday;                                            //@synthesize alarmThursday=_alarmThursday - In the implementation block
@property (assign,nonatomic) BOOL alarmTuesday;                                             //@synthesize alarmTuesday=_alarmTuesday - In the implementation block
@property (assign,nonatomic) BOOL alarmWednesday;                                           //@synthesize alarmWednesday=_alarmWednesday - In the implementation block
@property (assign,nonatomic) BOOL scheduleFriday;                                           //@synthesize scheduleFriday=_scheduleFriday - In the implementation block
@property (assign,nonatomic) BOOL scheduleMonday;                                           //@synthesize scheduleMonday=_scheduleMonday - In the implementation block
@property (assign,nonatomic) BOOL scheduleSaturday;                                         //@synthesize scheduleSaturday=_scheduleSaturday - In the implementation block
@property (assign,nonatomic) BOOL scheduleSunday;                                           //@synthesize scheduleSunday=_scheduleSunday - In the implementation block
@property (assign,nonatomic) BOOL scheduleThursday;                                         //@synthesize scheduleThursday=_scheduleThursday - In the implementation block
@property (assign,nonatomic) BOOL scheduleTuesday;                                          //@synthesize scheduleTuesday=_scheduleTuesday - In the implementation block
@property (assign,nonatomic) BOOL scheduleWednesday;                                        //@synthesize scheduleWednesday=_scheduleWednesday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierFriday;                           //@synthesize hapticToneIdentifierFriday=_hapticToneIdentifierFriday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierMonday;                           //@synthesize hapticToneIdentifierMonday=_hapticToneIdentifierMonday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierSaturday;                         //@synthesize hapticToneIdentifierSaturday=_hapticToneIdentifierSaturday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierSunday;                           //@synthesize hapticToneIdentifierSunday=_hapticToneIdentifierSunday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierThursday;                         //@synthesize hapticToneIdentifierThursday=_hapticToneIdentifierThursday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierTuesday;                          //@synthesize hapticToneIdentifierTuesday=_hapticToneIdentifierTuesday - In the implementation block
@property (nonatomic,copy) NSString * hapticToneIdentifierWednesday;                        //@synthesize hapticToneIdentifierWednesday=_hapticToneIdentifierWednesday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleFriday;                                  //@synthesize isDefaultScheduleFriday=_isDefaultScheduleFriday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleMonday;                                  //@synthesize isDefaultScheduleMonday=_isDefaultScheduleMonday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleSaturday;                                //@synthesize isDefaultScheduleSaturday=_isDefaultScheduleSaturday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleSunday;                                  //@synthesize isDefaultScheduleSunday=_isDefaultScheduleSunday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleThursday;                                //@synthesize isDefaultScheduleThursday=_isDefaultScheduleThursday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleTuesday;                                 //@synthesize isDefaultScheduleTuesday=_isDefaultScheduleTuesday - In the implementation block
@property (assign,nonatomic) BOOL isDefaultScheduleWednesday;                               //@synthesize isDefaultScheduleWednesday=_isDefaultScheduleWednesday - In the implementation block
@property (nonatomic,copy) NSNumber * stddevActualTimeAsleep;                               //@synthesize stddevActualTimeAsleep=_stddevActualTimeAsleep - In the implementation block
@property (nonatomic,copy) NSNumber * stddevScheduledTimeAsleep;                            //@synthesize stddevScheduledTimeAsleep=_stddevScheduledTimeAsleep - In the implementation block
@property (nonatomic,copy) NSNumber * stddevActualVsScheduledTimeAsleep;                    //@synthesize stddevActualVsScheduledTimeAsleep=_stddevActualVsScheduledTimeAsleep - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDictionary * eventPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBiologicalSex:(NSString *)arg1 ;
-(NSString *)biologicalSex;
-(NSString *)eventName;
-(NSNumber *)userAge;
-(double)sleepGoal;
-(BOOL)bedTimeWindDownRemindersEnabled;
-(BOOL)chargeRemindersEnabled;
-(BOOL)alarmFriday;
-(BOOL)isImproveHealthAndActivitySubmissionAllowed;
-(BOOL)scheduleChangePast24Hours;
-(BOOL)scheduleChangePast7days;
-(BOOL)scheduleDisabled;
-(BOOL)scheduledSleepModeEnabled;
-(BOOL)scheduleMigration;
-(BOOL)timeInBedTrackingEnabled;
-(BOOL)wakeUpResultsEnabled;
-(BOOL)alarmMonday;
-(BOOL)alarmSunday;
-(BOOL)watchSleepTrackingEnabled;
-(BOOL)interactedWithWindDownLast24Hrs;
-(BOOL)alarmSaturday;
-(BOOL)alarmThursday;
-(BOOL)alarmTuesday;
-(BOOL)alarmWednesday;
-(BOOL)scheduleFriday;
-(BOOL)scheduleMonday;
-(BOOL)scheduleSaturday;
-(BOOL)scheduleSunday;
-(BOOL)scheduleThursday;
-(BOOL)scheduleTuesday;
-(void)setUserAge:(NSNumber *)arg1 ;
-(BOOL)scheduleWednesday;
-(BOOL)isDefaultScheduleFriday;
-(BOOL)isDefaultScheduleMonday;
-(BOOL)isDefaultScheduleSaturday;
-(BOOL)isDefaultScheduleSunday;
-(BOOL)isDefaultScheduleThursday;
-(BOOL)isDefaultScheduleTuesday;
-(BOOL)isDefaultScheduleWednesday;
-(NSString *)hapticToneIdentifierFriday;
-(NSString *)hapticToneIdentifierMonday;
-(NSString *)hapticToneIdentifierSaturday;
-(NSString *)hapticToneIdentifierSunday;
-(NSString *)hapticToneIdentifierThursday;
-(NSString *)hapticToneIdentifierTuesday;
-(NSString *)hapticToneIdentifierWednesday;
-(NSString *)activeWatchProductType;
-(NSNumber *)weeksSinceOnboardedSleepSchedule;
-(NSNumber *)weeksSinceOnboardedSleepTracking;
-(NSNumber *)weeksSinceOnboardedWindDownActions;
-(NSNumber *)stddevActualTimeAsleep;
-(NSNumber *)stddevScheduledTimeAsleep;
-(NSNumber *)stddevActualVsScheduledTimeAsleep;
-(void)setIsImproveHealthAndActivitySubmissionAllowed:(BOOL)arg1 ;
-(void)setActiveWatchProductType:(NSString *)arg1 ;
-(void)setWeeksSinceOnboardedSleepSchedule:(NSNumber *)arg1 ;
-(void)setWeeksSinceOnboardedSleepTracking:(NSNumber *)arg1 ;
-(void)setWeeksSinceOnboardedWindDownActions:(NSNumber *)arg1 ;
-(void)setSleepGoal:(double)arg1 ;
-(void)setWatchSleepTrackingEnabled:(BOOL)arg1 ;
-(void)setTimeInBedTrackingEnabled:(BOOL)arg1 ;
-(void)setBedTimeWindDownRemindersEnabled:(BOOL)arg1 ;
-(void)setWakeUpResultsEnabled:(BOOL)arg1 ;
-(void)setScheduledSleepModeEnabled:(BOOL)arg1 ;
-(void)setChargeRemindersEnabled:(BOOL)arg1 ;
-(void)setScheduleDisabled:(BOOL)arg1 ;
-(void)setScheduleMigration:(BOOL)arg1 ;
-(void)setScheduleChangePast24Hours:(BOOL)arg1 ;
-(void)setScheduleChangePast7days:(BOOL)arg1 ;
-(void)setInteractedWithWindDownLast24Hrs:(BOOL)arg1 ;
-(void)setAlarmFriday:(BOOL)arg1 ;
-(void)setAlarmMonday:(BOOL)arg1 ;
-(void)setAlarmSaturday:(BOOL)arg1 ;
-(void)setAlarmSunday:(BOOL)arg1 ;
-(void)setAlarmThursday:(BOOL)arg1 ;
-(void)setAlarmTuesday:(BOOL)arg1 ;
-(void)setAlarmWednesday:(BOOL)arg1 ;
-(void)setScheduleFriday:(BOOL)arg1 ;
-(void)setScheduleMonday:(BOOL)arg1 ;
-(void)setScheduleSaturday:(BOOL)arg1 ;
-(void)setScheduleSunday:(BOOL)arg1 ;
-(void)setScheduleThursday:(BOOL)arg1 ;
-(void)setScheduleTuesday:(BOOL)arg1 ;
-(void)setScheduleWednesday:(BOOL)arg1 ;
-(void)setHapticToneIdentifierFriday:(NSString *)arg1 ;
-(void)setHapticToneIdentifierMonday:(NSString *)arg1 ;
-(void)setHapticToneIdentifierSaturday:(NSString *)arg1 ;
-(void)setHapticToneIdentifierSunday:(NSString *)arg1 ;
-(void)setHapticToneIdentifierThursday:(NSString *)arg1 ;
-(void)setHapticToneIdentifierTuesday:(NSString *)arg1 ;
-(void)setHapticToneIdentifierWednesday:(NSString *)arg1 ;
-(void)setIsDefaultScheduleFriday:(BOOL)arg1 ;
-(void)setIsDefaultScheduleMonday:(BOOL)arg1 ;
-(void)setIsDefaultScheduleSaturday:(BOOL)arg1 ;
-(void)setIsDefaultScheduleSunday:(BOOL)arg1 ;
-(void)setIsDefaultScheduleThursday:(BOOL)arg1 ;
-(void)setIsDefaultScheduleTuesday:(BOOL)arg1 ;
-(void)setIsDefaultScheduleWednesday:(BOOL)arg1 ;
-(void)setStddevActualTimeAsleep:(NSNumber *)arg1 ;
-(void)setStddevScheduledTimeAsleep:(NSNumber *)arg1 ;
-(void)setStddevActualVsScheduledTimeAsleep:(NSNumber *)arg1 ;
-(NSDictionary *)eventPayload;
@end
